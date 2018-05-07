/*

Type conversion (often a result of type casting) refers to changing an entity of one data type, expression, function argument, or return value into another. This is done to take advantage of certain features of type hierarchies. For instance, values from a more limited set, such as integers, can be stored in a more compact format and later converted to a different format enabling operations not previously possible, such as division with several decimal places' worth of accuracy. In the object-oriented programming paradigm, type conversion allows programs also to treat objects of one type as one of another. One must do it carefully as type casting can lead to loss of data.


Automatic type conversion


Promotion
A numeric promotion is the conversion of a value to a type with a wider range that happens whenever a value of a narrower type is used. Values of integral types narrower than int (char, signed char, unsigned char, short int and unsigned short) will be promoted to int if possible, or unsigned int if int can't represent all the values of the source type. Values of bool type will also be converted to int, and in particular true will get promoted to 1 and false to 0.





Explicit type conversion (casting)

Explicit type conversion (casting) is the use of direct and specific notation in the source code to request a conversion or to specify a member from an overloaded class. There are cases where no automatic type conversion can occur or where the compiler is unsure about what type to convert to, those cases require explicit instructions from the programmer or will result in error.



static_cast<target type>(expression)

The static_cast keyword can be used for any normal conversion between types. Conversions that rely on static (compile-time) type information. This includes any casts between numeric types, casts of pointers and references up the hierarchy, conversions with unary constructor, conversions with conversion operator. For conversions between numeric types no runtime checks if data fits the new type is performed. Conversion with unary constructor would be performed even if it is declared as explicit.

It can also cast pointers or references down and across the hierarchy as long as such conversion is available and unambiguous. For example, it can cast void* to the appropriate pointer type or vice-versa. No runtime checks are performed.


BaseClass* a = new DerivedClass();
static_cast<DerivedClass*>(a)->derivedClassMethod();


*/

#include <iostream>
int main(){

	int a = static_cast<int> (7.5)  ;

	/*

 the compiler will try its best to interpret the expression as it would of type type The cast can be used to suppress the warning as shown above. static_cast cannot do all conversions; for example, it cannot remove const qualifiers, and it cannot perform "cross-casts" within a class hierarchy. It can be used to perform most  numeric conversions, including conversion from  a integral value to an enumerate type.
	*/

	std::cout << "the result of casting from double is... : " << a << std::endl;

}
