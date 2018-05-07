/*

To improve our run time complexity, we need a more efficient way to check if the complement exists in the array. If the complement exists, we need to look up its index. What is the best way to maintain a mapping of each element in the array to its index? A hash table.

We reduce the look up time from O(n)O(n) to O(1)O(1) by trading space for speed. A hash table is built exactly for this purpose, it supports fast look up in near constant time. I say "near" because if a collision occurred, a look up could degenerate to O(n)O(n) time. But look up in hash table should be amortized O(1)O(1) time as long as the hash function was chosen carefully.

A simple implementation uses two iterations. In the first iteration, we add each element's value and its index to the table. Then, in the second iteration we check if each element's complement (target - nums[i]target−nums[i]) exists in the table. Beware that the complement must not be nums[i]nums[i] itself!


*/

#include <unordered_map>

#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target) {

	std::vector<int> result;
	std::unordered_map<int, int> map;

	for(int i=0; i < nums.size(); i++){
		map.insert(std::make_pair(nums[i], i));
	}

	for(int i =0; i< nums.size(); i++){
		int complement = target - nums[i];	
		if(map.find(complement) != map.end()){
			 
			std::vector<int> res(i, 2);
			//return std
		}
	}

	return result;
}



std::vector<int> onepass_twoSum(std::vector<int> &nums, int target) {

	std::unordered_map<int, int> map;
	for(int i=0; i< nums.size(); i++){
		int complement = target - nums[i];
		auto p = map.find(target - nums[i]);
		
		if( p!=map.end()){
			return {p->second+1, i+1;}
			
		}
	}
}

int main(){

	int arr[] = {2,7,11,15};
	std::vector<int> v1(arr, *(&arr+1));
	std::vector<int> res = twoSum(v1, 9);
	
}
