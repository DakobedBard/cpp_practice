

#include <iostream>

using namespace std;

class base{
  public:
	virtual void print(){
		cout << " print in base class " << endl;
	}

	void show(){
		cout << "show base class " << endl;
	}
};

class derived:public base{

	void print(){
		cout << "Print derived class " <<endl;
	}
	void show(){
		cout << "show derived class " << endl;
	}
};


int main(int argc, char **argv){


	base *base_ptr;
	derived d;
	base_ptr = &d; 
	
	base_ptr->print();		// print is a virtual function... so this will call the derived classes print

	base_ptr->show();


}
