
#include <vector>
#include <iostream>
#include <limits.h>
/*

Given an unsorted array of integers, find the length of the maximum increasing subarray..

*/


/*

Naive implementation is for Brute Force 

Simplest appraoch is to try to find all increasing subsequencesand then return the maximum length of longest increasing subsequence.  Recursively call lengthofLIS which returns the lgnth of the LIS possible form the current elements.  

Inside each function call we consider two cases

1)  The current lement is larger than the previous element included in the LIS.  In this case we can include thee current element in the LIS.

2) Current element is smaller than the previous element included in the LIS.  In this case we can't include the current element in the LIS>  Thus we find out only the length of the LIS possible by not including the current element in the LIS which is returned by the current function call.


In this approch many recursive calls had to be made again and again with the same parameters.  


*/



int lengthofLIS_util(std::vector<int>& nums, int prev, int curpos){
	if(curpos == nums.size()){
		return 0;
	}

	int taken = 0;
	if(nums[curpos] > prev){
		taken = 1+ lengthofLIS_util(nums,nums[curpos], curpos+1);
	}

	int nottaken = lengthofLIS_util(nums, prev, curpos+1);
	return std::max(taken, nottaken);

}

/*

In this approach we will stores the results obtained for a particular call in a 2-d demoization array.  

memo[i][j] represents the length of the LIS possible using nums[i] as the previous element considered to be included/not included in the LIST, with nums[j] as the current element considered to be included/not included in the LIS.  


Complexity Analysis 

time complexity: O(n^2)	  // size of recursion tree can go upto n^2

space complexity: O(n^2)  // memo array of n*n is used


*/



int memoization_length_of_LIS(std::vector<int>& nums, int prev, int curpos){


}

int memoization_length_of_LIS(std::vector<int>& nums){


}


/*

We will finally used dynamic programming to solve this problem.  

THis method relies on the fact that the longest increasing subsequence possible upto the ith index in a given array is independent of the elements coming later on in the array.  Thus, if we know the length of the LIS upto the ith index,we can figure out the length of the LIS possible by including the (i+1)th element based on the elemens with indices such that 0<= j < i+1

we will make use of a dp array to store teh required data.  dp[i] represents the length of the longest increasing subsequence possible considering the array elements upto the ith index only, by necessarily including the ith element.  In order to find out dp[i] we need to try to append the current elements nums[i] in every possible increasing subserquence upto the (i-1)th index, such that the new sequence formed by adding the current element is also an increasing subsequence.  THus we can easilty determine dp[i] using

dp[i] = max(dp[j]+1, for all j between 0 and i)

then our maximum length is max(dp[i] for 0< i< n 



Time complexity: O(n^2)

Space complexity: O(n)

*/

int dynamic_programming_length(std::vector<int>& nums){

	if(nums.size() ==0){
		return 0;
	}
	int dp[nums.size()] ;//= new int[nums.size();
	dp[0] = 1;

	int ans = 1;
	
	for(int i =0; i < nums.size(); i++){
		int maxval = 0;
		for(int j =0; j < i; j++){
			if(nums[i] > nums[j]){
				maxval = std::max(maxval, dp[j]);
			}
		}
		dp[i] = maxval + 1;
		ans = std::max(ans, dp[i]);
	
	}


	return ans;

}


/*
Dynamic programming with binary search.  


*/

		





int lengthofLIS(std::vector<int>& nums){
//	for(int i =0; i < nums.size(); i++){
//		std::cout << nums.size() << std::endl;
//	}

	


	return lengthofLIS_util(nums, INT_MIN, 0);
}
int main(){


	int a[8] = {10,9,2,5,3,7,101,18};
	std::vector<int> v3(a, *(&a+1));
	//int l = lengthofLIS(v3);
	std::cout << "length of LIS: " << dynamic_programming_length(v3) << std::endl;


}
