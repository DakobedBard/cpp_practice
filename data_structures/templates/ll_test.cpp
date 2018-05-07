#include "LinkedList.h"
#include <iostream> 

class Test{
	int x;
	int y;
	
  public:
	Test():x(0), y(0){}
	Test(int x_, int y_):x(x_), y(y_){}
	int getX(){
		return x;
	}
	int getY(){
		return y;
	}
};


int main(){

	Test t1(2,3);
	Test t2(6,7);	
	LinkedList<Test> ll;

	ll.insert(t1);
	ll.insert(t2);

	Test temp;
	ll.first(temp);

	std::cout << temp.getX() << std::endl;




	LinkedList<int> int_list;

	int_list.insert(2);
	int_list.insert(1);
	int_list.insert(5);
	int_list.insert(10);
	
	int temp_int;
	
	int_list.first(temp_int);
	std::cout << temp_int << " ";

	while(int_list.getNext(temp_int) ){
		std::cout << temp_int << " " ;
		 
	}

	std::cout << "\n";
	
	int_list.Iterative_ReverseList();
	int_list.first(temp_int);
	std::cout << temp_int << " ";
	
	while(int_list.getNext(temp_int) ){
		std::cout << temp_int << " " ;
		 
	}

	std::cout << "\n";

	Node<int>* int_start_node = int_list.return_head();

	std::cout << "starts node is " << int_start_node->data << std::endl; 

	int_list.Recursive_ReverseList(&int_start_node);
	
	int_list.first(temp_int);
	std::cout << temp_int << " while int_list.getNext is " << int_list.getNext(temp_int);
	


	while(int_list.getNext(temp_int) ){
		std::cout << temp_int << " " ;
		 
	}

	std::cout << "\n";


}


