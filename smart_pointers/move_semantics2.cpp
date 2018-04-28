/*

Now imagine instead of having a soze foe;d. we had a metadata field that looked like so..

Does this work?  It seems natural to call the MetaData move constructor from within the move constructor for ArrayWrapper?  The problem is that this just doesn't work.  The reason is simple:  the value of other in the move constructoe -- it's an rvalue reference.  But an rvalue reference is not, in fact, an rvalue.  It's an lvalue, and so the copy constructor is called, not the move constructor.  

This is weird and confusing!

A rvalue is an expression that creates an object that is about to evaporate into thin air. It's on its last legs in life--or about to fulfill its life purpose. Suddenly we pass the temporary to a move constructor, and it takes on new life in the new scope. In the context where the rvalue expression was evaluated, the temporary object really is over and done with. But in our constructor, the object has a name; it will be alive for the entire duration of our function. In other words, we might use the variable other more than once in the function, and the temporary object has a defined location that truly persists for the entire function. It's an lvalue in the true sense of the term locator value, we can locate the object at a particular address that is stable for the entire duration of the function call. We might, in fact, want to use it later in the function. If a move constructor were called whenever we held an object in an rvalue reference, we might use a moved object, by accident!

Put a final way: both lvalue and rvalue references are lvalue expressions. The difference is that an lvalue reference must be const to hold a reference to an rvalue, whereas an rvalue reference can always hold a reference to an rvalue. It's like the difference between a pointer, and what is pointed to. The thing pointed-to came from an rvalue, but when we use rvalue reference itself, it results in an lvalue.


std::move
So what's the trick to handling this case? We need to use std::move, from <utility>--std::move is a way of saying, "ok, honest to God I know I have an lvalue, but I want it to be an rvalue." std::move does not, in and of itself, move anything; it just turns an lvalue into an rvalue, so that you can invoke the move constructor. Our code should look like this:

Move assignment operator
Just as we have a move constructor, we should also have a move assignment operator. You can easily write one using the same techniques as for creating a move constructor.

Move constructors and implicitly generated constructors
As you know, in C++ when you declare any constructor, the compiler will no longer generate the default constructor for you. The same is true here: adding a move constructor to a class will require you to declare and define your own default constructor. On the other hand, declaring a move constructor does not prevent the compiler from providing an implicitly generated copy constructor, and declaring a move assignment operator does not inhibit the creation of a standard assignment operator.

How does std::move work
You might be wondering, how does one write a function like std::move? How do you get this magical property of transforming an lvalue into an rvalue reference? The answer, as you might guess, is typecasting. The actual declaration for std::move is somewhat more involved, but at its heart, it's just a static_cast to an rvalue reference. This means, actually, that you don't really need to use move--but you should, since it's much more clear what you mean. The fact that a cast is required is, by the way, a very good thing! It means that you cannot accidentally convert an lvalue into an rvalue, which would be dangerous since it might allow an accidental move to take place. You must explicitly use std::move (or a cast) to convert an lvalue into an rvalue reference, and an rvalue reference will never bind to an lvalue on its own.



*/

#include <iostream>
#include <vector>
#include <utility>		// For std::move



class MetaData
{
  public:
    	MetaData (int size, const std::string& name): _name( name ) , _size( size ){}
 
    	// copy constructor
    	MetaData (const MetaData& other) : _name( other._name ) , _size( other._size ){}
 
    	// move constructor
    	// MetaData (MetaData&& other) : _name( other._name ) , _size( other._size ) {}
 	// 
	// LET US USE std::move() on the string in meta dat... 

	MetaData(MetaData&& other) : _name(std::move(other._name)), _size(other._size){}


    	std::string getName () const { return _name; }
    	int getSize () const { return _size; }
  private:
    	std::string _name;
    	int _size;
};



class ArrayWrapper{
  public:
	
	// This is our constructor...
	ArrayWrapper(int n) :p_vals(new int[n]),  metadata_(n,"ArrayWrapper"){}		

	// WE DISCUSSED EARLIER THAT THIS APPROACH TO THE MOVE CONSTRUCTOR DOES NOT WORK..
	// 	Move constructor takes an rvalue reference ArrayWrapper&& 
	//	
	//	ArrayWrapper(ArrayWrapper&& other):p_vals(other.p_vals), metadata_(other.metadata_){
	//		other.p_vals = NULL;
	//	}
		
	ArrayWrapper(ArrayWrapper&& other): p_vals(other.p_vals), metadata_(std::move(other.metadata_)){
		other.p_vals =NULL;
	}
	


	// Copy constructor takes an lvalue reference ArrayWrapper&

	ArrayWrapper(const ArrayWrapper& other): p_vals(new int[other.metadata_.getSize()]), metadata_(other.metadata_){
		for(int i =0; i < i< metadata_.getSize(); ++i){
			p_vals[i] = other.p_vals[i];
		}
	}
	~ArrayWrapper(){
		delete [] p_vals;
	}


  private:
	int size_;
	int *p_vals;
	MetaData metadata_;

};

int main(){

}
