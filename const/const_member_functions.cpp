/*

we will demonstrate const member functions...

const functions are not allowed to modify the object on which they rae called.  It is good practice to make functions const when possible so that accidental changes to the object...


We will declare a const object of class Test.... since the object has been declared const, it can ONLY CALL CONST member functions of the class. 


*/



#include <iostream>

class Test{
	int value;

  public:

	Test(int v =0){
		value = v;
	}

	//We get a compiler error if we atry to change value

	int getValue() const{
		//value ++;		compiler error..
		return value;
	}

	int getValue_notConst(){
		return value;
	}


};

int main(){
	const Test t(3);
	std::cout << "We are calling a const funtion from a cosnt object! " << t.getValue() << std::endl;

	std::cout << "However when we try to call a non const member function we will receive a compiler error" << std::endl;

	//  int compiler_error = t.getValue_notConst();		//	compiler error because the function we tried to call
								//	is not const.. 
}
