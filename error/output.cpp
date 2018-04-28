/*
Constructing object number 1
Constructing object number 2
Constructing object number 3
Constructing object number 4
Destructing object number 3
Destructing object number 2
Destructing object number 1
 
The destructor for object number 4 is not called... this is because destructors are not called for partially contructed objects.





*/



#include <iostream>
using namespace std;
 
class Test {
  	static int count;
  	int id;
public:
  	Test() {
    		count++;
    		id = count;
    		cout << "Constructing object number " << id << endl;
    		if(id == 4)
       			throw 4;
  		}
  	~Test() { 
		cout << "Destructing object number " << id << endl; 
	}
};
 
int Test::count = 0;
 
int main() {
  	try {
    		Test array[5];
  	} 
	catch(int i) {
    		cout << "Caught " << i << endl;
  	}
}
