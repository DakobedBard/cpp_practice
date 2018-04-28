
/*

In C++ the stream insertion operator "<<" is used for output and extraction operator ">>" is used for input.

We must know the following thigns before we start overloading these operators.

1) cout is an object of ostream class and cin is an object istream class
2) These operators MUST be overaloaded as a global function.  IF we ant to allow them to access private data members of class, we 
must make them friends.  

Why must they overloaded as global

In operator overloading, if an operator is overloaded as member, then it must be a member of the object on left side of the operator. For example, consider the statement “ob1 + ob2” (let ob1 and ob2 be objects of two different classes). To make this statement compile, we must overload ‘+’ in class of ‘ob1’ or make ‘+’ a global function.
The operators ‘<<' and '>>' are called like 'cout << ob1' and 'cin >> ob1'. So if we want to make them a member method, then they must be made members of ostream and istream classes, which is not a good option most of the time. Therefore, these operators are overloaded as global functions with two parameters, cout and object of user defined class.


*/

#include <iostream>
using namespace std;


class Complex
{
private:
    	int real, imag;
public:
    	Complex(int r = 0, int i =0){
		  real = r;   imag = i; 
	}

    	friend ostream & operator << (ostream &out, const Complex &c);
    	friend istream & operator >> (istream &in,  Complex &c);
	
	Complex operator ++(int i);		// postfix operator has a dummy variable int ... could it be a char?
	
	Complex& operator ++();			// Prefix operator returns a reference.... WHY??
};

ostream & operator << (ostream &out, const Complex &c)
{
    	out << c.real;
    	out << "+i" << c.imag << endl;
    	return out;
}
 
istream & operator >> (istream &in,  Complex &c)
{
    	cout << "Enter Real Part ";
    	in >> c.real;
    	cout << "Enter Imagenory Part ";
    	in >> c.imag;
    	return in;
}

// Now let's define the postfix operator for this class... We are REQUIRED to pass a dummy parameter int i in order for the compiler
// to be able to distinguish between the prefix and postfix operators... Even though the return types are differant... they still 
// have identical signitures.. can we have overload name/identical parameter list but diffeant return type? LETS FIND OUT
// The answer to this is NO, we CANNOT overload in this manner.  It seems as though the postfix operator requires that this dummy
// parameter be an integer....

Complex Complex::operator ++(int i){
	//cout<< "WTF IS THIS PARAMATER i:" << i << endl;
	Complex c1(real, imag);
	real++;
	imag++;
	return c1;	
}

// Define our prefix operator...  The prefix operator returns a reference... Does this mean we can chain??  APPARANTLY YES YOU CAN
// CHAIN THE PREFIX operator due to it returning a refernce... that's fucking WEIRD!

Complex& Complex::operator ++(){
	real++;
	imag++;
	return *this;
}




int main(){
	Complex c1(2,3);
	//cin >> c1;
	cout << "The complex object is " << c1 << endl;
	c1++;
	cout << "The complex object is " << c1 << endl;
	c1++;
	cout << "The complex object is " << c1 << endl;
	
	++++c1;

	cout << "The complex object is " << c1 << endl;

	return 0;
}
