/*

There can only be a single destrutor per class and it can not be passed arguments.  


virtual destructor

Deleting a derived class object using a pointer to a base class that has a non-virtual destructor results in undefined behavior. To correct this situation, the base class should be defined with a virtual destructor. For example, following program results in undefined behavior.



*/

// CPP program without virtual destructor 
// causing undefined behavior
#include<iostream>
 
using namespace std;
 
class base {
  public:
    	base()     
    	{ cout<<"Constructing base \n"; }
    		~base()
    	{ cout<<"Destructing base \n"; }     
};
 
class derived: public base {
  public:
    	derived()     
    	{ cout<<"Constructing derived \n"; }
    	~derived()
    	{ cout<<"Destructing derived \n"; }
};
 
int main(void)
{
  	derived *d = new derived();  
  	base *b = d;
  	delete b;

  	return 0;
}

