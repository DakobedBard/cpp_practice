

#include <iostream>
#include <assert.h>
#include <algorithm>		// For STL transform
#include <vector>
/*


Functors rae objects that can be treated as though they are a function or function pointer.  Functors are most commonly used along with STLs in a scenario like below..


A functor is pretty much just a class which defines the operator(). That lets you create objects which "look like" a function:

The advantage of functors over functions is that they can contain state.  


*/



// This struct is essentially a functor.  Allows you to create objects which "look like" functions...

struct add_x {
	add_x(int x) : x(x) {}
	int operator()(int y) const {
		return x +y;
	}

  private:
	int x;

};



int increment(int x){

	



}



int main(){

	add_x add42(42);			// Crete an instance of the functor class...
	int i = add42(8);			// and "call" it
	std::cout << "the value of i: " << i << std::endl;	
	assert(i==50);
	
	std::vector<int> in; 			// assume this contains a bunch of values..
	std::vector<int> out(in.size());	

	// Now pass a functor to std::transform, which calls the functor on every element in the input sequence, and stores
	// the result to the output sequence.	


	std::transform(in.begin(), in.end(), out.begin(), add_x(1));
	assert(out[i] == in[i] + 1); // for all i


/*

	As the last lines show, you often pass functors as arguments to other functions such as std::transform or the other standard library algorithms. You could do the same with a regular function pointer except, as I said above, functors can be "customized" because they contain state, making them more flexible (If I wanted to use a function pointer, I'd have to write a function which added exactly 1 to its argument. The functor is general, and adds whatever you initialized it with), and they are also potentially more efficient. In the above example, the compiler knows exactly which function std::transform should call. It should call add_x::operator(). That means it can inline that function call. And that makes it just as efficient as if I had manually called the function on each value of the vector.

If I had passed a function pointer instead, the compiler couldn't immediately see which function it points to, so unless it performs some fairly complex global optimizations, it'd have to dereference the pointer at runtime, and then make the call.

*/

	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);		// n is size of a single element...

	// Apply increment to all elements of arr[] and store the modified elements.. 

	std::transform(arr, arr+ n, arr, increment);		// We are using transform() in STL

}
