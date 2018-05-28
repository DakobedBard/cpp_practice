#include <unordered_set>
#include <iostream>
/*

A more efficient solution his this problem is hashing.  hash table is implement using unordered_set.,  Store all first array elements in hash table.  For elements of second array we subtract every element from x and check the result in hash table.  


We will use the unordered_set function find which returns an iterator to elements with the given value).  Therefore in this example we loop over the possible 

*/



int findPairs(int arr1[], int arr2[], int n, int m, int x){


	std::unordered_set<int> s;
	for(int i=0; i <n; i++){
		s.insert(arr1[i]);		// Insert the first element into the unorderd_set
	}


	//Subtract sum from second array elements one by one and check it's present in array first or not
	
/*
	for(int j=0; j<m; j++){
		if(s.find(x-arr2[j] != s.end()){
		//	std::cout << x - arr2[j] << " " << arr2[j] << std::endl;
		}	
	}
*/


	for(int j=0; j<m; j++){

		if(s.find(x-arr2[j]) != s.end()){
			std::cout << x - arr2[j] << " " << arr2[j] << std::endl;
		}


	}

}


/*

The naive approach used a time xomplexity of O(n^2) with auxiliary space of O(1)

the hash table method requires O(n) auxiliary space but improves the time complexity to O(n)




*/


int main(){

	int arr1[] = {1,0,-4,7,6,4};
	int arr2[] = {0,2,4,-3,2,1};

	int x = 8;
	int n = sizeof(arr1)/sizeof(int);
	int m = sizeof(arr2)/sizeof(int);

	findPairs(arr1, arr2, n, m, x);
	return 0;
	

}
