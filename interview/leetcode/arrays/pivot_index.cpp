#include <iostream>
#include <vector>

int pivot(int arr[], int n){
	int i, j;

	int leftsum, rightsum;

	/* 
		Check for indexes one by one until an equilibrium index is found 
	*/

	for(i =0; i < n; ++i){
		leftsum = 0;
		rightsum = 0; 
	
		for(j=0; j<i; j++){
			leftsum += arr[j];
		}	

		for(j = i+1; j<n; j++)
			rightsum+= arr[j];	
	// If leftsum and right sum are same, then we are done 
		if(leftsum == rightsum){
			return i;
		}
	}	

	// return -1 if no equilibrium index is found
	return -1; 
}

/*

1) Initialize leftsum  as 0
2) Get the total sum of the array as sum
3) Iterate through the array and for each index i, do following.
    a)  Update sum to get the right sum.  
           sum = sum - arr[i] 
       // sum is now right sum
    b) If leftsum is equal to sum, then return current index. 
    c) leftsum = leftsum + arr[i] // update leftsum for next iteration.
4) return -1 // If we come out of loop without returning then
             // there is no equilibrium index



*/


int pivot_index(vector<int>& nums){
	
	int total =0;
	for(int num: nums){				// First step is to get the sum of the array.
		total += num		
	}

	int sum =0;					// set leftsum =0
	for(int i=0; i< nums.size(); sum+= nums[i++])
		if(sum *2 == total - nums[i])
			return i;
						
	reutn -1; 

}




int main(){
	int arr[] = {-7, 1, 5, 2, -4, 3, 0};
  	int arr_size = sizeof(arr)/sizeof(arr[0]);
}
