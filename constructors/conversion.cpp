#include <iostream>





struct foo_struct{

	float fl;
	int in;
	foo_struct(int x){
		in = x;
	}

	explicit foo_struct(float f, int x);
	


};


/*

This may looks strange.. but it is perfectly legal in C++11... We are able to return values using braced-init-lists.  The abilityto specify the return value as a braced-init-list is considered to be a conversion.  This uses the converting constructor for for foo_struct  

If we wanted to forbid this implicit conversion... we would declare the constructor of foo_struct explicit 

*/

 foo_struct bar(foo_struct foo_){

	return foo_struct(1.0f, 5);	
}

foo_struct::foo_struct(float f, int x){
	fl = f;
	in = x;
}

int main(){
	foo_struct k(1);

	foo_struct foo = bar(k);

	std::cout << foo.fl << std::endl;
}
