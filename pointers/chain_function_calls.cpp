#include<iostream>
using namespace std;
 
class Test
{
private:
  	int x;
  	int y;
public:
  	Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
  	Test &setX(int a) {
 
		x = a; 		
		cout << "setX gets called" <<endl;	
		return *this; 
	}
  	Test &setY(int b) { 
		y = b;
		cout << "setY gets called" <<endl;	
		 return *this;
	}
  	void print() { cout << "x = " << x << " y = " << y << endl; }
};
 
int main()
{
  	Test obj1(5, 5);
 
  	// Chained function calls.  All calls modify the same object
  	// as the same object is returned by reference
  	obj1.setX(10).setY(20);
 
  	obj1.print();
	cout << endl;
  	return 0;
}
