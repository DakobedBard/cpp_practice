/*

What is the output of this program?



*/



#include<iostream>
using namespace std;
 
class Test
{
    static int a;  // a IS STATIC NOW
public:
 
    // Local parameter 'a' hides class member
    // 'a', but we can access it using ::
    void func(int a)  { cout << Test::a << endl; }
};
 
// In C++, static members must be explicitly defined 
// like this
int Test::a = 1;
 
int main()
{
    Test obj;
    int k = 3 ;
    obj.func(k);
    return 0;
}

