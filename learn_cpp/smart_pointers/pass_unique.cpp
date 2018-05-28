#include <memory>  		// for std::unique_ptr
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



void takeOwnership(std::unique_ptr<Resource> res){

	if(res)
		std::cout << *res;
}

int main(){

	auto ptr = std::make_unique<Resource>();

	//    takeOwnership(ptr); // This doesn't work, need to use move semantics
    	takeOwnership(std::move(ptr)); // ok: use move semantics
 
    	std::cout << "Ending program\n";
 
    	return 0;
}



/*


Note that in this case, ownership of the Resource was transferred to takeOwnership(), so the Resource was destroyed at the end of takeOwnership() rather than the end of main().

However, most of the time, you won’t want the function to take ownership of the resource. Although you can pass a std::unique_ptr by reference (which will allow the function to use the object without assuming ownership), you should only do so when the caller might alter or change the object being managed.

Instead, it’s better to just pass the resource itself (by pointer or reference, depending on whether null is a valid argument). This allows the function to remain agnostic of how the caller is managing its resources. To get a raw resource pointer from a std::unique_ptr, you can use the get() member function:

std::unique_ptr and classes

You can, of course, use std::unique_ptr as a composition member of your class. This way, you don’t have to worry about ensuring your class destructor deletes the dynamic memory, as the std::unique_ptr will be automatically destroyed when the class object is destroyed. However, do note that if your class object is dynamically allocated, the object itself is at risk for not being properly deallocated, in which case even a smart pointer won’t help.





*/
