/*

Operator() is also commonly overloaded to implement functors (or function object), which are classes that operate like functions. The advantage of a functor over a normal function is that functors can store data in member variables (since they are classes).


warning: non-static data member initializers only available with -std=c++1

Note that using our Accumulator looks just like making a normal function call, but our Accumulator object is storing an accumulated value.

Operator() is sometimes overloaded with two parameters to index multidimensional arrays, or to retrieve a subset of a one dimensional array (with the two parameters defining the subset to return). Anything else is probably better written as a member function with a more descriptive name.

Operator() is also often overloaded to create functors. Although simple functors (such as the example above) are fairly easily understood, functors are typically used in more advanced programming topics, and deserve their own lesson.


*/

#include <iostream>
#include <string>
class Accumulator{

  private:
	int m_counter =0;
  public:

	Accumulator(){

	}

	int operator() (int i){
		return (m_counter += i);
	}




};


/*

1) Write a class that holds a string. Overload operator() to return the substring that starts at the index of the first parameter. The length of the substring should be defined by the second parameter.

*/


class MyString{
  private:
	std::string str;
	
  public:
	MyString(std::string str_):str(str_){

	}

	std::string operator()(int start, int length){
		
		return str.substr(start, start+length);
	}
  

};


int main(){

	Accumulator acc;
	std::cout << acc(10) << std::endl;		//prints 10
	std::cout << acc(20) << std::endl;		//prints 20.. 
	
	std::string stri = "geeks for faggots";
	//std::cout << str.substr(0,5) << std::endl;
	MyString myString(stri);
	std::cout << myString(0,6) << std::endl;
}
