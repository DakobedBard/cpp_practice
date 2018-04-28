/*

This program demonstrates that we can use the 'catch all' block, which can be used to catch all types of exceptions.  In this example an int will be thrown but since there is no catch block for int, the catch(...) will be executed.  

*/


#include <iostream>
using namespace std;

int main(){

	try{
		throw 10;

	}catch(char *excep){
		cout << "Caught char except " << excep;

	}catch(...){
		cout << "Default exception \n" << endl;

	}

// Implicit type conversion doesn't happen for primitive types.  For example, in the following program 'a' is not implicitly converted to int

	try{
		throw 'a'
	}
	catch(int x){
		cout << "Caught " << x <<endl;
	}
	catch(...){
		cout << "Default Exception \n " << endl;
	}


	return 0;
}
