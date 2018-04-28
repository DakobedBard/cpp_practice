/*

This program will demonstrate passing objects by value vs passing objects by reference...

How will we demostrate that passing an object by reference will allow us to modify the actual object passed and not just a local copy?

We modify it inside the function that is passed and see what happens.. 


*/



#include <iostream>

class Base{

  protected:
	int i;

  public:
	Base(int a) {
		i =a;
	}
	virtual void display(){
		std::cout << "I am a base class object, i = " << i << std::endl;
	}
	void setI(int i_){
		i = i_;
	}

};

class Derived : public Base{
  private:
	int j;
  public:
	Derived(int a, int b) : Base(a) {
		j = b;
	}	
	virtual void display(){
		std::cout << "I am a derived class object... i = " << i << ", j = " << j << std::endl;
	}
	void setJ(int j_){
		j = j_;
	}

	void setJandI(int i_, int j_){
		i = i_;
		j = j_;
	}

	
};

// A Base class object is passed by value in this case... 
// 

void pass_obj_value(Base obj){
	obj.setI(3);
	
}

void pass_obj_ref(Base &obj){
	
	obj.setI(3);

}

void pass_obj_ptr(Base *objp){
	
	
}


int main(){


	Base base_(33);
	std::cout << "Before the object base_ is passed to the function by value" << std::endl;
	base_.display();

	pass_obj_value(base_);
		
	std::cout << "After the object base_ is passed to the function by value" << std::endl;
	base_.display();

	Base base_2(101);
	std::cout << "Before the object base_2 is passed to the function by reference" << std::endl;
	base_2.display();
	std::cout << "After the object base_2 is passed to the function by reference" << std::endl;
	pass_obj_ref(base_2);
	base_2.display();
}

/*


Pass by value when the function does not want to modify the parameter and the value is easy to copy (ints, doubles, char, bool, etc... simple types. std::string, std::vector, and all other STL containers are NOT simple types.)

Pass by const pointer when the value is expensive to copy AND the function does not want to modify the value pointed to AND NULL is a valid, expected value that the function handles.

Pass by non-const pointer when the value is expensive to copy AND the function wants to modify the value pointed to AND NULL is a valid, expected value that the function handles.

Pass by const reference when the value is expensive to copy AND the function does not want to modify the value referred to AND NULL would not be a valid value if a pointer was used instead.

Pass by non-cont reference when the value is expensive to copy AND the function wants to modify the value referred to AND NULL would not be a valid value if a pointer was used instead.

When writing template functions, there isn't a clear-cut answer because there are a few tradeoffs to consider that are beyond the scope of this discussion, but suffice it to say that most template functions take their parameters by value or (const) reference, however because iterator syntax is similar to that of pointers (asterisk to "dereference"), any template function that expects iterators as arguments will also by default accept pointers as well (and not check for NULL since the NULL iterator concept has a different syntax).




*/


