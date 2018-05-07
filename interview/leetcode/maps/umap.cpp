


#include <unordered_map>
#include <utility>
#include <string>
#include <iostream>
int main(){


	
	std::unordered_map<std::string,double> umap;
	
	// inserting values by using [] operator
	umap["PI"] = 3.14;
    	umap["root2"] = 1.414;
    	umap["root3"] = 1.732;
    	umap["log10"] = 2.302;
    	umap["loge"] = 1.0;	

	// inserting value by insert function

	umap.insert(std::make_pair("e", 2.718));

	std::string key = "PI";

	// If key not found in map iterator to end is returned

	if(umap.find(key) == umap.end())
		std::cout<< key << " not found \n\n";
	else
		std::cout << "Found " << key << "\n\n";
	 
	key = "lambda";
    	if (umap.find(key) == umap.end())
        	std::cout << key << " not found\n";
    	else
        	std::cout << "Found " << key << std::endl;


	
	// Iterating over all values of umap

	std::unordered_map<std::string, double>::iterator itr;
	std::cout<< "\n All Elements: \n" ;
	for(itr = umap.begin(); itr!=umap.end(); itr++){
		std::cout << itr->first << " " << itr->second << std::endl;
	}


}
