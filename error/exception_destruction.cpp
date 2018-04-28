#include <iostream>

/*

When an exception is thrown, destructors of the objects(


*/

class Test{
  public:
	Test(){
		std::cout << "Constructing an object of Test " << std::endl;
	}

	~Test(){ std::cout << "Destructing an object of Test " << std::endl;
	}
};




int main(){

	try {
		Test t1;
		throw 10;

	}catch(int i){
		std::cout << "Caught " << i << std::endl;
	}
}
