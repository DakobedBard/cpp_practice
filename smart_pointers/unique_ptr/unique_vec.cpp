/*

unique_ptrs can be stored in STL containers....

but recall that STL containers like to make lots of copies of stored object, and unique_ptrs cannot be copied..

How do we get around this?  Move smenatics...

When supported STL containers will move rather than copy.  

unique_ptrs support move semantics.  


*/



#include <cstdlib>
#include <iostream>
#include <memory>
#include <vector>


using std::unique_ptr;
using std::vector;



int main(){

	vector<unique_ptr<int> > vec;

  	vec.push_back(unique_ptr<int>(new int(9)));
  	vec.push_back(unique_ptr<int>(new int(5)));
  	vec.push_back(unique_ptr<int>(new int(7)));
	
		
	int z = *vec[1];
	std::cout << "z is: " << z << std::endl;
	
	// If we try to copy the unique_ptr we get a compiler error.. 
	
	// unique_ptr <int> copied = vec[1];				COMPILER ERROR!

	unique_ptr<int> moved = std::move(vec[1]);			// This works but now vec[1] has a null ptr
	std::cout << "*moved: " << *moved << std::endl;
	std::cout << "vec[1].get() " << vec[1].get() << std::endl;
	return EXIT_SUCCESS;

}
