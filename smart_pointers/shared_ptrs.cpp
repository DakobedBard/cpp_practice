/*

An std::shared_ptr is similar to a std::unique_ptr

- the copy/assign operators increement a reference count rather than transferring ownership

	- after copy/assign, the two shared_ptr objects point to the same pointed to object and the (shared) reference count is 2

- When a shared_ptr is destroyed, the reference count is decremented
	- when the reference count hits zero the pointed-to object is deleted


*/




#include <cstdlib>
#include <iostream>
#include <memory>
#include <vector>


int main(int argc, char **argv) {
 
 	std::vector<std::shared_ptr<int> > vec;

  	vec.push_back(std::shared_ptr<int>(new int(9)));
  	vec.push_back(std::shared_ptr<int>(new int(5)));
  	vec.push_back(std::shared_ptr<int>(new int(7)));

  	// z is (a reference to) the (int pointed to by the shared_ptr
  	// in vec[1])
  	int &z = *vec[1];
  	std::cout << "z is: " << z << std::endl;

  	// works, since shared_ptrs can be copied
  	std::shared_ptr<int> copied = vec[1];
  	std::cout << "*copied: " << *copied << std::endl;

  	// works, but now vec[1] has a null pointer.
  	std::shared_ptr<int> moved = std::move(vec[1]);
  	std::cout << "*moved: " << *moved << std::endl;
  	std::cout << "vec[1].get(): " << vec[1].get() << std::endl;

  	return EXIT_SUCCESS;
}
