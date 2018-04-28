/*


When a function returns by reference, it can be used as an lvalue.  Since x is a static variable, it is shared among function calls and the initialization line "static int x = 10" is EXECUTED ONLY ONCE. 

the function call fun() = 30 modifies the reference the static variable x to 30, while the next call cout << fun() returns the modified value.  

*/



#include <iostream>

int& fun(){

	static int x = 10;
	return x;
}


int main(){

	fun() = 30;
	std::cout << fun() << std::endl ;
	return 0;

}
