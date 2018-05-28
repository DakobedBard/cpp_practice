


#include <iostream>

void printArray(int *arr, int size){
	for(int i=0; i < size-1; i++){
		std::cout << arr[i] << " " ;
	}
	std::cout << std::endl;
}

void insertionSort( int *arr , int length){
	int key;
	int j;
	for(int i=0; i < length; i++){
		key = arr[i];
		j = i-1;
	/* Move elements of arr[0..i-1], that aregreater than key, to one position ahead  of their current position */
       		while (j >= 0 && arr[j] > key)
       		{
           		arr[j+1] = arr[j];
           		j = j-1;
       		}
       		arr[j+1] = key;

	}
}




int main(){
	int arr[] = {12, 11, 13, 5, 6};
	insertionSort(arr, 5);
	printArray(arr, 5);

}
