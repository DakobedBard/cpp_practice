#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>
#include "Exception.h"


template <class DataType>
class Stack{

  public:
	Stack():top(0){
		std::cout << "Stack Constructor" << std::endl;
	}

	 ~Stack(){

		std::cout << " IN Stack destructor" << std::endl;
		while(!isEmpty()){
			pop();
		}  
		isEmpty();
	}

	void push(const DataType& object);
	DataType pop();
	const DataType& topElement();
	bool isEmpty();

  private:

	struct StackNode{

		DataType data;
		StackNode *next;

		// StackNode constructor initializes both fields

		StackNode(const DataType& newData, StackNode *nextNode):data(newData), next(nextNode){}		

	};

	// Stack should not allow copy of entire stack or assignment of one stack to another
	
	Stack(const Stack& lhs){}
	Stack& operator=(const Stack& rhs){}
	StackNode *top;


};

template <class DataType>
void Stack<DataType>::push(const DataType& obj){

	std::cout <<"Push " << std::endl;
	
	top = new StackNode(obj, top);
}

template <class DataType>
DataType Stack<DataType>::pop(){
	if(!isEmpty()){
		StackNode *topNode = top;
		top = top->next;
		DataType data = topNode->data;	
		delete topNode;
		return data;
	}
	throw StackException("Empty Stack");

}


template <class DataType>
const DataType& Stack<DataType>::topElement(){
	std::cout << "In topElement Operation " << std::endl;
	if(!isEmpty()){
		return top->data;
	}
}




template <class DataType>
bool Stack<DataType>::isEmpty(){
	if(top ==0){
		return true;	
	}
	else{
		return false;
	}

}




#endif
