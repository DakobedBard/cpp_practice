/*

Write a templated function.. 

*/



#include <iostream>
using namespace std;

template <typename T>

void fun(const T &x){

	static int count = 0;
	cout << "x =" << x << " count " << count << endl;
	++count;
}

// Write a class with copy constructors and assignment operator



int main(){
	fun <int> (2);
	fun <int> (3);

	fun <double>(1.1);

	fun <char>('a');

}
