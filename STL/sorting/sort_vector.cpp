/*

This program demonstrates std::sort() in C++ STL


*/


#include <vector>
#include <algorithm>
#include <iostream>



int main(){

	int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
	int n = sizeof(arr)/sizeof(arr[0]);

	std::sort(arr, arr+n);
	
	std::cout << "\nArray after sorting using default sort is : \n ";
    	for (int i = 0; i < n; ++i)
        	std::cout << arr[i] << " ";
 
    	return 0;

}
