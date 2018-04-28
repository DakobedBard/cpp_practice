/*


	We can use function pointers to avoid code redundancy.  


*/

#include <iostream>



void fun1(){ 

	std::cout << "Fun1" << std::endl;
}


void fun2(){
	
	std::cout << "Fun2" << std::endl;
}


void wrapper(void (*fun)()){
	fun();

}


int main(){
	
	wrapper(fun1);
	wrapper(fun2);
	return 0;

}
