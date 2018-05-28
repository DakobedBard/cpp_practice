#include "static_array.h"


/*

This class takes two template parameters, a type parameter and an expression paramter

Now lets say we wanted to write a function to print out the whole array.  Although we could implement this as a member function, we're going to to do it as a non member function instead because it will make the successive examples easier to follow.  


*/




int main(){

	StaticArray<int, 4> int4;
	int4[0] = 0;
	int4[1] = 1;
	int4[2] = 2;
	int4[3] = 3;
	print(int4);

}


