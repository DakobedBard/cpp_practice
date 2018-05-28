
/*


Can I implement a stack using a queue?

Whenever we push an element onto the stack we will reverse the queue so that 

stack last in first out
queue first in first out

so the top of the queue is the last to come out, so adding to our queue we want to reverse it for each new element



*/

#include <queue>
#include <iostream>

class Stack{
	std::queue<int> q;
  public:
	void push(int x){
		q.push(x);
		for(int i=1; i<q.size(); i++){
			q.push(q.front());
			q.pop();
		}
	}
  
	Stack(){
		
	}

	void pop(){
		q.pop();
	}

	int top(){
		return q.front();
	}
	bool empty(){
		return q.empty();
	}

  public:
	void set_queue(std::queue<int> queue){
		q = queue;
	}

};

int main(){


	std::queue<int> q;
	int a = q.front();
	Stack stack;
	stack.push(3);
	stack.push(2);
	stack.push(15);
	
	
	//stack.set_queue(q);
	std::cout << "top of the stack "<<std::endl << stack.top() << std::endl;
	stack.pop();
	std::cout << "top of the stack "<<std::endl << stack.top() << std::endl;


}
