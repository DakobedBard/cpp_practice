#include <iostream>  // for std::cout, std::endl
#include <memory>    // for std::unique_ptr
#include <stdlib.h>  // for EXIT_SUCCESS


//  We can see that this program will cause a memory leak because we allocate on the heap but do not call delete... 
//  This causes a memory leak that we can see by calling    
//							valringd ./unique leak-check=full


void Leaky(){

	int *x = new int(5);		// heap allocated
	std::cout << "int x is: " << *x << std::endl;

}

void NotLeaky(){

	std::unique_ptr<int> x(new int(5)); 	// Wrapped, heap allocated
	(*x)++;
	std::cout << *x << std::endl;		// We do not get a memory leak in this instance because we used a unique_ptr.
}						// When the object it is pointing to falls out of scope then the unique_ptr 
						// deletes the object. 		


int main(int argc, char **argv){

	NotLeaky();
	return EXIT_SUCCESS;
}
