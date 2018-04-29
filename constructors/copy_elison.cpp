
/*

Copy elison is a compiler optimization technique that avoids unneccessary copying of objects.  Almost every compilr uses it.  


With each copy elision.. one construction and one matching destruction of the copy are omitted, thus saving CPU time, and one object is not created, thus saving space on the stack frame.  


*/

#include <iostream>


class copy_elison{
  public:

	const char *a;

	copy_elison(){
		std::cout << "Constructor " << std::endl;
	}

	copy_elison(const char *ptr){
		std::cout << "Constructor " << std::endl;
	}

	copy_elison(copy_elison& other){
		std::cout << "Copy constructor.." << std::endl;
	}

	copy_elison(copy_elison&& other){
		std::cout << "move constructor.. " << std::endl;
	}
	
	~copy_elison(){
		std::cout << "Destructor " << std::endl;
	}
};


copy_elison func(){
	copy_elison obj;
	return obj;
}


int main(){
	copy_elison first_obj;
}



