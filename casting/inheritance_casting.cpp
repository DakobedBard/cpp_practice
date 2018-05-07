/*

This program will demonstrate how we can call a derived classes member functions from a base class pointer by using static cast.

*/

#include <iostream>

class Base{

};

class Derived:public Base{


  public:
	void print_stuff(){
		std::cout << "Print from a derived class" << std::endl;
	}

};




int main(){
	Base* bp = new Derived();
	static_cast<Derived*>(bp)->print_stuff();			// Apparantly this needs to be a public function though...

	

}
