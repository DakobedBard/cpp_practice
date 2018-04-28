/* This program demonstrates the use templates in functions and classes.

Though both of the methods to create a generic type is similar, but they vary at some places, while the implementation property that they possess is the same.

1) Type erasure : Type erasure ensures tighter type check during compile time. Java generics simply offer compile-time safety and eliminate the need for casts. This is directly implemented in the Java compiler front-end and make sure type erasure is done.


2)In C++ when you use a template the compiler will emit the template code again after replacing the generic parameter in it with the type you used. This is more powerful in several ways but can lead to bloated executables.

3)Wrapper class : In Java, Even if we have to specifically specify the datatype within which the function call using any object, we don’t need to cast it similar to that of C++ with actual data types, rather we use wrapper classes to do the required.

4) Type Checking : Java Generics handles type checking during instantiation and generates byte-code equivalent to non-generic code C++ has “latent typing” and template metaprogramming and generates a new class for each instantiation


*/



#include <iostream>
#include <string>

template <class T>
class Template_Class{
  public:
	Template_Class(T item):value(item){}

	T getValue(){
		return value;
	}


  private:
	T value;
};

// Now lets expireemtn with function templates...







int main(){
	Template_Class<int> t(3);				// Stack allocated TestClass...

	Template_Class<int> *template_class_pointer = new Template_Class<int>(4);

	//class TestClass<std::string> *string_test_class = new TestClass<string>("Templates");

	//TempClass<std::string>* String =    new TempClass<std::string>("Generics vs Templates");

}



