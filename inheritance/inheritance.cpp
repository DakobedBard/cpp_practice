/*

	Which print function gets called in this case?  We have an object of type R which calls print.  Since the class R does not implement the class print we search up the inheritance heirarchy until a matching function is found.  



*/

#include <iostream>

using namespace std;
class P {
  public:
   	void print(){ 
		cout <<" Inside P::" << std::endl; 
	}
};

class Q : public P {
  public:
   	void print(){ 
		cout <<" Inside Q" <<std::endl; 
	}
};

class R: public Q {

};

int main(void)
{
  	R r;

  	r.print();
  	return 0;
}
