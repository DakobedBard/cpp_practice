#include<iostream>
using namespace std;
 

// Like structures.. class objects can be initialized.  The line "X b = a calls copy constructor and is same as X b(a)
// If we don't write our own copy constructorer then compiler creates a default copy constructor which assigns data members one object to another object.  

class X 
{
public:
    int x;
};
 
int main()
{
    X a = {10};
    X b = a;
    cout << a.x << " " << b.x << endl;
    return 0; 
}

