/*

Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.


Approach #1 (Two Pointers) [Accepted]
Algorithm

Since the array is already sorted, we can keep two pointers ii and jj, where ii is the slow-runner while jj is the fast-runner. As long as nums[i] = nums[j]nums[i]=nums[j], we increment jj to skip the duplicate.

When we encounter nums[j] \neq nums[i]nums[j]≠nums[i], the duplicate run has ended so we must copy its value to nums[i + 1]nums[i+1]. ii is then incremented and we repeat the same process again until jj reaches the end of array.





*/




int removeElement(vector<int>& nums, int val){

	
	for(i=0; i< nums.size(); i++){
		std::cout << " " << nums[i] ; 
	}
	std::cout << "\n";
}


int main(){


	int a[5] = {0,1,2,3,4,3,2};
	std::vector<int> v1(a, *(&a+1));

	

}
