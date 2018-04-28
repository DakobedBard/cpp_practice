/*

In C++ a derived class object can be assigned to a base class object, but the other way is not possible..

Object slicing happens when a derived class object is assigned to a base class object, additional attributes of a derived class are sliced of to form the base class object.  


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

	
};

// A Base class object is passed by value in this case... 
// 

void display_func_value(Base obj){
	
	obj.display();

}

void display_func_ref(Base &obj){
	
	obj.display();

}

void display_func_ptr(Base *objp){
	
	objp->display();
}



int main(){

	Base base_(33);
	Derived derived_(45, 54);

	std::cout << "Passing the Base class object by value will result in slicing.." << std::endl;

	display_func_value(base_);		
	display_func_value(derived_);			// Object slicing occurs on this line.. since the function expects an object of type

	// Now lets declare pointers to our objects and call the apprpriate function, observing that object slicing does NOT occur here..
									
	Derived *derived_ptr = &derived_;
	Base *base_ptr = &base_;
	
	std::cout << "Let's pass a pointer to the funtion instead to show that object slicing will not occur" << std::endl;

	display_func_ptr(derived_ptr);			// No object slicing occurs in this case...	
	display_func_ptr(base_ptr);		

	// Now we will create references to our objects, and pass them to the approrpiate functions

	std::cout << "Let's pass a reference to our derived object to the funtion to show that object slicing will not occur" << std::endl;

	Derived &derived_ref = derived_;	
	display_func_ref(derived_ref);			// No object slicing occurs when we pass a reference to the Base class object..
	

	// Now let's see that behavior of passing by referene vs passing by value!!




}
