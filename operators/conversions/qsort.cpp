#include <cstdlib>
#include <iostream>


// This compare funtion will be used by qsort...
int compare(const void *a, const void *b){
	return (*(int *)a - *(int*)b);
}

// We can write our own functions that can be used for any data type and can do different tasks without code redundancy.



bool compare_integers( const void *a, const void * b){

	return ( *(int*)a == *(int*)b );		// We cast our void pointer to an int*, and then dereference it...
}


// This is a general purpose search() function that can be used for searching an element *x in an array arr[] of arr_size.  Note
// that void pointers are used so that the function can be called by passing a pionter of any type.  

int search(void *arr, int arr_size, int ele_size, void *x, bool compare(const void *,const void *)){
	
	// Char pointers take only one byte so we can use char pointer for any type to get pointer arithmetic correct, we need to 		multiply index with size of an array element ele_size.. 

	char *ptr = (char *)arr;
	int i;
	for(i =0; i < arr_size; i++){
		if(compare(ptr + i*ele_size, x))
			return i;
	}
	return -1;
}


int main(){

	int arr[] = {10,5,15,20,90,12};

	int n = sizeof(arr)/sizeof(arr[0]);

	int i;

	qsort(arr, n, sizeof(int), compare);

	for(i =0 ; i <n; i++)
		std::cout << arr[i] << std::endl;


	int arr2[] = {2, 5, 7, 90, 70};
    	int nn = sizeof(arr2)/sizeof(arr2[0]);
    	int x = 7;
    	std::cout << "Returned index is " << search(arr2, nn, sizeof(int), &x, compare)) << std::cout;


	return 0;


}
