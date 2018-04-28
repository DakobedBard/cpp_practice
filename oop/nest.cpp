

#include <iostream>

class base{

  public: 
	class nest{
		
	  
	  public:

		int get_gay_number(){
			return gay_number;
		}				
	  private:

		int gay_number;
	};


};


int main(int argc, char **argv){

	base::nest nested_object;
	std::cout << "the nested gay number is.." << nested_object.get_gay_number() << std::endl;

}
