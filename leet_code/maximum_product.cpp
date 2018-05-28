

#include <vector>
#include <iostream>
#include <limits.h>
/*

Given an array of numbers, find the contiguous sub array which has the maximum product

In order to

*/
int maximum(const int& a, const int& b, const int &c){

	return a>b?(a>c?a:c) :(b>c?b:c);
	

}


int minimum(const int& a, const int& b, const int &c){

	return a<b?(a<c?a:c) :(b<c?b:c);
	

}




int maxProduct(std::vector<int>& nums){

	if(nums.empty())
		return 0;
	int maxProduct  = nums[0];
	int size = nums.size();
	int frontProduct[size], backProduct[size];
	 frontProduct[0] = nums[0];
	 backProduct[0] = nums[0];


	int ans = 0;

	int i;
	for( i=1; i < nums.size() ; i++){

		

		frontProduct[i] = maximum(nums[i], frontProduct[i-1]*nums[i], backProduct[i-1]*nums[i]);
		backProduct[i] = minimum(nums[i], frontProduct[i-1]*nums[i], backProduct[i-1]*nums[i]);

		ans = std::max(ans, frontProduct[i]);

	}
	return ans;
}





int main(){
	int arr[] = {1,3,-4,-3};
	std::vector<int> v(arr, *(&arr+1));
	//int a = v[1];

	int a = maxProduct(v);
	std::cout << "a " << a<<std::endl;

	
}
