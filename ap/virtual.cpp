#include <iostream>
#include<string>
using namespace std;
 
/*

This is Base class
This is Base class


Note that at an object of Derived is passed in describe(d), but print of Base is called.  The describe function accepts a parameter of Base type.  This is a typical example of object slicing, when we assign an object of derived class to an object of base type, the 
derived class object is sliced off, and all of the data members inherited from base class are copied.  



*/


class Base
{
public:
    virtual string print() const
    {
        return "This is Base class";
    }
};
 
class Derived : public Base
{
public:
    virtual string print() const
    {
        return "This is Derived class";
    }
};
 
void describe(Base p)
{
    cout << p.print() << endl;
}
 
int main()
{
    Base b;
    Derived d;
    describe(b);
    describe(d);
    return 0;
}

