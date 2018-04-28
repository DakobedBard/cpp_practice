/*

As well as virtual functions, we have the notion of a virtual class.   

We can inherit a virtual base class

*/


#include <iostream>

class base{
	int array_member[10];
};


class b1: public base{};

class b2: public base{};

class derived:public b1, public b2 {};

int main(void){
	std::cout << sizeof(derived) << std::endl;
	return 0 ;
}


