#include <iostream>


class A{
	int x;
  public:

	A(int xx){
		x = xx;
	}

 	void delete_this_fun(){
		delete this;
		std::cout<< "x after delete ... " << x << std::endl;
	}
};

int main(){
	
	A *ptr = new A(2);
	ptr->delete_this_fun();

	ptr = NULL;		// make ptr NULL to make sure that things are not accessed using ptr..
	
	
	/*  Follwoing is undefined behavior

	A a

	a.delete_this_fun()

	*/
	
	return 0;
}
