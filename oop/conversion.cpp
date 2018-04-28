#include <iostream>
#include <cmath>
 
using namespace std;
 
class Complex
{ 
  private:
    	double real;
    	double imag;

  public:
	// Default Constructor
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i){}

	// Magnitude : usual function style
	double mag(){
		return getMag();
	}
	// Magnitude conversion operator
};
 
class foo(){
	
};

class bar(){

};




int main()
{
    	// a Complex object
    	//Complex com(3.0, 4.0);
 
    	// print magnitude
    	//cout << com.mag() << endl;
    	// same can be done like this
    //	cout << com << endl;
}

