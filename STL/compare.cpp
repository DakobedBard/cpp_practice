#include <iostream>
#include <string>

/*

Here we have a function template....


*/


template <class T>
int compare(const T &value1, const T &value2){
	if(value1 < value2) return -1;
	if(value2 < value1) return 1;
	return 0;

}


// You can also use non types- const values in a template

template <class T, int N>
void printmultiple(const T &value1){

	for(int i=0; i< N; ++i){
		std::cout << value1 << std::endl;
	}
}





int main(){

	std::string h("hello"), w("wordld");

	std::string *heap_string  = new std::string("i'm allocated on the heap");
	
	std::cout << compare<std::string>(h,w) << std::endl;
	std::cout << compare<int>(10,20) << std::endl;
	std::cout << compare<double>(50.6, 50.4) << std::endl;
	
	// We can also hvae the compiler infer the types of the arguments given to the function...

	std::cout << compare(*heap_string, h) << std::endl;

	// LIKE SO!


	printmultiple<int, 4>(10);

	return 0;

}

/*

What's going on underneath...

The compiler doesn't generate any code when it sees the templated function..
	- it doesn't know what code togenerate yet since it doesn't know what type is involved

- When the compler sees the function being used, then it understands what types are involved,
	- it generates the instantiation of the template and compiles






*/



