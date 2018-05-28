/*

This program demonstrates how to safely return a unique_ptr from a function by value.  
createResource() returns a std::unique_ptr by value. If this value is not assigned to anything, the temporary return value will go out of scope and the Resource will be cleaned up. If it is assigned (as shown in main()), move semantics will be employed to transfer the Resource from the return value to the object assigned to (in the above example, ptr). This makes returning a resource by std::unique_ptr much safer than returning raw pointers!

In general, you should not return std::unique_ptr by pointer (ever) or reference (unless you have a specific compelling reason to).


this program requires -std=c++14

*/

#include <memory>
#include <iostream>


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


std::unique_ptr<Resource> createResource(){
	return std::make_unique<Resource>();
}



int main(){

}
