/*

Let's learn about rvalues and lvalues!


lvalue is an expression whose address can be taken, a locator value.  An lvalue provides a (semi) permanent piece of memory.  You can make assignments to lvalues.  

int a;
a = 1;				here a is an lvalue...			

rvalues are temporary objects.  For example:

string getName(){
	return "Darr";
}

getName() 

In this case getName returns a string that is constructed inside the function, 


The idea of rvalue references is that they allow us to detect temporary objects...

rvalues refer to temporary objects

rvalue references allow us to write code that is overloaded to behave differently for temporary objects.  An rvalue reference is a reference that will bind only to a temporary object.  What do i mean?

Prior to C++ 11, f you had a temporary object, you could use an lvalue reference to bind it, but ONLY if it was const.    

The intuition here is that you cannot use a "mutable" reference because, if you did, you'd be able to modify some object that is about to disappear, and that would be dangerous. Notice, by the way, that holding on to a const reference to a temporary object ensures that the temporary object isn't immediately destructed. This is a nice guarantee of C++, but it is still a temporary object, so you don't want to modify it.

In C++11, however, there's a new kind of reference, an "rvalue reference", that will let you bind a mutable reference to an rvalue, but not an lvalue. In other words, rvalue references are perfect for detecting if a value is temporary object or not. Rvalue references use the && syntax instead of just &, and can be const and non-const, just like lvalue references, although you'll rarely see a const rvalue reference (as we'll see, mutable references are kind of the point):

const string&& name = getName(); // ok
string&& name = getName(); // also ok - praise be!

Okay great... but how does this help? 

Well the most important distinction between lvalue references vs rvalue references is what happens when you write functions that take lvalue or rvalue references as arguments.  Let's say we have two functions...


printReference (const String& str)
{
        cout << str;
}
 
printReference (String&& str)
{
        cout << str;
}

Now the behavior gets interesting--the printReference function taking a const lvalue reference will accept any argument that it's given, whether it be an lvalue or an rvalue, and regardless of whether the lvalue or rvalue is mutable or not. However, in the presence of the second overload, printReference taking an rvalue reference, it will be given all values except mutable rvalue-references. In other words, if you write:

std::string me( "Darr" );
printReference(  me ); // calls the first printReference function, taking an lvalue reference
 
printReference( getName() ); // calls the second printReference function, taking a mutable rvalue reference


With this we have a way of knowing if a reference refers to a temporary object or a permanent object.  


*/


#include <iostream>
#include <string>



int x;

int& getRef(){

	return x;
}

std::string getName(){
	return "Darr";
}


void printReference (const std::string& str)
{	
	std::cout << "This function takes an lvalue reference..." << std::endl;
        std::cout << str << std::endl;
}
 
void printReference (std::string&& str)
{
	std::cout << "Took the rvalue reference..." << std::endl;
        std::cout << str << std::endl;
}




int main(){
	int a;
	a = 1; 				// here, a is an lvalue.  
	getRef() = 4;			// getRef returns a reference to a globaly variable, so it's returning a value that is
					// stored in a permanent location.  You could write &getRef(), would return the address of x.
	std::string g_string = "char_sequence";	
	std::cout << g_string << std::endl;

	const std::string& name = getName();  	// This is okay prior to C++11...

	const std::string&& rvalue_reference_name = getName(); // ok
	std::string&& rvalue_reference_name2 = getName(); // also ok - praise be!
 
	//std::string& name_ = getName();	// This on the other hand is not okay...

	
	std::string me( "Darr" );
	printReference(  me ); // calls the first printReference function, taking an lvalue reference
 
	printReference( getName() ); // calls the second printReference function, taking a mutable rvalue reference





};
