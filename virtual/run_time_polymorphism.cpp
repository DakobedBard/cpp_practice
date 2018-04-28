/*

This program shows run time polymorphism.  We are able to declare a pointer to the Base class, and then bind a pointer to the Derived class.  What happens if we try the opposite?


Derived *dp = new Base;

This is an invalid conversion... Do not do this..  

What about default arguments in a virtual function?

In this case our Base classes version of the virtual function has a default parameter x =0.  Will this hold for the Derived class?

In this case, our pionter to the Base class object calls the derived classes overrriden function, but the default parameter from the 
virtual function in the Base class is still used.  

The default parameter seems to belong to the class of the type whose pointer is calling the function... 

Since we have a Base *, which calls the function with the default parameters, even though we call the derived functions show()... We still have the default parameter of the Base classes' show() function.... 


*/



#include <iostream>


class Base{
  public:
	virtual void show(){
		std::cout << "Show in Base.." << std::endl;
	}

	virtual void default_parameter_func(int x =0){

		std::cout << "Base::default_parameter_func(). x = " << x << std::endl;
	}

};

class Derived :public Base {
  public:	


	void show(){
		std::cout << "Show in Derived.." << std::endl;
	}

	virtual  void default_parameter_func(int x ){

		std::cout << "Derived::default_parameter_func(). x = " << x << std::endl;
	}	


  private:

	int x;
};


int main(){
	Base *p = new Derived;
	p->show();


	Derived d1;
	Base *base_ptr = &d1;
	base_ptr->default_parameter_func();


	// We know how virtual functions work with pointers... The type of pointer does not matter, it is the object that gets assigned to 
	// to this pointer that determines which function gets called.  what about references?  
	

	Base *bp = new Derived;
	Base &br = *bp; 					// Create a reference to our new Base *.  What function will this call?
	std::cout << "Which function does the ferences return"	<< std::endl;					
								// References are nothing more than aliases to the variable they refer to..
	br.show();							// It SHOULD behave the same way. 
		
	return 0;
}
