#include <iostream>
/*
Below we overloaded an operator using a friend function.  

*/

class Cents
{
private:
    	int m_cents;
  
  public:
    	Cents(int cents) { m_cents = cents; }
 
   	// Overload Cents + int
    	friend Cents operator+(const Cents &cents, int value);
 
    	int getCents() { return m_cents; }
	

	// Overload - Cents as a member function

	Cents operator-()const;


};
 
// note: this function is not a member function!
Cents operator+(const Cents &cents,  int value)
{
    	return Cents(cents.m_cents + value);
}
 

Cents Cents::operator-() const{

	return Cents(-m_cents);
}



/*

Now instead if we want to overload the operaqtor using a member function...


*/



class Member_Cents{
  private:
	int m_cents;
  public:
	Member_Cents(int cents){
		m_cents = cents;
	}
	int getCents() { return m_cents; }
	Member_Cents operator + ( int value);


};


Member_Cents Member_Cents::operator + ( int value){
	return Member_Cents(m_cents + value);
}




int main()
{
	Cents cents1(6);
	Cents cents2 = cents1 + 2;
	std::cout << "I have " << cents2.getCents() << " cents.\n";

	std::cout << "A nickle of debt is worth " << (-cents1).getCents() << "cents\n";
 
	Member_Cents member_cents1(6);
	Member_Cents member_cents2 = member_cents1 + 2;
	std::cout << "I have " << member_cents2.getCents() << " cents.\n";
 




	return 0;
}
