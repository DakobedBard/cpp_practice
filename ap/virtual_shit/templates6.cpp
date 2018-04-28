#include<iostream>
#include<stdlib.h>
using namespace std;
 
template<class T, class U, class V=double>
class A  {
    T x;
    U y;
    V z;
    static int count;
};
 
int main()
{
   A<int, int> a;
   A<double, double> b;
   cout << sizeof(a) << endl;
   cout << sizeof(b) << endl;
   return 0;
}



// What is the size of each of these templated classes..double is 8 bytes... so 
//
//
//
//
//	A<double, double, double>    	is 8*3 = 24 bytes.. 
//	A<int, int,double>           	is 4*2 + 8 = 16 bytes.. 
