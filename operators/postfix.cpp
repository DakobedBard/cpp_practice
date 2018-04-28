#include <iostream>


// Postfix operator the incrementation or decrementation occurs AFTER the value is use in expresseion evaluation.

class Complex{
  public:
	Complex(int r, int i){
		real = r;
		imag = i;
	}

	Complex operator ++(int);
	Complex& operator ++();

  private:
	int real;
	int imag;
};

//Which one of these is prefix and which one of these is the postfix... 


Complex &Complex::operator ++(){
	real++; 
	imag++;
	std::cout << "Am i PREFIX?" <<std::endl;
	return *this;
}

// This is the postfix ..... How does this differ from the definition of prefix?? 


Complex Complex::operator ++(int i){
	Complex c1(real, imag);
	real++;
	imag++;
	std::cout << "Am i POSTFIX?" <<std::endl;
	return c1;
}

int main(){


	Complex c1(10,15);
	c1++;


}
