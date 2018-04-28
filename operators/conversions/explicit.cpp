#include <iostream>
 
using namespace std;

//  Observe that the constructor to the Complex class can take only a single argument. 
//  This constructor becomes the conversion constructor...


 
class Complex
{
private:
    double real;
    double imag;
 
public:
    	// Default constructor
    	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
 
    	// A method to compare two Complex numbers
    	bool operator == (Complex rhs) {
       		return (real == rhs.real && imag == rhs.imag)? true : false;
    	}
};
 


// We can avoid such an implicit conversion by using the explicit keyword.  For example... 

class Explicit_Complex
{
private:
    double real;
    double imag;
 
public:
    // Default constructor
    explicit Explicit_Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
 
    // A method to compare two Complex numbers
    bool operator== (Explicit_Complex rhs) {
       return (real == rhs.real && imag == rhs.imag)? true : false;
    }
};
 




`





int main()
{
   	// a Complex object
    	Complex com1(3.0, 0.0);

	Complex c(2.0);
 
    	if (com1 == 3.0)
       		cout << "Same" <<endl;
   	else
       		cout << "Not Same" <<endl;


	Explicit_Complex ex_com;

     	return 0;
}

