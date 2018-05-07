#include <unordered_map>
#include <vector>

#include <iostream>
#include <unordered_set>


std::vector<int> intersect(std::vector<int> &vect1, std::vector<int> &vect2){

	std::unordered_map<int, int> map;
	std::vector<int> result;
	// Loop through the first array and add all elements to a hash table
	for(int i =0; i<vect1.size(); i++){
		map[vect1[i]]++;
	}

	for(int j=0; j<vect2.size(); j++){
		if(map[vect2[j]] > 0){
			result.push_back(vect2[j]);
			map[vect2[j]] = 0;
		}
	}


	return result;
}



std::vector<int> set_intersect(std::vector<int> &vect1, std::vector<int> &vect2){

	std::unordered_set<int> set;
	std::vector<int> result;

	for(int i=0; i < vect1.size(); i++){
		set.insert(vect1[i]);
	}
	for(int j=0; j < vect2.size(); j++){
		if(set.count(vect2[j]) > 0){
			result.push_back(vect2[j]);
			set.erase(vect2[j]);
		}
	}


	return result;

}

int main(){


	int a[5] = {0,1,2,3,4};
	std::vector<int> v1(a, *(&a+1));

	int a1[5] = {3,1,6,8,4};
	std::vector<int> v2(a1, *(&a1+1));


	

	std::vector<int> res = intersect(v1, v2);

	for(int i=0; i<res.size(); ++i){
		std::cout << " " << res[i];
	} 

	std::cout << std::endl;

	std::vector<int> res2 = set_intersect(v1,v2);
		for(int i=0; i<res.size(); ++i){
		std::cout << " " << res[i];
	} 
	std::cout << std::endl;
}









