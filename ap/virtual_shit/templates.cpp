#include <iostream>
using namespace std;
 
template <typename T>
void fun(const T&x)
{
    static int count = 0;
    cout << "x = " << x << " count = " << count << endl;
    ++count;
    return;
}
 
int main()
{
    fun<int> (1); 
    cout << endl;
    fun<int>(1); 
    cout << endl;
    fun<double>(1.1);
    cout << endl;
    return 0;
}


/*

I think the output will be...

x = 1, count = 0
x = 1 count = 1

x = 1.1 count = 0

 Does each different parameterized version of the function fun() have its own static variables??   YES


which of the following is true about templates...

1) Templates is a feature of C++ that allows us to write one code for differeant data types

2) We can write one function that can be used for all data types including user defined types... 

3) We can write on class or struct that can be used for all data types including user defined types...

4) Template is an example of compile time polymorphism

All of these are true...



*/
