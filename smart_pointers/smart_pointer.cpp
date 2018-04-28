

#include <iostream>

class SmartPtr{
	int *ptr;
  public:

	explicit SmartPtr(int *p = NULL){
		ptr = p;
	}
	~SmartPtr(){
		delete(ptr);
	}

	int &operator *(){
		return *ptr;
	}
}


template<class Type>

class templated_smart_pointer{


};





int main(){
	SmartPtr ptr(new int());
	*ptr = 20;

	std::cout << *ptr;
	
	//We don't need to call delete ptr: when the object ptr goes out of scope destructor for it is automatically called and
	// destructor deltes pointer...

}
