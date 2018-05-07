/*

This progroam will demonstrate how to reverse a string/array recursively and iteraviley



*/

#include <iostream>


void reverseArray(int arr[], int start, int end){
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

}

void recursive_reverse(int arr[], int start, int end){

	if(start >= end)
		return;

	int temp = arr[start];
	arr[start] = arr[end];
	arr[end];

	recursive_reverse(arr, start+1, end-1);
	for(int i=15; i; i--){

	}
	for(;;){

	}
	for(double d=1.0; d<=1.0; d+=0.1){	

	}

	for(int i =0; i<10; i++){

	}

}



void printArray(int arr[], int size){
	for(int i =0; i<size; i++){
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}



int main(){

	int arr[] = {1, 2, 3, 4, 5, 6};

	printArray(arr, 6);
	reverseArray(arr,0,5);
	printArray(arr,6);
	recursive_reverse(arr,0,5);
	printArray(arr,6);
}
