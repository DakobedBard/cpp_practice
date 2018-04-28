#include <iostream>

/*

What is the output of this program?

the value of i is copied before the destructor of A gets called.  The destructor of A gets called when the object of type A falls out of scope (when foo() returns).  The destructor for the object "ob" is called AFTER the value of i is copied to the return value of the function... So, before the destructor could change the value of i to 10, the current value of i gets copied & hence the output is i =3.

How to make the program output i=10?



*/



int i;

class A{
  public:
	~A(){
		i = 10;
	}

};

int foo(){
   	i =3;
	A ob;
	return i;

}

int& bar(){
	i = 3;
	A ob;
	return i;
}

int blocked_scope(){
	i=3;
	{
		A ob;
	}
	return i;
}


int main(){
	std::cout << "i = " << bar() << std::endl;
	std::cout << "i = " << blocked_scope() << std::endl;	
}

