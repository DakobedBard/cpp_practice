/*

Here we discuss function templates.. there is a lot to this you dumb sack of shit

parameter-list	-a non-empty comma-separated list of the template parameters, each of which is either non-type parameter, a type parameter, a template parameter, or a parameter pack of any of those. As with any template, parameters may be constrained (since C++20)



Syntax 


template < parameter-list > function-declaration



A function template by itself is not a type, or a function, or any other entity. No code is generated from a source file that contains only template definitions. In order for any code to appear, a template must be instantiated: the template arguments must be determined so that the compiler can generate an actual function (or class, from a class template).



Explicit instantiation..

Explicit instantiation definition (without template argument deduction if every non-default template parameter is explicitly specified)

template<typename T>
void f(T s)
{
    std::cout << s << '\n';
}
 
template void f<double>(double); // instantiates f<double>(double)
template void f<>(char); // instantiates f<char>(char), template argument deduced
template void f(int); // instantiates f<int>(int), template argument deduced


Explicit instantiation of a function template or of a member function of a class template cannot use inline or constexpr. If the declaration of the explicit instantiation names an implicitly-declared special member function, the program is ill-formed.

Explicit instantiation declarations do not suppress the implicit instantiation of inline functions, auto-declarations, references, and class template specializations. (thus, when the inline function that is a subject of explicit instantiation declaration is ODR-used, it is implicitly instantiated for inlining, but its out-of-line copy is not generated in this TU)

Explicit instantiation definition of a function template with default arguments is not a use of the arguments, and does not attempt to initialize them:

Explicit instantiation of a function template or of a member function of a class template cannot use inline or constexpr. If the declaration of the explicit instantiation names an implicitly-declared special member function, the program is ill-formed.

Explicit instantiation declarations do not suppress the implicit instantiation of inline functions, auto-declarations, references, and class template specializations. (thus, when the inline function that is a subject of explicit instantiation declaration is ODR-used, it is implicitly instantiated for inlining, but its out-of-line copy is not generated in this TU)

Explicit instantiation definition of a function template with default arguments is not a use of the arguments, and does not attempt to initialize them:




Implicit instantation.. 


When code refers to a function in context that requires the function definition to exist, and this particular function has not been explicitly instantiated, implicit instantiation occurs. The list of template arguments does not have to be supplied if it can be deduced from context




*/
#include <iostream>

//  Explicit instantation ...  

template<typename Type>
void template_function(Type s){

	std:: cout << s << std::endl;
}

template  void template_function<double>(double);	// This appears to be explicit instantiation....


// Now lets define a templated function implicitly...


template<typename Type>
void implicit_template_function(Type s){
	std::cout << "we are in an implicitly instantiated template function " << s << std::endl;
}






class SomeClass{
  public:
	static int data;
};

SomeClass::data =0;



int main(){

	template_function(4.5);
	int numerator, denominator;
	float quotient = numerator/denominator;
	
	// Let's call our implictly instantiated template function...


	implicit_template_function<double> (2);		// Instantiates and calls implicit_template_function<double>(doube)..
	implicit_template_function<>('a');		// The list of template arguments does not have to be supplied if it can
							// be deduced from context..

	implicit_template_function(7);			// Instantiates and calls implicit_template_function<int>(int)

}
