
/*


class A 
{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};

class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};

class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};


*/


#include <iostream>


class Base{
  public:
	int public_int;
  private:
	int private_int;

  protected:
	int protected_int;

};

class Public_Derived : public Base{

	// public_int is public
	// protected_int is protected..
	// private_int is not accessible 

};

class Private_Derived : private Base{

	// public_int is private
	// protected_int is private
	// private_int is not accessible 



};


class Protected_Derived: protected Base{
	// public_int is protected
	// protected_int is protected
	// private_int is not accessible 


};






class A{
  public:
	void print(){
		std::cout << "A::print()" << std::endl;
	}

};


class B : private A{
  public:

	void print(){
		std::cout << "B::print()" << std::endl;
		A::print();				
	}

};


class C:public B{
  public:
	void print() {
	//	A::print();	// The methods of A are inacessible from class C... because of the private inheritance of class A... 	
	
		B::print();
	}


};

int main(){
	C b;
	b.print();
}
