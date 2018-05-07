/*

hash set is one of the implementations of a set which is a a data structure to store no repeated values.





*/


#include <unordered_set>
#include <iostream>
int main(){


	// Initialize a hash set
	std::unordered_set<int> hashset;

	// insert a new key..
	hashset.insert(3);
	hashset.insert(2);
	hashset.insert(1);

	//delete a key
	hashset.erase(2);

	if(hashset.count(2) <= 0){
		std::cout << "Key 2 is not in the hash set." << std::endl;
	}

	// get the size of the hash set

	std::cout << "the size of hash set is " << hashset.size() << std::endl;

	// iterate tthe hash set

	for(auto it = hashset.begin(); it != hashset.end() ; ++ it){
		std::cout << (*it) << " ";
	} 
	std::cout << "are in the hash set. " << std::endl;

	//clear the hash set

	hashset.clear();
	// check if the hash set is empty

	if(hashset.empty()){
		std::cout << "hash set is empty now!" << std::endl;
 	}

}
