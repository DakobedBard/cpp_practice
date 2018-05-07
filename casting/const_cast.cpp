/*

The const_cast keyword can be used to remove the const or volatile property from an object.  The target data type must be the same as the source type, except of course that the target type doesn't have the same const qualifier.  The type TYPE must be a pointer or reference type...

    TYPE* const_cast<TYPE*> (object);
    TYPE& const_cast<TYPE&> (object);


*/

#include <iostream>

class Foo{
  public:
	void func(){											// a non-const member function
		std::cout << "func is a non-const member function" << std::endl;

	}
};

void someFunction(const Foo& f){

	// f.func();		If we try to call a non-const member function of Foo using a const object.. we wuill have a compiler error.. 
	Foo &fRef = const_cast<Foo&>(f);
	fRef.func();			// this is okay...

}



int main(){

}
