#include <iostream>


/*  This example demonstrates that we MUST initialize const member variables using an initializer list.  

1) const member variables

2) reference member variables

3)  member objects which do not have a default constructor

4) Initialization of base class members...

5) When constructors paramater name is same as data member...

6) For performance reasons

*/

class A{
  public:
	A(int arg){
		i = arg;
		std::cout << "A's constru tor called: Value of i " << i <<std::endl;	
	}
  private:
	int i;
};



class Base{
  public:
	Base(int i);
  private:
	int i_;	
};

Base::Base(int arg){
	i_ = arg;
	std::cout << "Base class's constructor called: Value of i: " << i_ << std::endl;

}


class Derived : public Base{
  private:

  public:	
	Derived(int arg);
	
};

// We MUST use an initialization list here, the parameterized constructor of the base class can only be called using an initializer 
// list.. 

Derived::Derived(int x): Base(x){
	std::cout << "Derived constructor is called here... " << std::endl;

}


class Test{

//	Test(int k_){			This throws a compiler error... 
//		k = k_;
//	}	
  
  public:

	Test(int k_, int &t_, int int_param_for_A) : k(k_), t(t_), a(int_param_for_A){}		// This works!!
  private:
	const int k;
	int &t;
	A a;							// Class A does not have a default constructor

};


/*					Why is this not givuibng me an error !!??
class same_name{

	int i;
  public:
	same_name(int i){
		i = i;
	}

};

*/
int main(){

	int inty;
	int& reffy =inty;
	Test c(inty, reffy, 5);

	Derived objDerived(10);

}
