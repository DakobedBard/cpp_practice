
/*

Copy elison is a compiler optimization technique that avoids unneccessary copying of objects.  Almost every compilr uses it.  


The output of the program is 

Constructor called

We are doing a conversion 

B ob = "copy me"  is equivalent to B ob = B("copy me")




*/

#include <iostream>
using namespace std;

class B{
  public:
	B(const char *str = '\0'){    	// default constructor
		cout << "constructor called " << endl;
	}				
	B(const B &b){			// Copy constructor
		cout << "Copy constructor called" << endl;
	}
};



int main(){

	B ob = "copy me";
	return 0;
	
}

