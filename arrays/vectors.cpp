

#include <vector>
#include <iostream>
#include <algorithm>

int main(){

	std::vector<int> v0;
	std::vector<int> v1(5,0);

	// Make a copy...

	std::vector<int> v2(v1.begin(), v1.end());
	std::vector<int> v3(v2);

	// cast an array to a vector..

	int a[5] = {0,1,2,3,4};
	std::vector<int> v4(a, *(&a+1));

	// Get length

	std::cout << "The size of v4 is: " << v4.size() << std::endl;

	// Access element

	std::cout<< "The first element in v4 is: " << v4[0] << std::endl;

	std::cout << "The contents of v4 are: " << std::endl;

	for(int i=0; i<v4.size(); ++i){
		std::cout << " " << v4[i];
	} 

	std::cout << std::endl;

	// modify element..

	v4[0] = 5;

	std::sort(v4.begin(), v4.end());

	// add new element at the end of the vector

	v4.push_back(-1);

	//delete the last element..
	v4.pop_back();



}
