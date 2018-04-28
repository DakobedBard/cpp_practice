// A program with virtual destructor
//  As a guideline whenever you have a virtual function in a class, you should immediately add a virtual destructor, even if it 
//  it does nothing.  This way you ensure against suprprises late


#include<iostream>
 
using namespace std;
 
class base {
  public:
    base()     
    { cout<<"Constructing base \n"; }
    virtual ~base()
    { cout<<"Destructing base \n"; }     
};
 
class derived: public base {
  public:
    derived()     
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};
 
int main(void)
{
  derived *d = new derived();  
  base *b = d;
  delete b;
  return 0;
}

