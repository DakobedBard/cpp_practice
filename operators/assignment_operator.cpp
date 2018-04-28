#include <iostream>

/* 

When do write our own assignment operator??

If a class doesn't contain pointers, then there is no need to write assignment operator and copy constructor..


In the below program we modify t1 using setValue(), but the changes are also reflected in object t2.  This is unexpected.. 
Since there is no user defined assignment operator in the above program, compiler creates default assignment operator, which copies 'ptr' or right hand side to left hand side.  So both ptrs start pointing to the same location.  

There are two ways to handle this problem

1) Do no allow assignment of one object to other object.. make the assignment operator private..

2) Write your own assignmentoperator that does deep copy

*/



class Test{
	int *ptr;

  public:
	Test(int i =0){ 
		ptr = new int(i);
	}
	void setValue(int i){
		*ptr = i;
	}
	void print(){
		std::cout << *ptr << std::endl;
	}
};


class Test_Assign{
	int *ptr;

  public:
	Test_Assign(int i =0){ 
		ptr = new int(i);
	}

	Test_Assign(const Test_Assign& t){					// This is our copy constructor..

		*ptr = *(t.ptr);
	}

				
	void setValue(int i){
		*ptr = i;
	}
	void print(){
		std::cout << *ptr << std::endl;
	}

	Test_Assign &operator = (const Test_Assign &t);

	

};


Test_Assign& Test_Assign::operator = (const Test_Assign &t){
	
	// Check for self assignment...
	if(this != &t)
		*ptr = *(t.ptr);
	return *this;
}


int main(){
	Test t1(5);
	Test t2;
	t2 = t1;		// As t2 has already been declared, no need to use copy constructor... assignment operator

//	t1.print();	
//	t2.print();

	t1.setValue(10);
//	t1.print();
//	t2.print();


	Test_Assign test1(5);
	Test_Assign test2;

	test2 = test1;

	//test1.print();
	//test2.print();

	test1.setValue(10);
//	test1.print();
//	test2.print();


	Test_Assign test3 = test2;		// The default copy constructor will have the int* point to the same place.. BAD!
						// We need to overload the copy constructor as well as the assignmnet operator
	test2.setValue(45);
	test2.print();
	test3.print();

	return(0);



}
