/*

we will demonstrate const member functions...

const functions are not allowed to modify the object on which they rae called.  It is good practice to make functions const when possible so that accidental changes to the object...


*/



#include <iostream>

class Test{
	int value;

  public:

	Test(int v =0);

	//We get a compiler error if we atry to change value

	int getValue() const{
		//value ++;		compiler error..
		return value;
	}

};

int main(){

}
