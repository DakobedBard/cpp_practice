#include<iostream>
using namespace std;
 
// We can access a base classes functions use scope resolution operator even if they are hidden by a derived class function

class Base {
public:
    int fun()          {    cout << "Base::fun() called" <<endl;     }
    int fun(int i)     {   cout << "Base::fun(int i) called" << endl;  }
};
 
class Derived: public Base  {
public:
    int fun()   {     cout << "Derived::fun() called" <<endl;   }
};
 
int main()  {
    Derived d;
    d.Base::fun(5);
    return 0;
}
