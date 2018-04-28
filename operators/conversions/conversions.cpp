
#include <iostream>


struct B{
	int x;
	 B(){
		x = 1;
	}
};

struct A{
	operator B&() {
		std::cout << "The conversion operator is called..." << std::endl;
		static B b;		// Of course when we are returning a reference... if the variable we are returning is not 
		return b;		// declared as static then we risk run time nonsense... compiler warning.. 
	}
};

void func(B){

	std::cout << "I'm called within function func, which expects a parameter of type B" << std::endl;
}


typedef void (*fPtr)(int);

void foo(int a);

struct test{
	operator fPtr() {
		std::cout << "The fPtr operator is called... " << std::endl;
		return foo;
	}
};



void foo(int a){
	std::cout << "I'm inside foofunc which is returned by the operator .. " << std::endl;
}


int main(){

	func(A());			// The function expects a parameter of type B... but we pass in an object of type A.. 
					// During argument passing the conversion operator will be called..


	B& b = A();			// Converstion to reference is when you bind a reference
	
	std::cout << "Our object of type B, which we have a reference to has an integer: " << b.x << std::endl;


	test t;
	t(10);
}
