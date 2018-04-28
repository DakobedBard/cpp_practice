#include<iostream>
using namespace std;
 
// An abstract class with constructor
// Abstract classes can have construtors...

// Comparisson with Java... 
// In Java a class can be made abstract by using abstract keyword.  Similarly a function can be made pure virtual or abstract by using abstract
// keyword. 
// Interface vs Abstract Classes... An interface does not have implementation of any of its methods, it can be considered as a collection of
// method declarations.  In C++ an interface can be simulated by making all methods as pure virtual.  In Java, there is a seperate keyword
// for interface 


// Can a constructor be virtual ... No ... making a constructor virtual doesn't make sense as constructor is responsible for creating an
// object and it can't be delegated to any other object by virtual means 
//
// On the other hand a destructor can be virtual... we may want to call appropriate destructor when a bas class pointer points to a derived
// class object and we delete the object.  If destructor is not virtual, then only the base class destructor may be called.   


class Base
{
  protected:
   	int x;
public:
  	virtual void fun() = 0;
  	Base(int i) { x = i; }
};
 
class Derived: public Base
{
    	int y;
public:
    	Derived(int i, int j):Base(i) { y = j; }
    	void fun() { cout << "x = " << x << ", y = " << y; }
};
 
int main(void)
{
    	Derived d(4, 5);
    	d.fun();
	cout <<endl;
    	return 0;
}

