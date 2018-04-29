/*

Even though we assigned a derived class object to the base class pointer, we can not call functions of the derived class that do appear in the base class.  


What if we jsut declare the function in the base class..  If we declare the function without a virtual then we get an undefined 



*/


#include <iostream>



class base{
  public:

	virtual int getX() const;

	virtual void show(){
		std::cout <<"In base " << std::endl;
	}

};


class derived : public base{
  
	
  public:
	void show(){
		std::cout << "In derived " << std::endl;
	}
	derived(){
		x = 10;
	}
	int getX() const{
		return x;
	}

  private:
	int x;
};


int main(){

	derived d;
	base *bp = &d;
	bp->show();
	std::cout << bp->getX() << std::endl;			// The base class has no getX() function..
	return 0;

}
