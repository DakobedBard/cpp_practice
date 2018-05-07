#include <iostream>
#include <memory>

int main(int argc, char **argv){
	// x contains a pointer to an int and has a reference count of 1
	std::shared_ptr<int> x(new int(10));

	{
		//x and y now shared the same pointer to an int, and they shared the reference count, the count is 2.
	
		std::shared_ptr<int> y = x;		// y points to the same object that x points to..
		std::cout << *y << std::endl;
	}

	// y fell out of scope and was destroyed.  Therefore, thereference count, which was previously seen by both x and y,
  	// but now is seen only by x, is decremented to 1.
  
	std::cout << *x << std::endl;
	return 0;
}
