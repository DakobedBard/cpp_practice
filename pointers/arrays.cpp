//#include <iostream>
//#include <cstdlib>
#include <stdio.h>
int main(){


	// Array declaration by initializing elements 
	int arr[] = {10, 20, 30, 40};
	
	// This could be similarly acheived w/ int arr[4] = {10,20,30,40}

	// int arr[6] = {10,20,30,40}



	// We declared an array of size 6 but only gave it 4 elements on itialization... In C these values will be initialized to 0
	// however it seems that in C++ we loop back to the fron of the array so that it looks liek {10,20,30, 40,10,20};
	int arr2[6] = {10,20,30, 40};

	  printf("%d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]) ;
}
