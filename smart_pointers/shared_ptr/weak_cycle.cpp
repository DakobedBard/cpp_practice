/*

In the program shared_cycle we demonstrated that having a cycle of shared_ptrs will result in a reference count that never hits 0, and thus we never deallocate this memory.  We can show this by using valgrind to show that a memory leak has occured.  

We can use weak_ptr to deal with this problem.


In this program we introduce a cycle, but since the pointer pointing to the previous Node is declared as as weak_ptr.. we prevent a leak from occuring.  

*/

#include <memory>

using std::shared_ptr;
using std::weak_ptr;

class Node{
  public:
	shared_ptr<Node> next;
	weak_ptr<Node> prev;
};




int main(int argc, char **argv){

	shared_ptr<Node> head(new Node());
	head-> next = shared_ptr<Node>(new Node());
	head->next->prev = head;				// We have introduced a cycle.... 

}
