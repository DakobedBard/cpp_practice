/*

This program will elucidate the use of conversion operators.  

All single argument constructors are called implicitly if the assigned value is of their respective argument type.  Using the explicit keyword before single argument constructors disables implicit constructor calling and implicit conversion.  


operator unsigned int() overloads () operator which is the cast operator.  In this case its overloaded for int, hence whenever an object of Example class is assigned to an int the implicit type casting from Example to int takes place and hence operator unsigned int() gets called

*/
#include <iostream>

class Example{
  public:
	Example();
	Example(int val_);
	operator unsigned int();
	~Example(){}
  private:
	int itsVal;
};

Example::Example():itsVal(0){
	std::cout << "default Constructor gets called..." << std::endl;
}
Example::Example(int val_):itsVal(val_){
	std::cout << "int Constructor gets called..." << std::endl;
}

Example::operator unsigned int(){
	std::cout << "I get called right here.." << std::endl;
	return(itsVal);
}


int main(){
	int theInt = 5;
	Example exObject = theInt;


}
