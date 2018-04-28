/*

How do conversion operators work ??



*/


#include <iostream>


template <class Type>

class smartref{
  public:
	smartref() : data(new Type){}
	operator Type&() {
		return *data;
	}
  private:
	Type* data;
};


class person{


};



class A
{
    	int i;
public:
    	A(int ii = 0) : i(ii) {}
    	void show() {  std::cout << i << std::endl;  }
};
 
class B
{
    	int x;
public:
    	B(int xx) : x(xx) {}
    	operator A() const {  return A(x); }
};
 
void g(A a)
{
    	a.show();
}


class conversion{


};



int main(){
	B b(10);
	g(b);
	g(20)

}


