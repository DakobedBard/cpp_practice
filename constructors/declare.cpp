/*

This program would appear to call the constructor with the line

Test t1()..

but the compiler interprets this as a declaration of a function that takes no parameters and returns an object of type Test


*/


#include <iostream>

class Test{
  public:

	Test()

};

Test::Test(){
	cout << "Constructor called \n" <<std::endl;

}


int main(){

	std::cout << "Start " << std::endl;
	Test t1();

	std::cout << "End" << std::endl;

}
