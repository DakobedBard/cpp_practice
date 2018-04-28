#include <iostream>

// This program only calls B's constructor.  The for this is that static members are only declared in class declaration, not
// defined.  
// Now we receive an undefined reference to B::a  
// Static members can be accessed without any object.  


using namespace std;

class A{
	int x;
  public:
	A(){ 
		cout << "A's constructor called " << endl;
	}
	int get_x(){
		return x;
	}
	void set_x(int xx){
		x = xx;
	}
};

class B{
  	static A a;

  public:
	B() {
		cout<< "B's constructor called" << endl;
	}
	static A getA() {
		return a;
	}


};


A B::a;   // definition of a?


int main(int argc, char **argv){
	B b;
	A a = b.getA();
	a.set_x(20);
	std::cout << "A classes x variable is... " << a.get_x() <<std::endl;
	A newA = B::getA();
	return 0;

}
