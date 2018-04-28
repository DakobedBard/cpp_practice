/*

A pointer that points to a memory location that has been deleted (or freed) is called a dangling pointer.  There are three ways that a pointer can become a dangling pointer

1) Deallocation of memory

2) Function call

3) Variable goes out of scope


*/


#include <cstdlib>
#include <iostream>

int main(){
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 2;
	// After below free call, ptr becomes a dangling pointer.

	
	free(ptr);
	std::cout << "after freeing... dereferencing will NOT have the same value.. " << *ptr  << std::endl;
	ptr = NULL;
}
