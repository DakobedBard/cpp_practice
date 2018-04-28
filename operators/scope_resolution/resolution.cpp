/*

What is the output of this program??

We create an object of class Test... calls constructor and the member variable is set to a =1.   We pass the function func the value 3.  This functions parameter is also called 'a'.  This overrides the local variable... We would want to use the this pointer... 

*/


#include <iostream>
using namespace std;

class Test{
	int a;
  public:

	Test(){
		a = 1;
	}

	void func(int a){
		cout << a;
	}
};

int main(){
	Test obj;
	int k = 3;
	obj.func(k);
	cout <<endl;
	return 0;

}
