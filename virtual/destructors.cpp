/*

Deleeting a derived class object using a pointer to a base class that has a non-virtual destructor results in undefined behavior.  To correct this situation the base class should be defined with a virtual destructor.  For Example the program below results in undefined behavior.  


*/

#include <iostream>
using namespace std;
 
class Base
{
  public:

	Base(){
		cout << "Constructing base " << endl;
	}
//	~Base(){						If this is not virutal... then the Derived destructor will not get called.
//		cout << "Destructing base" << endl;
//	}

	virtual ~Base(){
		cout << "Destructing base" << endl;
	}



    	virtual void fun ( int x = 0 )
    	{
        	cout << "Base::fun(), x = " << x << endl;
    	}
	

};
 
class Derived : public Base
{
  public:
	Derived(){
		cout << "Constructing Derived " << endl;
	}
	~Derived(){
		cout << "Destructing Derived" << endl;
	}

    	virtual void fun ( int x )
    	{
        	cout << "Derived::fun(), x = " << x << endl;
    	}
};
 
 
int main()
{
    	//Derived d1;
    	//Base *bp = &d1;
    //	bp->fun();

	Derived *derived_obj_ptr = new Derived();
	Base *base_obj_ptr = derived_obj_ptr;

	delete base_obj_ptr;
	getchar(); 		// We have this line so the program doesn='t terminate callling the destructors AGAIN.
    	return 0;
}

