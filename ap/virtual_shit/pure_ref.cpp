#include<iostream>
using namespace std;
 
/* 

It is possible to have pointers and references of abstract class type like the program below shows.  


*/



class Base
{
public:
    virtual void show() = 0;
};
 
class Derived: public Base
{
public:
    void show() { cout << "In Derived \n"; }
};
 
int main(void)
{
    Base *bp = new Derived();
    bp->show();
    return 0;
}

