

#include <iostream>

// Note that the variables ain the function prototype are passed by reference... but we are able to call the function normally.  

void swap(int &x, int &y){
	
	int tmp =x;
	x = y;
	y = tmp;

}

void foo(const int *y){
	std::cout << *y << std::endl;

}


void bar(int *y){
	std::cout << *y << std::endl;
}


int main(int argc, char **argv){

	int a =5; 
	int b = 10;

	swap(a,b);
	std:: cout << "a: " << a << "; b: " << b << std::endl;


	const int c = 10;
	int d = 20;

	foo(&d);		// Here we are passing a non const pointer to a function that expects a const pointer...
	//bar(&c) 		// If we Try to pass a pointer to a const variable to a function that expects a non
				// const variable.. then we will receive a compiler error.  

	
	return EXIT_SUCCESS;

}
