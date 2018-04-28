#include<iostream>
using namespace std;


/*
Since show is virtual in base class, it is called according to the type of object being referred or pointed, rather than the type of pointer or referenc.e  

If we remove the virtual keyword from the function show in Base, then we 

 In Base 
 In Base  



A pure virtual function is a virtual function that is required to be implemented by a derived class if the drived class is not abstract. 

Classes containing pure virtual methods are termed "abstract", and they cannot be instantiated directly.  A subclass of an abstract class can only be instatniated directly if all inherited pure virtual functions/methods have been implemented by that class or a parent class.  

pure virtual functions (or abstract function) in C++ is declared by assigning 0 in declaration.  


*/

 
class Base
{
public:
     void show() { cout<<" In Base \n"; }
};
 
class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};
 
int main(void)
{
    Base *bp = new Derived;
    bp->show();
 
    Base &br = *bp;
    br.show();
 
    return 0;
}

