#include<iostream>
using namespace std;

// A pure virtual function is implemented by classes which are derived from an Abstract class.  


class Base{

	int x;
  public: 
	virtual void fun() = 0;
	int getX() { 
		return x;
	}

};

class Derived : public Base{
	int y;
  public:
	void fun() { 
		cout << "fun() called " << endl; 
	}
};


class Test{

	int x;
  public:
	virtual void show() =0;
	int getX() { return x;}
};



int main(void){
	Derived d;
	d.fun();

	//  Test t;	Cannot create this object because class Test is abstract, meaning it has atleast one pure virtual 
	//		function	
	
	return 0;
}
