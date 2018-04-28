// We can use an array of function pointers instead of 


#include <iostream>


typedef void (*fPtr)(int);



void point_function(int a){

	std::cout << "Value of a is  " << a << std::endl;
}




int main(){


	void (*fun_ptr)(int) = &point_function;
	(*fun_ptr)(10);					// Invoking fun() using fun_ptr...


	 void (*fun_ptr_addr)(int) = point_function;  // & removed. A function's name can also be used to get a function's address...

	//void (*fun_ptr_address) = point_function;
	fun_ptr_addr(15) ; 				// In this call we don't use the * to derefernce...

}
