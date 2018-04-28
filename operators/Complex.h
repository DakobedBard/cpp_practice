#ifndef _COMPLEX_H_
#define _COMPLEX_H_
/*

Address of operator vs reference...

ITS NOT THAT HARD DUMBASS

&variable;		// Extracts address of variable..

Type& ref = variable; 	// Creates a reference call ref to variable... 

*/
#include <iostream>

class Complex{
  public:

	Complex (const Complex& copy){		// Copy Constructor Requires us to pass a reference... 
		real_ = copy.real_;	
		imag_ = copy.imag_;
	}
	
// Shoudl the + operator return a reference or not... We must NOT return a reference.. 
// Instead we want to return a copy of a local variable...
/*
	Complex& operator + (const Complex &a) const {
		Complex tmp(0,0);
		a	
	}
*/


// Should the assignment operator return a refernce??    I believe that it should..
// In fact WE MUST use a refernce in this situation..
	
	Complex& operator = (const Complex &a){
		if(this != &a){
			this->real_ = a.real_;
			this->imag_ = a.imag_;
		}
		return *this;
	}

	Complex& operator += (const Complex &a){
		this->real_ += a.real_;
		this->imag_ += a.imag_;
	}

// What about the double arrow << operator... should we return a reference ? 
// This is the same as the assigmnent operator.  We MUST return a reference so that chaining works.. 
	
	std::ostream &operator << (std::ostream &out, const complex::Complex &a){
		out << "(" << a.real() << " + " << aa.imag() << "i";
		return out;
	}
	


  private:

	double real_;
	double imag_;

};
#endif 
