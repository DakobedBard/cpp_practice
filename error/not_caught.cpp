#include <iostream>

int main(){
	
	try{
		throw 'a';
	}
	catch(int x){
		std::cout << "Caught" << std::endl;
	}
	return 0;
}
