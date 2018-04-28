#include <iostream>

/*

What about a reference to a reference....



*/


int main(){

	const int y =2;
	// const int z;  		compiler error because a const must be initialized...		

	const int *z = &y;		// When we declare a pointer to a const variable... the pointer is declared const..
	
	// int *z = &y;			


	int j = 2;
	int& j_ref = j;
	
	int& j_ref_ref = j_ref;

	j_ref_ref = 3;
	std::cout << "The value of j is.." << j << std::endl;
	std::cout << "The value of j_ref is.." << j_ref << std::endl;
	std::cout << "The value of j_ref_ref is.." << j_ref_ref << std::endl;


// What about... const pointer to variable int

	int *const w = &j;		// This is a constant pointer to a variable int... 
	
	*w += 1;			// We can dereference the pointer and modify the value its pointing to..

	// w++				// However we can modify the address that w points to...
	

	const int *const v = &y;
	// *v += 1;
	// v++:

}
