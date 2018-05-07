#include <iostream>
#include <algorithm>


/*

Arrays have a fixed capacity and we need to specify the size of the array when we initialize it.  Sometimes this is wasteful.

Therefore most programming languages offer build in dynamic arrays which still offer random access list data structure but with variable size.  For this we have std::vector in C++ and ArrayList in Java.  



*/

int main(){

	int a0[5];
	int a1[5] = {1,2,3};			// other elements will be set as the default value..

	int size = sizeof(a1)/sizeof(*a1);	// Get the length

	std::cout << "The size of a1 is: " << size << std::endl;
				
						// Access element

	std::cout << "The first element is: " << a1[0] << std::endl;
	
	// Iterate all elements

	std::cout << "[Version 1] The contents of a1 are:" ;
	for(int& item: a1){

		std::cout << "" << item;
	}
	std::cout <<std::endl;
	// Modify element...
	a1[0] = 4;

	std::sort(a1, a1+size);

}
