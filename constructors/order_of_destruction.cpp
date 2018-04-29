/*


What happens in this case?  We 

static type of the object 

dynamic type of the object

if the static type of the object to be deleted is different from its dynamic type.. this occurs only when the the static type is a base class of the dynamnic type.  If the base classes destructor is not virtual than the behavior is undefined.  

To ensure that both the derived classes and the base classes destructors are called... we declare the destructor as virtual. 

*/




#include <iostream>

class Base {
    	virtual void method() {
		std::cout << "from Base" << std::endl;
}

public:
    	virtual ~Base() {
		std::cout << " destructing from base class" << std::endl;
	}
    	void baseMethod() {
		method();
	}
};

class A : public Base {
    	void method() {std::cout << "from A" << std::endl;}
public:
    	~A() {

		std::cout << " destructing from derived class" << std::endl;
	}
};

int main(void) {
    	Base* base = new A;
    //	base->baseMethod();
    	delete base;
    	return 0;
}
