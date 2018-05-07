#include <vector>



/* In a given integer array nums, there is always exactly one largest element.

Find whether the largest element in the array is at least twice as much as every other number in the array.

If it is, return the index of the largest element, otherwise return -1.


This is easy..

1) Find the two largest numbers

2)  Check if they meet the condition





*/

int dominantIndex(std::vector<int>& nums){

	int max1=0;
	int max2 =0;

	int idxOfMax1 =0;

	for(int i =0; i< nums.size(); i++){
		if(nums[i] > max1){
			max2=max1;
			max1 = nums[i];
			idxOfMax1 = i;
		
		}else if(nums[i] > max2){
			max2 = nums[i];
		}
	}

	return max1 >= max2 * 2 ? idxOfMax1 : -1;

}


int main(){



}
