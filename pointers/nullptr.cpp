/*

This program shows the problem with NULL (and the need of null ptr).

What is the problem with the program.. NULL is typically defined as (void*) 0 and conversion of NULL to integral types is allowed.  So the function call fun(NULL) becomes ambiguous. 

nullptr is a keyword that can be used at all places where NULL is expected.  Like NULL, nullptr is implicitly convertible and comparable to any poitner type..  Unlike NULL, it is not implicitly convertible or comparable to integral types.  


*/

#include <iostream>


int fun(int N){
	std::cout<<"fun(int)" <<std::endl;
}

int fun(char* s){
	std::cout <<"fun(char *)" << std::endl;
}


int main(){

	//fun(NULL)			This will cause an ambiguous fun
}


