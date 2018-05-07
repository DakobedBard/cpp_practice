#include <vector>
#include <unordered_set>
#include <iostream>
template <class Type>
bool finDuplicates(std::vector<int>& keys){


	std::unordered_set<int> hashset;
	for(int key: keys){
		if(hashset.count(key)>0){
			return true;
		}

		hashset.insert(key);
	}


	return false;
}


int main(){


	int a[5] = {0,1,2,3,4};
	std::vector<int> v4(a, *(&a+1));


	std::cout << "do we have duplicates ? " << finDuplicates(v4) << std::endl;

}


