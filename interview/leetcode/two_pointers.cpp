/*

Given an array and a value, remove all instances of that vlaue in-place and return the new length


We use two pointers... one is used for the iteration while the second one always points at the position for the next addition.


*/



int removeElement(vector<int>& nums, int val){

	int k=0;
	for(int i=0; i<nums.size(); ++i){

		if(nums[i] != val){
			nums[k] = nums[i];
			++k;
		}
	}
	return k;
}
