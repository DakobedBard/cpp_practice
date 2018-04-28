/* Safe bool idiom... 

Number of ways to provide boolean tests for classes.  Some types for example pointers 

Some types, for example pointers, allow us to test their validity in Boolean contexts. Any rvalue of arithmetic, enumeration, pointer, or pointer to member type, can be implicitly converted to an rvalue of type bool. We frequently use this property to select a branch of code to execute, for example when acquiring a resource:

  if (some_type* p=get_some_type()) {
    // p is valid, use it
  }
  else {
    // p is not valid, take proper action
  }
Of course, such usage is not only useful for built-in types; any type with an unambiguous meaning of validity could greatly benefit from such a Boolean conversion. The alternative is to use a member function for testing. As an example, consider testing a smart pointer (without an implicit conversion to the contained pointer) for validity:

  smart_ptr<some_type> p(get_some_type());
  if (p.is_valid()) {
    // p is valid, use it
  }
  else {
    // p is not valid, take proper action
  }
Besides being more verbose, this version differs from the previous in that the name p needs to be declared outside of the scope in which it is used. This is bad from a maintenance perspective. Also, the name is_valid will probably differ depending on the type of smart pointer at useï¿½it can just as well be is_empty, Empty, Valid, or any other name a creative designer might have thought of when creating it. Finally, even when disregarding the naming issue and the problem with declaration scope, for smart pointers there's the very real requirement to support pointer-like use. It should typically be possible to convert existing code to make use of smart pointers rather than raw pointers, with a minimum of change to the code base, e.g., code like this should work regardless of pointer smartness:

  template <typename T> void some_func(const T& t) {
    if (t)    
      t->print();
  }
Without some conversion to a Boolean testable type, the above if-statement won't compile for smart pointers. The goal that we set out to accomplish in this article is making that conversion safe. As we shall see, that's a bit harder than one would imagine at first glance.

The Obvious Approach Is operator bool
This classical approach has a straightforward implementation. I'll use the same class (Testable) throughout this article, as seen in the following code:

   // operator bool version
  class Testable {
    bool ok_;
  public:
    explicit Testable(bool b=true):ok_(b) {}

    operator bool() const {
      return ok_;
    }
  };

  // operator! version
  class Testable {
    bool not_ok_;
  public:
    explicit Testable(bool b=true):not_ok_(!b) {}

    bool operator!() const {
      return not_ok_;
    }
  };

  // operator void* version
  class Testable {
    bool ok_;
  public:
    explicit Testable(bool b=true):ok_(b) {}

    operator void*() const {
      return ok_==true ? this : 0;
    }
  };

  // nested class version
  class Testable {
    bool ok_;
  public:
    explicit Testable(bool b=true):ok_(b) {}

    class nested_class {};

    operator const nested_class*() const {
      return ok_ ? reinterpret_cast<const nested_class*>(this) : 0;
    }
  };
Note the implementation for the conversion function:

  operator bool() const {
    return ok_;
  }
Now, we can use instances of the class in expressions like this:

  Testable test;
  if (test) 
    std::cout << "Yes, test is working!\n";
  else 
    std::cout << "No, test is not working!\n";
That's fine, but there's a nasty caveat to this as the conversion function has just told the compiler that it's free to do things behind our backs (lesson 0: never trust a compiler to do your job for you; at least not to do it properly);

  test << 1;
  int i=test;
These are both nonsense operations, but yet allowed and legal C++ (we also have the issue of overloading to consider, which makes things even worse). So, operator bool is not a very good approach. We're also able to compare any types that utilize this technique with each other, although that rarely makes sense:

  Testable a;
  AnotherTestable b;

  if (a==b) {A Reusable Solution
If you're like me, you don't want to follow the aforementioned steps every time you need to make a class ï¿½Boolean testableï¿½. You want something reusable, and you deserve no less! There are two plausible solutions: Using a base class with a virtual function for the actual logic, or a base class that knows which function to call on the derived class. As virtual functions come at a cost (especially if the class you're augmenting with Boolean tests doesn't contain any other virtual functions), I add support for both versions below:
  class safe_bool_base {
  protected:
    typedef void (safe_bool_base::*bool_type)() const;
    void this_type_does_not_support_comparisons() const {}

    safe_bool_base() {}
    safe_bool_base(const safe_bool_base&) {}
    safe_bool_base& operator=(const safe_bool_base&) {return *this;}
    ~safe_bool_base() {}
  };

  template <typename T=void> class safe_bool : public safe_bool_base {
  public:
    operator bool_type() const {
      return (static_cast<const T*>(this))->boolean_test()
        ? &safe_bool_base::this_type_does_not_support_comparisons : 0;
    }
  protected:
    ~safe_bool() {}
  };

  template<> class safe_bool<void> : public safe_bool_base {
  public:
    operator bool_type() const {
      return boolean_test()==true ? 
        &safe_bool_base::this_type_does_not_support_comparisons : 0;
    }
  protected:
    virtual bool boolean_test() const=0;
    virtual ~safe_bool() {}
  };

  template <typename T, typename U> 
    void operator==(const safe_bool<T>& lhs,const safe_bool<U>& rhs) {
      lhs.this_type_does_not_support_comparisons();	
      return false;
  }

  template <typename T,typename U> 
  void operator!=(const safe_bool<T>& lhs,const safe_bool<U>& rhs) {
    lhs.this_type_does_not_support_comparisons();
    return false;	
  }
Here's how to use safe_bool:

  class Testable_with_virtual : public safe_bool<> {
  protected:
    bool boolean_test() const {
      // Perform Boolean logic here
    }
  };

  class Testable_without_virtual : 
    public safe_bool <Testable_without_virtual> {
  public:
    bool boolean_test() const {
      // Perform Boolean logic here
    }
  };
The first class, Testable_with_virtual, derives publicly from safe_bool, and implements a virtual function boolean_test—this function is called whenever an instance is tested (as in if (obj){}, or if (!obj){}). The second class, Testable_without_virtual, also derives publicly from safe_bool, and in addition, it passes itself as a template parameter to its base class. This little trick—known as the Curiously Recurring Template Pattern— enables the base class to downcast (to the derived class) using static_cast and call boolean_test with no extra runtime overhead and no virtual function calls. Some people may feel that this is a slight misuse of inheritance; while it might be argued that an instance of a derived class is-a safe_bool of sorts, this is certainly not the intent of this code. However, there is little reason to believe that even neophyte programmers will fall into the trap of misunderstanding this relationship. The destructors of the safe_bool classes are protected to minimize the potential for misuse. But there's still hope for the (in my opinion, overly) conscientious object-oriented purist; use private inheritance, and make the conversion function public by reintroducing it in the correct scope:

  class Testable_without_virtual : 
    private safe_bool <Testable_without_virtual> {
  public:
    using safe_bool<Testable_without_virtual>::operator safe_bool;

    bool boolean_test() const {
      return true; // Logic goes here!
    }
  };
Matthew Wilson [5] pointed out that the inheritance strategy (using safe_bool as a base class) may lead to size penalties on some compilers, specifically, those that do not implement EBO (Empty Base Optimization) properly. Although most modern compilers do when it comes to single inheritance, there may be a size penalty with multiple inheritance.

Knowing When to Say No
Yes, this is a cool idiom, and you're probably eager to try it out on some of your own classes, right? Before you go ahead, please consider that it's imperative to understand that this idiom should only be used where there is a reasonably unambiguous notion of validity for objects of a class. Consider the void* conversion in iostreams. Do you know which state flags are considered in that test? Most people probably think they do. I looked it up and realized that at least I was wrong—the eofbit flag is ignored. This goes to show that if programmers' expectations of the semantics may differ, providing a member function with a descriptive name is much better. In the case of iostreams, it's reasonable to test for errors using fail(), and failure of input using !good(). For a container class, having a conversion function would be absolutely disastrous, because the possible interpretations of its meaning are so plentiful. For most classes, the proper way to design tests for validity is to provide member functions with clever names, not clever conversion functions. There you go.
Prior Art
New discoveries typically build on previous findings, and the safe bool idiom is no different; in addition to existing protocols with similar properties, related topics have been thoroughly treated in books and articles. The following is by no means an exhaustive listing, but rather a small collection of important contributions that I've come across [6].
Scott Meyers discusses the pitfalls of conversion functions in his classic book, More Effective C++ [Addison-Wesley, 1995] (Item 5). He also endorses the protocol discovered by Don Box on the errata page for the aforementioned book.
Don Box demonstrates the nested class technique in C++ Report (published March 1996).
Stephen C. Dewhurst talks about the misuse(s) of conversion functions in his great book, C++ Gotchas [Addison-Wesley, 2002].
Angelika Langer and Klaus Kreft demonstrate how the streams' void* conversion works in their IOStreams tome, Standard C++ IOStreams and Locales.
Without the work of these people, and others who've come to the same conclusions, chances are that the safe bool idiom would not have seen the light of day.

Summary
As C++ programmers, we accept that there are a number of different ways to reach a programming goal—and different approaches typically involve different tradeoffs. Carefully balancing usability and safety is hard, and depending on which side of the fence you're standing on, you'll either be screaming "safety", or "usability" first. It's therefore especially satisfying to be able to present a solution to a common problem that appeals to both sides. As usual, I would have liked to say that this was my idea—but, also as usual, that is not the case. The man behind this ingenious idea is Peter Dimov [7,8], and it's to him we should send our thanksï¿½as users, and as library developers.  

  }

  if (a<b) {
  }
What else can we do? Well, one improvement is to add another (private) conversion function to an integral type, and thereby disallow the nonsensical operations, even those for equality and ordering. Simply declaring a private conversion function to int does the trick. However, some drawbacks remain, making the solution less than satisfactory. The error messages when a user invokes the ambiguity aren't consistent, or readable. Also, these conversion functions may interfere with perfectly valid conversions and overloads. So we must look elsewhere for a clean solution to this problem.

Not Exactly Obvious, operator!
It's time to move on to safer ground, through operator!. Programmers are already accustomed to using this unary logical negation operator in Boolean contexts, which is a desirable property for intuitive usage. Still, some users might not be ready for what some people call the double-bang trick (see below), which is a requirement for checking the "good state" of such an object. The implementation is trivial:

  bool operator!() const {
    return !ok_;
  }
This is a much better approach—no more implicit conversion or overloading issues to worry about, and two idiomatic ways of testing Testable:

  Testable test;
  if (!!test) 
    std::cout << "Yes, test is working!\n";
  if (!test2) {
    std::cout << "No, test2 is not working!\n";
The first version utilizes a useful trick: if (!!test). It's sometimes called the double-bang trick [1], but alas, it is not nearly as elegant or straightforward as if (test). [Editor's note: This is an old C trick used to map non-zero values to the number 1 so you can have numeric integer values map into a binary-valued index (0 or 1) for use with an array of size two] This is a pity, because if people don't understand how something works it really doesn't matter whether it's safe or not. It's still a very useful technique, but it will typically be used in library code, where ï¿½ordinaryï¿½ users never see it. Of course, it's still possible to compare different types, just as was the case with the first approach (although the obscure syntax should make it obvious that it rarely makes sense to do so). Are there better ways than this?


A Seemingly Innocent Approach ï¿½ operator void*


Here's a clever idea—using a conversion function to void*. It's clever because there aren't that many things you can do with a void* except test it in Boolean contexts. Here's how it works:

  operator void*() const {
    return ok_==true ? this : 0;
  }
Another trivial implementation! Don't worry, from here on nothing's trivial... As you might have guessed, this solution is flawed, too. The problem is that it is now possible to do this:

  Testable test;
  delete test; 
Ouch! If you think that this situation can be saved with a little const trickery, think again: The C++ Standard explicitly allows delete expressions with pointers to const types [2]. Perhaps the best-known use of this technique comes from the C++ Standardï¿½ the conversion that allows the state of iostreams to be queried uses it. However, while the intention is this;

  if (std::cout) { // Is the stream ok?
  }
it is also quite possible to do this;

  std::cout << std::cin << std::cout;
Also, using a conversion like this means that it is possible to test instances of different types in Boolean contexts (all types that utilize this flawed idiom). So, it's time to get radical, and travel deeper into C++ territory.

Almost Getting There with a Nested Class
In 1996, Don Box wrote about a very clever technique in his C++ Report columnï¿½a technique originally created to support testing for nullnessï¿½that almost does what we came here for. It involves a conversion function to a nested type (that doesn't even need to be defined), like so:
  class Testable {
    bool ok_;
  public:
    explicit Testable(bool b=true):ok_(b) {}

    class nested_class;

    operator const nested_class*() const {
      return ok_ ? reinterpret_cast<const nested_class*>(this) : 0;
    }
  };
Now, this version supports Boolean tests, but alas, too much so. We're now able to write erroneous things like this:

  Testable b1,b2;

  if (b1==b2) {
  }

  if (b1<b2) {
  }
We could poison all operators that have been enabled by the conversion to make the algorithm a better fit for our purposes, but there's an even better way.

The Safe Bool Idiom
It's time to make these tests safe. Remember that we need to avoid unsafe conversions that allow for erroneous usage. We must also avoid overloading issues, and we definitely shouldn't allow deletion through the conversion. So, what do we do? Without further ado, let me give you the solution in code.
  class Testable {
    bool ok_;
    typedef void (Testable::*bool_type)() const;
    void this_type_does_not_support_comparisons() const {}
  public:
    explicit Testable(bool b=true):ok_(b) {}

    operator bool_type() const {
      return ok_==true ? 
        &Testable::this_type_does_not_support_comparisons : 0;
    }
  };
Simple, eh? Let's examine what's going on here. First, we typedef bool_type to be a pointer to a const member function of Testable, taking zero arguments and returning void. This is our magic type that allows for testing in Boolean contexts, without taking part in overloading contexts. Next, we define a conversion function to bool_type, just as we did with bool and void* earlier. Finally, we return "true" using a pointer to a member function (this_type_does_not_support_comparisons), which fits the bool_type, and a null value for "false". It's now possible to safely test instances of Testable in Boolean contexts. The strange name does have a purpose; read on to find out what it is!

Compared to a conversion function to bool, we have avoided the unfortunate overloading issues, and the effects of returning an integral type (making some nonsense constructs legal). We have added the usability that was obscured by operator!, and disabled the potential delete issue with operator void*. Quite impressive! There's one additional twist that makes the solution complete, and that is to disable comparisons between distinct instances of Testable. With our current implementation, you can write code like this:

  Testable test;
  Testable test2;
  if (test1==test2) {}
  if (test!=test2) {}
Comparisons like the above are not only meaningless; they're dangerous, because they imply an equivalence relationship that can never exist between different instances of Testable. We need to find a way to disable such nonsensical comparisons.

  template <typename T> 
    bool operator!=(const Testable& lhs,const T& rhs) {
	lhs.this_type_does_not_support_comparisons();	
      return false;	
    } 
  template <typename T>
    bool operator==(const Testable& lhs,const T& rhs) {
	lhs.this_type_does_not_support_comparisons();
      return false;		
    }
Of course! By defining operator== and operator!= as non-members, and having them attempt to call a non-public member (this_type_does_not_support_comparisons) on the Testable argument will result in a compile error, thus disallowing tests that don't make sense [3]. (The obvious versions taking Testable as the second argument are omitted here for brevity.) Using parameterized implementations, we ensure that an error is only emitted if and when a comparison function is instantiated. The long (and fairly descriptive) name of the called member function will definitely be part of the compiler error message if a comparison function is instantiated, making it easy to locate and correct the error. For tests that you do want to allow, simply define the comparison operators as usual.

This, my friends, is the safe bool idiom. When people started using this idiom, it was discovered that there was an efficiency penalty on some compilers — the member function pointer caused a compiler headache resulting in slower execution when the address was fetched. Although the difference is marginal, the current practice is typically to use a member data pointer instead of a member function pointer. [4]

A Reusable Solution
If you're like me, you don't want to follow the aforementioned steps every time you need to make a class ï¿½Boolean testableï¿½. You want something reusable, and you deserve no less! There are two plausible solutions: Using a base class with a virtual function for the actual logic, or a base class that knows which function to call on the derived class. As virtual functions come at a cost (especially if the class you're augmenting with Boolean tests doesn't contain any other virtual functions), I add support for both versions below:
  class safe_bool_base {
  protected:
    typedef void (safe_bool_base::*bool_type)() const;
    void this_type_does_not_support_comparisons() const {}

    safe_bool_base() {}
    safe_bool_base(const safe_bool_base&) {}
    safe_bool_base& operator=(const safe_bool_base&) {return *this;}
    ~safe_bool_base() {}
  };

  template <typename T=void> class safe_bool : public safe_bool_base {
  public:
    operator bool_type() const {
      return (static_cast<const T*>(this))->boolean_test()
        ? &safe_bool_base::this_type_does_not_support_comparisons : 0;
    }
  protected:
    ~safe_bool() {}
  };

  template<> class safe_bool<void> : public safe_bool_base {
  public:
    operator bool_type() const {
      return boolean_test()==true ? 
        &safe_bool_base::this_type_does_not_support_comparisons : 0;
    }
  protected:
    virtual bool boolean_test() const=0;
    virtual ~safe_bool() {}
  };

  template <typename T, typename U> 
    void operator==(const safe_bool<T>& lhs,const safe_bool<U>& rhs) {
      lhs.this_type_does_not_support_comparisons();	
      return false;
  }

  template <typename T,typename U> 
  void operator!=(const safe_bool<T>& lhs,const safe_bool<U>& rhs) {
    lhs.this_type_does_not_support_comparisons();
    return false;	
  }
Here's how to use safe_bool:

  class Testable_with_virtual : public safe_bool<> {
  protected:
    bool boolean_test() const {
      // Perform Boolean logic here
    }
  };

  class Testable_without_virtual : 
    public safe_bool <Testable_without_virtual> {
  public:
    bool boolean_test() const {
      // Perform Boolean logic here
    }
  };
The first class, Testable_with_virtual, derives publicly from safe_bool, and implements a virtual function boolean_test—this function is called whenever an instance is tested (as in if (obj){}, or if (!obj){}). The second class, Testable_without_virtual, also derives publicly from safe_bool, and in addition, it passes itself as a template parameter to its base class. This little trick—known as the Curiously Recurring Template Pattern— enables the base class to downcast (to the derived class) using static_cast and call boolean_test with no extra runtime overhead and no virtual function calls. Some people may feel that this is a slight misuse of inheritance; while it might be argued that an instance of a derived class is-a safe_bool of sorts, this is certainly not the intent of this code. However, there is little reason to believe that even neophyte programmers will fall into the trap of misunderstanding this relationship. The destructors of the safe_bool classes are protected to minimize the potential for misuse. But there's still hope for the (in my opinion, overly) conscientious object-oriented purist; use private inheritance, and make the conversion function public by reintroducing it in the correct scope:

  class Testable_without_virtual : 
    private safe_bool <Testable_without_virtual> {
  public:
    using safe_bool<Testable_without_virtual>::operator safe_bool;

    bool boolean_test() const {
      return true; // Logic goes here!
    }
  };
Matthew Wilson [5] pointed out that the inheritance strategy (using safe_bool as a base class) may lead to size penalties on some compilers, specifically, those that do not implement EBO (Empty Base Optimization) properly. Although most modern compilers do when it comes to single inheritance, there may be a size penalty with multiple inheritance.

Knowing When to Say No
Yes, this is a cool idiom, and you're probably eager to try it out on some of your own classes, right? Before you go ahead, please consider that it's imperative to understand that this idiom should only be used where there is a reasonably unambiguous notion of validity for objects of a class. Consider the void* conversion in iostreams. Do you know which state flags are considered in that test? Most people probably think they do. I looked it up and realized that at least I was wrong—the eofbit flag is ignored. This goes to show that if programmers' expectations of the semantics may differ, providing a member function with a descriptive name is much better. In the case of iostreams, it's reasonable to test for errors using fail(), and failure of input using !good(). For a container class, having a conversion function would be absolutely disastrous, because the possible interpretations of its meaning are so plentiful. For most classes, the proper way to design tests for validity is to provide member functions with clever names, not clever conversion functions. There you go.
Prior Art
New discoveries typically build on previous findings, and the safe bool idiom is no different; in addition to existing protocols with similar properties, related topics have been thoroughly treated in books and articles. The following is by no means an exhaustive listing, but rather a small collection of important contributions that I've come across [6].
Scott Meyers discusses the pitfalls of conversion functions in his classic book, More Effective C++ [Addison-Wesley, 1995] (Item 5). He also endorses the protocol discovered by Don Box on the errata page for the aforementioned book.
Don Box demonstrates the nested class technique in C++ Report (published March 1996).
Stephen C. Dewhurst talks about the misuse(s) of conversion functions in his great book, C++ Gotchas [Addison-Wesley, 2002].
Angelika Langer and Klaus Kreft demonstrate how the streams' void* conversion works in their IOStreams tome, Standard C++ IOStreams and Locales.
Without the work of these people, and others who've come to the same conclusions, chances are that the safe bool idiom would not have seen the light of day.

Summary
As C++ programmers, we accept that there are a number of different ways to reach a programming goal—and different approaches typically involve different tradeoffs. Carefully balancing usability and safety is hard, and depending on which side of the fence you're standing on, you'll either be screaming "safety", or "usability" first. It's therefore especially satisfying to be able to present a solution to a common problem that appeals to both sides. As usual, I would have liked to say that this was my idea—but, also as usual, that is not the case. The man behind this ingenious idea is Peter Dimov [7,8], and it's to him we should send our thanksï¿½as users, and as library developers.  


*/




#include <iostream>



struct test{
	operator bool(){
		return true;
	}
};

int main(){

	test t;
	if(t){
		// The struct of type t has been passed to an expression that expects a boolean.  We have an operator in our struct
		// 	
	
	}	
	
}
