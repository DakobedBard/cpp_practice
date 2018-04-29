#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    	// creating  a list
    	vector<int> list;
 
    	// elements to be added at the end.
    	// in the above created list.
    	list.push_back(1);
    	list.push_back(2);
    	list.push_back(3);
 
    	// elements of list are retrieved through iterator.
    	for (vector<int>::iterator it = list.begin();
     	                           it != list.end(); ++it)
        	cout << *it << " ";
 	std::cout << std::endl;
    	return 0;
}

