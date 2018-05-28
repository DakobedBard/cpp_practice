/*

This example shows how std::unique_ptr is used

Since std::unique_ptr is allocated on the stack, it's guaranteec to eventually go out of scope, and when it does, it will delete the Resource it is managing..  std::unique_ptr properly implements move semantics

Because std::unique_ptr is designed with move semantics in mind, copy initialization and copy assignment are disabled. If you want to transfer the contents managed by std::unique_ptr, you must use move semantics. In the program above, we accomplish this via std::move (which converts res1 into an r-value, which triggers a move assignment instead of a copy assignment).


*/



#include <iostream>
#include <memory>		// for std::unique_ptr

class Resource{
  private:

	int x;

  public:
	Resource() { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }
	friend std::ostream& operator<<(std::ostream& out, const Resource &res)
	{
		out << "I am a resource\n";
		return out;
	}

};


int main(){

	std::unique_ptr<Resource> res1(new Resource); // Resource created here
	std::unique_ptr<Resource> res2; // Start as nullptr

	std::cout << "res1 is " << (static_cast<bool>(res1) ? "not null\n" : "null\n");
	std::cout << "res2 is " << (static_cast<bool>(res2) ? "not null\n" : "null\n");
 

	// res2 = res1; // Won't compile: copy assignment is disabled
	res2 = std::move(res1); // res2 assumes ownership, res1 is set to null
 
	std::cout << "Ownership transferred\n";
 
	std::cout << "res1 is " << (static_cast<bool>(res1) ? "not null\n" : "null\n");
	std::cout << "res2 is " << (static_cast<bool>(res2) ? "not null\n" : "null\n");

	std::unique_ptr<Resource> res(new Resource);

	if (res) // use implicit cast to bool to ensure res contains a Resource
		std::cout << *res; // print the Resource that res is owning


	return 0;

}
