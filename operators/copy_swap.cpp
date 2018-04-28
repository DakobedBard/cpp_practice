

// Simple C++ program to demonstrate overloading of
// assignment operator.
#include <iostream>
#include <cstring>
using namespace std;
 
class anyArrayClass
{
    	int size;
    	int *ptr;
public:
 
    	// Initializer list
    	anyArrayClass(int s=0):size(s),
       	ptr(size? new int[size]:nullptr) {}
 
    	// Copy constructor
    	anyArrayClass(const anyArrayClass& obj):size(obj.size),
   
     	ptr(size? new int[size]:nullptr)
    	{
        	memmove(ptr, obj.ptr, size*sizeof(int));
    	}
 
    	// Overloaded assignment operator
    	anyArrayClass& operator=(const anyArrayClass& obj)
    	{
        	// self assignment check
        if (this != &obj)
        {
            	delete ptr;
            	size = obj.size;
            	ptr = size? new int[size]: nullptr;
            	memmove(ptr, obj.ptr, size*sizeof(int));
            	return *this;
        }
    	}
    	~anyArrayClass()
    	{
        	delete[] ptr;
    	}
};

int main(){

}
