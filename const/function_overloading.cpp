/*

This program shows that we can overload functions based on the basis of const.

However functions are not able to be overloaded based on the basis of const parameters UNLESS THE PARAMETER IS REFERENCE OR A POINTER 

void fun(const int i)
{
    cout << "fun(const int) called ";
}
void fun(int i)
{
    cout << "fun(int ) called " ;
}


C++ allows functions to be overloaded on the basis of const-ness of parameters only if the const parameter is a reference or a pointer. That is why the program 1 failed in compilation, but the program 2 worked fine. This rule actually makes sense. In program 1, the parameter ‘i’ is passed by value, so ‘i’ in fun() is a copy of ‘i’ in main(). Hence fun() cannot modify ‘i’ of main(). Therefore, it doesn’t matter whether ‘i’ is received as a const parameter or normal parameter. When we pass by reference or pointer, we can modify the value referred or pointed, so we can have two versions of a function, one which can modify the referred or pointed value, other which can not.


*/



#include<iostream>
using namespace std;
 
class Test
{
protected:
    	int x;
public:
    	Test (int i):x(i) { }
    	void fun() const
    	{
        	cout << "fun() const called " << endl;
    	}
    	void fun()
    	{
        	cout << "fun() called " << endl;
    	}
};
 
// we have overloaded the function fun() based on a const pointer parameter.... suprisingly this compiles... 
void fun(char *a)
{
  	cout << "non-const fun() " << a;
}
 
void fun(const char *a)
{
  	cout << "const fun() " << a;
}



int main()
{
    	Test t1 (10);
    	const Test t2 (20);
    	t1.fun();
    	t2.fun();
    	return 0;
}

