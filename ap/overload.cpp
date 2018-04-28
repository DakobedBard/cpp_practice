/*

How can we restrict dynamic allocation of objects of a class using new?

By making an empty private new and new[] operators... Observe below in our class Test


Which of the following operators cannot be overloaded...

.  Member accerss or dot operator.. 
?  Ternary or conditional operator
:: scope resolution operator
.*  Pointer to member operator


None of these operators can be overloaded
 





Class B has a conversion operator overloaded so an objecty of B can be converted to that of A.  Also, class A hsa a constructor which can be called with a single integer argument, so an int can be converted to A.  


*/


#include<iostream>
using namespace std;

class Test{

  private:
	void* operator new(size_t size){}
	void* operator new[](size_t size){}



};



class A
{
    	int i;
public:
    	A(int ii = 0) : i(ii) {}
    	void show() {  cout << i << endl;  }
};
 
class B
{
    	int x;
public:
    	B(int xx) : x(xx) {}
    	operator A() const {  return A(x); }
};
 
void g(A a)
{
    	a.show();
}
 
int main()
{
  	B b(10);
    	g(b);
    	g(20);				// Class A has a constructor which can be called with a single integer argument so an 
					// int can be converted to A.  

	//Test *obj = new Test;		This is forbidden because our constructor is private.  
    	return 0;
}
