/*

When a function returns by reference, it can be used as an lvalue.  Since x is a static variable, it is shared among function calls and the initialization line 'static int x = 10' is executed only once.  The line fun() = 30 modifies that static variable x to 30.  The next call call "cout << fun() returns the modified value. 

If we change the variable x within the function fun() to be non static, then we will have a runtime error (segmentation fault)



*/


#include<iostream>
using namespace std;
 
int &fun()
{
     static int x = 10;
    return x;
}
int main()
{
    fun() = 30;
    cout << fun();
    return 0;
}

