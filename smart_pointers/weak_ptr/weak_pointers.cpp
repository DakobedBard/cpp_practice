
/*
down vote
Weak pointers just "observe" the managed object; they don't "keep it alive" or affect its lifetime. Unlike shared_ptr, when the last weak_ptr goes out of scope or disappears, the pointed-to object can still exist because the weak_ptr does not affect the lifetime of the object - it has no ownership rights. The weak_ptr can be used to determine whether the object exists, and to provide a shared_ptr that can be used to refer to it.

The definition of weak_ptr is designed to make it relatively foolproof, so as a result there is very little you can do directly with a weak_ptr. For example, you can't dereference it; neither operator* nor operator-> is defined for a weak_ptr. You can't access the pointer to the object with it - there is no get() function. There is a comparison function defined so that you can store weak_ptrs in an ordered container, but that's all.

A weak pointer is just like a shared_ptr but it doesn't count towards the reference count...

weak_ptr breaks the cycle


*/


#include <iostream>
#include <memory>

int main(int arc, char** argv){


	std::weak_ptr<int> w;
	{	
		std::shared_ptr<int> x;
		{
			std::shared_ptr<int> y(new int(10));
			w=y;
			x = w.lock();
			std::cout << *x << std::endl;
			
		}
		std::cout << *x << std::endl;		
	}	
	std::shared_ptr<int> a = w.lock();
	std::cout << a << std::endl;
	return 0;
}
