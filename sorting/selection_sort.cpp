/*

There are many ways to sort an array. Selection sort is probably the easiest sort to understand, which makes it a good candidate for teaching even though it is one of the slower sorts.

Selection sort performs the following steps to sort an array from smallest to largest:
1) Starting at array index 0, search the entire array to find the smallest value
2) Swap the smallest value found in the array with the value at index 0
3) Repeat steps 1 & 2 starting from the next index


Here is an example of this algorithm working on 5 elements. Let’s start with a sample array:

{ 30, 50, 20, 10, 40 }

First, we find the smallest element, starting from index 0:

{ 30, 50, 20, 10, 40 }

We then swap this with the element at index 0:

{ 10, 50, 20, 30, 40 }

Now that the first element is sorted, we can ignore it. Now, we find the smallest element, starting from index 1:

{ 10, 50, 20, 30, 40 }

And swap it with the element in index 1:

{ 10, 20, 50, 30, 40 }

Now we can ignore the first two elements. Find the smallest element starting at index 2:

{ 10, 20, 50, 30, 40 }

And swap it with the element in index 2:

{ 10, 20, 30, 50, 40 }

Find the smallest element starting at index 3:

{ 10, 20, 30, 50, 40 }

And swap it with the element in index 3:

{ 10, 20, 30, 40, 50 }

Finally, find the smallest element starting at index 4:

{ 10, 20, 30, 40, 50 }





*/

#include <iostream>

void swap(int *xp, int *yp){

	int temp = *xp;
	*xp = *yp;
	*yp = temp;

}

void selection_sort( int *arr , int length){
	
	int min_idx;
	for(int i =0; i < length -1; i++){
		min_idx =i;
		for(int j=i; j < length-1; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		swap(&arr[min_idx], &arr[i]);
	}
	std::cout << std::endl;	
}

void printArray(int *arr, int size){
	for(int i=0; i < size-1; i++){
		std::cout << arr[i] << " " ;
	}
	std::cout << std::endl;
}

int main(){
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };

	selection_sort(array, length);
	printArray(array, length);
	

}
