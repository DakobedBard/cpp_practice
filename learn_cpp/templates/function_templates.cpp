/*

How are template functions implemented in C++??


C++ does not compiler the template function diretly.  Instead, at compile time, when the compiler encounters a call to a template function, it replicates the template function and replaces the template type parameters with actual types. The function with actual types is called a function template instance.



*/


template <typename DataType>		// template's parameter declaration
const DataType& max(const DataType& x, const DataType& y){
	return (x >y) ? x:y;
}

/*

When compiling your program, the compiler encounters a call to the templated function:


int i = max(3, 7); // calls max(int, int)


const int& max(const int &x, const int &y)
{
    return (x > y) ? x : y;
}



Template functions will work with both built-in types (e.g. char, int, double, etc…) and classes, with one caveat. When the compiler compiles the template instance, it compiles it just like a normal function. In a normal function, any operators or function calls that you use with your types must be defined, or you will get a compiler error. Similarly, any operators or function calls in your template function must be defined for any types the function template is instantiated for. Let’s take a look at this in more detail.


first, take a look at a simple class:

*/






int main(){

}
