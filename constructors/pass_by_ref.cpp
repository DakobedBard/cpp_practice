/*

This program will demonstrate passing objects by value vs passing objects by reference...


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


	Derived &derived_ref = derived_;	
	display_func_ref(derived_ref);			

}
