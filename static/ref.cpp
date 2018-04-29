/*

the function fun() returns a reference to the static variable a.  

We then assign a reference to this static variable in main.  By modifying this reference to the static variable a in fun(), we can modify its value... the static variable is only initialized once..  




*/


#include <iostream>


int& fun(){
	static int a = 10;
	return a;
}

int main(){

	int &y = fun();
	y = y+30;
	std::cout << fun() << std::endl;
	return 0;
}



