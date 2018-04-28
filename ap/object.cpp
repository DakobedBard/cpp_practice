/*

What are the differences between classes and structures in C++?

Members of a class are private by default and members of struct are public by default.  



Size of an emopty class is not zero... it is 1 byte generally.  It is nonzero to ensure that the two differeant objects wil have differeant addresses.  

Virtual functions cannot be static


Which of the following is not correct in C++

Class templates and function templates are instantiated in the same way
Class templates differ from function templates in the way they are initiated
Class template is initiated by defining an object using the template argument
Class templates are generally used for storage classes


(2), (3), (4) In C++ class template and function template are similar in the way the are initiated.
Class template are not used for storage class. Class templates and function templates are instantiated in the same way and Class template is not initiated by defining an object using the template.



*/

#include<iostream>
using namespace std;
 

class Empty{};

int main(){
	cout << sizeof(Empty) << endl;
}
