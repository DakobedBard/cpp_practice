#include<iostream>
#include<stdlib.h>
using namespace std;
 
template<class T, class U>
class A  {
    	T x;
    	U y;
    	static int count;
};
 
int main()  {
   	A<char, char> a;
   	A<int, int> b;
   	cout << sizeof(a) << endl;
   	cout << sizeof(b) << endl;
   	return 0;
}



// What is the size of each of these templated classes.... we ignore the static variable... char is 1 byte.. int is 4 bytes..
// so the sizeof(a) = 2 bytes and the sizeof(b) is equal to 8 bytes... 
