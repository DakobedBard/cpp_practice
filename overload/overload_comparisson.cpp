/*

Because the comparison operators are all binary operators that do not modify their left operands, we will make our overloaded comparison operators friend functions.

The code here should be straightforward. Because the result of operator!= is the opposite of operator==, we define operator!= in terms of operator==, which helps keep things simpler, more error free, and reduces the amount of code we have to write.

The comparisson operators access the private members therefore we can implement them as friend functions... 



*/


#include <iostream>
#include <string>
 
class Car
{
private:
    	std::string m_make;
    	std::string m_model;
 
public:
    	Car(std::string make, std::string model): m_make(make), m_model(model)
    	{
    	}
 
    	friend bool operator== (const Car &c1, const Car &c2);
    	friend bool operator!= (const Car &c1, const Car &c2);

	friend bool operator< (const Cents &c1, const Cents &c2);
    	friend bool operator>= (const Cents &c1, const Cents &c2);

};


bool operator== (const Car &c1, const Car &c2){
	return (c1.m_make == c2.m_make && c1.m_model == c2.m_model);
		
	


}

bool operator!= (const Car &c1, const Car &c2){
	return !(c1 == c2);
}

int main(){

	Car corolla ("Toyota", "Corolla");
    	Car camry ("Toyota", "Camry");
 
    	if (corolla == camry)
        	std::cout << "a Corolla and Camry are the same.\n";
 
    	if (corolla != camry )
        	std::cout << "a Corolla and Camry are not the same.\n";
 
}
