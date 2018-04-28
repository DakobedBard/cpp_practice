#include<iostream>
using namespace std;
 
class Point {
  private:
    	int x;
    	int y; 

  public:
    	Point(int i = 0, int j = 0);    // Normal Constructor
    	Point(const Point &t); // Copy Constructor
};
 
Point::Point(int i, int j)  {
    	x = i;
    	y = j;
    	cout << "Normal Constructor called\n";
}
 
Point::Point(const Point &t) {
   	y = t.y;
   	cout << "Copy Constructor called\n";
}
 
int main()
{
   	Point *t1, *t2;
   	t1 = new Point(10, 15);			// Normal Constructor called
   	t2 = new Point(*t1);			// Copy constructor... 
   	Point t3 = *t1;				// copy constructor...
   	Point t4;				// Normal Constructor..
   	t4 = t3;				// Assignment operator.. 
   	return 0;
}

