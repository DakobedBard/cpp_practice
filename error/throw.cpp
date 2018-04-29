#include <iostream>

class A{
  public:

	A(){}
	~A(){
		throw 42;
	}

};


int main(int argc, char **argv){

	try{
		A a;
		throw 32;

	}catch(int a){
		std::cout << "The value thrown is..." << a << std::endl;
	}	

}
