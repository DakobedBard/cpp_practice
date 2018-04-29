/*

	In this program we are calling the virtual function fun() from the constructor of the Base class..  When we create the object of type Derived, we call the constructor for the Base class first.  

When a virtual function is called directly or indirectly from a constructor (including from the mem-initializer for a data member) or from a destructor, and the object to which the call applies is the object under construction or destruction, the function called is the one defined in the constructor or destructor’s own class or in one of its bases, but not a function overriding it in a class derived from the constructor or destructor’s class, or overriding it in one of the other base classes of the most derived object.

Because of this behavior it is recommended that an object's virtual function is not invoked while it is being constructed or destroyed.  

*/

#include <iostream>


class Base{
  public:
	Base(){
		fun();		
	}

	virtual void fun(){
		std::cout << "fun() from Base" << std::endl;
	}

};


class Derived: public Base{

  public:

	Derived(){}
	
	virtual void fun(){
		std::cout << "fun() from derivied" <<std::endl;
	}


};

int main(){
	Base *base_ptr = new Derived();
}
