#include "Point.h"
#include <iostream>


int main(int argc, char **argv){

	int statck_int;   			// This integer is allocated on the stack
	int *heap_int = new int;		// Heap allocated, uninitialized int
	
	int stack_arr[10];			// Stack-allocated array of 10 uninitialized ints

	int *heap_arr = new int [10] ;		// Heeap allocated array of 1p unintialized ints

	//int stack_array_init[10]();		// What happens here.. can we initialize an array on the stack..	
						// eror: declaration as array of functions 	
		

	int *heap_init_arr = new int[10]();	// Heap aloocated array of 10 integers initialized to 0
	
//	int *heap_init_error = new int[10](21);		This will not compile!!  we can only initialize arrays using
						// 	using the default constructor.

	Point stack_point(1,2);			// stack allocated Point object..
	
	Point *heap_point = new Point(1,2);	// Heap allocated Point object..

	// We should be OK if we had a default constructor for Points, but since we don't, the compiler complains..
	// We have defined a constructor so the compiler will not create a default constructor....	
	//   Point *error_point_arr = new Point[10]();


	//Point *error2_point_arr = new Point[10](1,2);	// This is a compiler error as well because we can only use the default
							// constructor (which was not created by the compiler) when we initialize
							// object in an array. 
	delete heap_int;			// Correct... 
	delete heap_point;
	delete heap_arr ;			// THIS IS INCORRECT, WE MUST USE delete[], this will only delete the first 							// element	
	delete[] heap_init_arr;			// Correct
}
