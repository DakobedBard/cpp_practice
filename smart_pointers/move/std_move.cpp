/*





*/


#include <iostream>
#include <string>
/*
template<class DataType>

void swap(DataType& a, DataType b){

	DataType tmp{		// invokes copy constructor
		a
	};

	a = b;			// invokes copy assignment
	b = tmp;		// invokes copy assignment 

}
*/

/*
In this ixample we use std::move to convert its argument into an r-value.  We can pass an l-value to std::move and it will return an r-value reference.  


*/

template<class DataType>
void swap(DataType& a, DataType& b) 
{ 
  DataType tmp { std::move(a) }; // invokes move constructor
  a = std::move(b); // invokes move assignment
  b = std::move(tmp); // invokes move assignment
	
}


int main(){
	std::string x{ "abc" };
	std::string y{ "de" };
 
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
 
	swap(x, y);
 
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
 


	//


	return 0;
}
