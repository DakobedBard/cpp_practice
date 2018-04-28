/*

This program demonstrates the use of rvalue references in move constructors and move assignment operator

The most common pattern you will see when working with rvalue references is to create a move constructor and move assignment operator, which follows the same principles.  A move constructor, like a copy construtor takes an instance of an object as its argument and creates a new instance based on the original object.  However the move constructor can avoid memory reallocation because we know it has been provided a temporary object, so rather than copy the fields of the object will move them.. 

What does it mean to move a field of the object?  If the field is a primitive type such as int, we just copy it.  It becmoes more interesting if the field is a pionter.  In this case rather than allocate and initalize new memory, we can simply steal the pointer and null out the pointer in the temporary object!  We know the temporary object will no longer be needed, so we can take its pointer out from under it...  


Imagine we have an ArrayWrapper class such as..

In this case the copy constructor has to both allocate memory and copy every value from the array, one at a time.  This is a lot of work for a copy.  Let's add a move constructor and gain some massive efficiency.  


The main featurs of the move constructor is that: 

1) the parameter is a non-const rvalue reference..
2) other.p_vals is set to NULL

Why do we have to set other.p_vals to NULL?

The reason is the destructor-- when the temporary object goes out of scope, just like all other C++ object, its destructor will run.
When its destructor runs, it will free p_vals.  The same p_vals that we just copied!  If we don't set other.p_vals to NULL, the move would not be a move.. it would be a copy that introduces a crash later on once we start using freed memory.  This is the whole point of a move constructor: to avoid a copy by changing original temporary object.

THe overload rules work such that the move constructor is called only for a temporary object-- and only a temporary object that can be modified.  One thing this means is that if you have function that returns a const object, it will cause the copy constructo tor run instead of the move constructor -- so don't write code like

const ArrayWrapper getArrayWrapper(); 			/ Makes the move constructor useless, the temporary is cosnt!    


Apparantly we can't forward declare a class unless the member variable is a pointer... 


*/


#include <iostream>
#include <vector> 
using namespace std;


// An instance of the MetaData class is a member variable of our ArrayWrapper class

class MetaData
{
  public:
    	MetaData (int size, const std::string& name): _name( name ) , _size( size ){}
 
    	// copy constructor
    	MetaData (const MetaData& other) : _name( other._name ) , _size( other._size ){}
 
    	// move constructor
    	MetaData (MetaData&& other) : _name( other._name ) , _size( other._size ) {}
 
    	std::string getName () const { return _name; }
    	int getSize () const { return _size; }
  private:
    	std::string _name;
    	int _size;
};


class ArrayWrapper{
  public:
	ArrayWrapper(int n) :p_vals(new int[n]),  size_(n){}				// This is our constructor...

	// Copy constructor takes an lvalue reference ArrayWrapper&

	ArrayWrapper(const ArrayWrapper& other): p_vals(new int[other.size_]), size_(other.size_){
		for(int i =0; i < size_; ++i){
			p_vals[i] = other.p_vals[i];
		}
	}

	// Move constructor takes an rvalue reference ArrayWrapper&& 

	ArrayWrapper(ArrayWrapper&& other):p_vals(other.p_vals), size_(other.size_){
		other.p_vals = NULL;
		other.size_ = 0;
	}


	~ArrayWrapper(){
		delete [] p_vals;
	}

  private:
	int size_;
	int *p_vals;
	MetaData *metadata_;

};

// There is one more situation we haven't discussed how to handle in a move constructor... when we have a field that is an object.  
// For example, imagine that instead of having a size field we had a meta data field that looked like this


 
int main()
{

}





/*

C++11 introduces move semantics..

The creation of temporary objects can sometimes be optimzed away by the compiler (return value optimization).  This can result in expensive object copies when optimization is not possible.  


The below code is terrible C++03 code but fine C++11 coe.  When doubleValues is called, it constructs a vector, new_values and fills it up.  When we return the new_values vector, the entire contents of new_values must be copied.  There could be up to two here here for the vector<int> that we passed in, one in a temporary object to be returned and the second when vector assignment operator runs on the line v = doubleValues(v).  The first copy may be optimized away by the compiler automatically but the assignment to v will have to copy all the values agian which requires a new memory allocation and another iteration over the entire vector.  



v = doubleValues(v) .. The result of doubleValues(v) is jsut going to get thrown away once it is copied.  In theory it should be possible to skip the whole copy and just piler the pointer inside the temporary 


The worst part of this whole story is that the object returned from doubleValues is a temporary value that's no longer needed. When you have the line v = doubleValues( v ), the result of doubleValues( v ) is just going to get thrown away once it is copied! In theory, it should be possible to skip the whole copy and just pilfer the pointer inside the temporary vector and keep it in v. In effect, why can't we move the object? In C++03, the answer is that there was no way to tell if an object was a temporary or not, you had to run the same code in the assignment operator or copy constructor, no matter where the value came from, so no pilfering was possible. In C++11, the answer is--you can!

That's what rvalue references and move semantics are for! Move semantics allows you to avoid unnecessary copies when working with temporary objects that are about to evaporate, and whose resources can safely be taken from that temporary object and used by another.

Move semantics relies on a new feature of C++11, called rvalue references, which you'll want to understand to really appreciate what's going on. So first let's talk about what an rvalue is, and then what an rvalue reference is. Finally, we'll come back to move semantics and how it can be implemented with rvalue 
*/
