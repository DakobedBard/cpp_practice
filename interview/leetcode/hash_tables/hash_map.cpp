#include <unordered_map>
#include <utility>  // std::pair
#include <iostream>

/*
The hash_map is one of the implementations of a map which is used to store (key, value) pairs.. 






We can use a hash map to find duplicates... 

*/

class Test{
	int i;

}







int main(){

	// Initialize a hash map
	std::unordered_map<int, int> hashmap;
	hashmap.insert(std::make_pair(0,0));
	hashmap.insert(std::make_pair(2,3));

	// insert a new (key,value) pair or update the value of existed key
	hashmap[1] = 1;
	hashmap[1] = 2;

	// Get the value of a specific key

	std::cout << "The value of key 1 is: " << hashmap[1] << std::endl;

	// delete a key
	hashmap.erase(2);

	//6 Check if a key is in the hash map
	if(hashmap.count(2) <= 0){
		std::cout << "Key is not in the hash map. " << std::endl;
	}

	// Get the size of the hash map...
	std::cout << "the size of hash map is: " << hashmap.size() << std::endl;

	// Iterate the hash map
	for(auto it= hashmap.begin(); it != hashmap.end(); ++it){
		std::cout << "( " << it->first << "," << it-> second << " ) ";
	}

	std::cout << "are in the hash map " << std::endl;

	// clear the hash map
	hashmap.clear();

	// check if the hash map is empty
	if(hashmap.empty()){
		std::cout << "hashmap is empty now " <<  std::endl;
	}
}
