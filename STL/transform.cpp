/* This program will demonstrate the use of std::transform()!!

 	Consider the problem of adding contents of two arrays into a third array... The arrays are of the same size


Binary Operation : Applies a binary operator on input to convert into output
transform(Iterator inputBegin1, Iterator inputEnd1, 
         Iterator inputBegin2, Iterator OutputBegin, 
         binary_operation) 

Unary Operation : Applies a unary operator on input to convert into output
transform(Iterator inputBegin, Iterator inputEnd, 
         Iterator OutputBegin, unary_operation) 


*/


#include <algorithm>
#include <iostream>

int increment(int x) {  return (x+1); }

int main(){

	int arr1[] = {1,2,3};
	int arr2[] = {4,5,6};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int result[n];

	// Add two arrays... like a dumbas...

	for(int i=0; i < n; i++){
		result[i] = arr1[i] + arr2[i];
	}	
	
	for(int i=0; i < 3; i++){
		std::cout << result[i] << " ";
	}	

	std::cout << std::endl;

	/* Single line of code to add arr[1] and arr2[] using the std::transform() function */
	int result_transform[n];
	std::transform(arr1, arr1+n, arr2, result_transform, increment);
	//
	//for(int i=0; i < 3; i++){
	//	std::cout << result_transform[i] << " ";
	//}	
	

}
