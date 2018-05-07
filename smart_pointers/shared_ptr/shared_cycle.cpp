/*

This program will demonstrate cyclic references...

What if our data structure introduces a cycle.. what the hell do we do?


*/
#include <memory>
#include <iostream>


using std::shared_ptr;


class A{
  public:
	shared_ptr<A>  next;
	shared_ptr<A>  prev;

};


int main(){

	shared_ptr<A> head(new A());
	head->next = shared_ptr<A>(new A());
	head->next -> prev = head;
	return 0;

}
