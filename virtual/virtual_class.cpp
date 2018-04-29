/*

As well as virtual functions, we have the notion of a virtual class.   

We can inherit a virtual base class

In this example when the derived class inherits b1 and b2, each of which are derived from the class base, they come along with seperate copies of the base class's member variables and functions.  This will lead to ambiguity.  

By declaring the inherited class as virtual, we prevent this ambiguity 

In this example the size of the base class is 40 bytes, and for each virtual inheritance, 8 bytes must be added by the compiler for the purposes of bookeeping..

*/


#include <iostream>

class base{
	int x[10];
};


class b1: virtual public base{


};

class b2: virtual public base{

};

class derived:  public b1,  public b2 {};

int main(void){
	std::cout << sizeof(derived) << std::endl;
	int k=1;

	std:: cout << "the size of an int is... : " << sizeof(k) << std::endl;

	return 0 ;
}


