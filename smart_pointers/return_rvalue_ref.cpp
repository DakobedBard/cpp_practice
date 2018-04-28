/*

Are there ever times where you should write a function that returns an rvalue reference?

What does it mean to return an rvalue reference anyway? Aren't functions that return objects by value already rvalues?

So returning an rvalue reference is a different thing than not returning an rvalue reference, but this difference manifests itself most noticeably if you have a pre-existing object you are returning instead of a temporary object created in the function (where the compiler is likely to eliminate the copy for you).

Now on to the question of whether you want to do this. The answer is: probably not. In most cases, it just makes it more likely that you'll end up with a dangling reference (a case where the reference exists, but the temporary object that it refers to has been destroyed). The issue is quite similar to the danger of returning an lvalue reference--the referred-to object may no longer exist. Rvalue references cannot magically keep an object alive for you. Returning an rvalue reference would primarily make sense in very rare cases where you have a member function and need to return the result of calling std::move on a field of the class from that function--and how often are you going to do that?


*/


#include <utility>
#include <iostream>

int x;
int getInt(){
	return x;
}

int&& getRvalueInt(){
	// Notice that it's fine to move a primitive type -- remember, std::move is just a cast
	return std::move(x);
}


void printAddress (const int& v) // const ref to allow binding to rvalues
{
    std::cout << reinterpret_cast<const void*>( & v ) << std::endl;
}


int main(){
	printAddress( getInt() ); 
	printAddress( x );


	printAddress( getRvalueInt() ); 
	printAddress( x );
}



