/*

Hiding of aqll overloaded methods with the same name in base class

In c++ if a derived class redefines base class member method then all the base class methods with same name become hidden in derived class.  



*/


#include <iostream>

class Base{
  public:
	int fun(){
		std::cout << "Base::fun() called" << std::endl;
	}
	int fun(char x) {
		std::cout << "Base::fun(int i) called" <<std::endl;
	}
	

};

class Derived: public Base{

  public:
	int fun(int i){
		std::cout << "Derived::fun() called" <<std::endl;
	}
};





int main(){
	Derived d;
	// d.fun();		This function is not accessible in the derived class 
}
