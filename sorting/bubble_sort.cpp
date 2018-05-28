/*


*/

#include <iostream>

void swap(int *xp, int *yp){

	int temp = *xp;
	*xp = *yp;
	*yp = temp;

}

void printArray(int *arr, int size){
	for(int i=0; i < size-1; i++){
		std::cout << arr[i] << " " ;
	}
	std::cout << std::endl;
}


// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   	int i, j;
   	for (i = 0; i < n-1; i++)      
 
       	// Last i elements are already in place   
       		for (j = 0; j < n-i-1; j++) 
           		if (arr[j] > arr[j+1])
              			swap(&arr[j], &arr[j+1]);
}


int main(){

	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };

	bubbleSort(array, length);
	printArray(array, length);


}
