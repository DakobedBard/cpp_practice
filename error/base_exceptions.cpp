/*
If both base and derived classes are caught as exceptions then catch block of derived class must appear before the base class.

If we put base class first then the derived class catch block will never be reached. For example, following C++ code prints “Caught Base Exception”



*/


#include <iostream>

class Base{

};

class Derived: public Base{

};


int main(){
	Derived d;
	try{
		throw d;

	}catch(Derived d){
		std::cout << "Caught Derived Exception" << std::endl;
	}catch(Base b){	// This catch block will NEVER execute
		std::cout << "Caught Base Exception" << std::endl;
	}
	return 0;

}



/*

By switching around the order of the catch blocks we are able to reach the Derived catch block.. strange


int main(){
	Derived d;
	try{
		throw d;

	}catch(Base b){
		std::cout << "Caught Bsae Exception" << std::endl;
	}catch(Derived d){	// This catch block will NEVER execute
		std::cout << "Caught Derived Exception" << std::endl;
	}
	return 0;

}

*/
