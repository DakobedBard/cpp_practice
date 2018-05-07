
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
/*

If there any duplicate integers, they will be consecutive after sorting.  


*/


bool contains_duplicate(std::vector<int>& nums){
	
	for(int i =0; i< nums.size(); i++){
		std::cout << nums[i];
	}

	std::cout << "\n";


	std::sort(nums.begin(), nums.end());	
	
	for(int i  =0; i< nums.size()-1; i++){
		if(nums[i] == nums[i+1]) {
			return true;
		}
	}

	std::cout  << "\n";

	return false;
}


/*

An alternative to the sorting method described above is to use a hash table 



*/



bool contains_duplicate_hash(std::vector<int>& nums) {
        if (nums.empty()) { return false; }
        std::unordered_map<int,int> mp;
        for (int i : nums) {
            	if (++mp[i] > 1) {
                	return true;
            	}
        }
        return false;
    }



int main(){

	int a[] = {7,4,3,1,0,1,2,6};
	std::vector<int> v1(a, *(&a+1));


	bool dup = contains_duplicate(v1);
	std::cout << "contains duplicate ? " << dup << std::endl;


	bool dup2 = contains_duplicate_hash(v1);
	std::cout << "contains duplicate ? " << dup2 << std::endl;
}
