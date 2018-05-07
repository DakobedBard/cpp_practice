/*Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.


Approach #1 (Two Pointers) [Accepted]
Intuition

Since question asked us to remove all elements of the given value in-place, we have to handle it with O(1)O(1) extra space. How to solve it? We can keep two pointers ii and jj, where ii is the slow-runner while jj is the fast-runner.

Algorithm

When nums[j]nums[j] equals to the given value, skip this element by incrementing jj. As long as nums[j] \neq valnums[j]≠val, we copy nums[j]nums[j] to nums[i]nums[i] and increment both indexes at the same time. Repeat the process until jj reaches the end of the array and the new length is ii.

*/

#include <iostream>
#include <vector>


int removeElement(std::vector<int>& nums, int val){
	
	int j =0;

	for(int i =0; i< nums.size(); i++){
		if(nums[i] != val){
			nums[j] = nums[i];
			j++;
		} 
	}

	std::cout << std::endl;
	return j;
}

int remove_while(std::vector<int>& nums, int val){

	int i =0;
	int n = nums.size();

	while(i<n){
		if(nums[i] == val){
			nums[i] = nums[n-1];
			// reduce the array size by one
			n--;
		}else{
			i++;
		}
	}	

	return n;
}




int main(){
	int a[] = {0,1,2,3,4,3,2,2};
	std::vector<int> v1(a, *(&a+1));
	

	int b = removeElement(v1,2);
	
	for(int i =0; i< v1.size(); i++){
		std::cout << v1[i];
	}

	std::cout << "\n" ; 
	
	int c = remove_while(v1, 2);

		
	for(int i =0; i< v1.size(); i++){
		std::cout << v1[i];
	}

		std::cout << "\n" ; 
}
