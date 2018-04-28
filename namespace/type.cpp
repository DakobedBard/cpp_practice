/* 

	Conversions are not performed in catch blocks... 


	As a side note, the derived type objects are converted to base type when a derived object is thrown and there is a catch block to catch base type

*/


#include <iostream>

class MyExcept1{};

class MyExcept2{
  public:

	MyExcept2(const MyExcept2 &e){
		std::cout << "Conversion contructor called";
	}
};


int main(){

	try{
		throw 'x'; 
	}
	catch(int i){
		std::cout << "Caught int: " << i << std::endl;
	}
	catch(...){
		std::cout << "Default catch block" << std::endl;
	}

	

	std::cout << "The conversion constructor WILL NOT BE CALLED " << std::endl;


	try
    	{
        	MyExcept1 myexp1;
        	throw myexp1;
    	}
    	catch(MyExcept2 e2)
    	{
        	std::cout << "Caught MyExcept2 " << std::endl;
    	}
    	catch(...)
    	{
        	std::cout << " Defaule catch block " << std::endl;
    	}
}
