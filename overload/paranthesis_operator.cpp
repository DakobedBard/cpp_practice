/*


All of the overloaded operators you have seen so far let you define the type of the operator’s parameters, but not the number of parameters (which is fixed based on the type of the operator). For example, operator== always takes two parameters, whereas operator! always takes one. The parenthesis operator (operator()) is a particularly interesting operator in that it allows you to vary both the type AND number of parameters it takes.

There are two things to keep in mind: first, the parenthesis operator must be implemented as a member function. Second, in non-object-oriented C++, the () operator is used to call functions. In the case of classes, operator() is just a normal operator that calls a function (named operator()) like any other overloaded operator.

The matrix class is an example that lends itself to overloading this operator:

In the lesson on overloading the subscript operator, you learned that we could overload operator[] to provide direct access to a private one-dimensional array. However, in this case, we want access to a private two-dimensional array. Because operator[] is limited to a single parameter, it is not sufficient to let us index a two-dimensional array.

However, because the () operator can take as many parameters as we want it to have, we can declare a version of operator() that takes two integer index parameters, and use it to access our two-dimensional array. Here is an example of this:



*/

#include <cassert>
#include <iostream>


#define size 4


class Matrix{
  private:
	double data[size][size];
  public:

	Matrix(){
		for(int row=0; row<size; ++row)
			for(int col=0; col <4; ++col)
				data[row][col] = 0.0;
	}

	double& operator()(int row, int col);
	const double& operator()(int row, int col) const;		// for const objects...
	// overload the () operator, but this time it takes no arguments...
	void operator()();


};

double& Matrix::operator()(int row, int col){
	assert(col >= 0 && col < size);
    	assert(row >= 0 && row < size);
 
    	return data[row][col];

}

const double& Matrix::operator()(int row, int col) const
{
    	assert(col >= 0 && col < 4);
    	assert(row >= 0 && row < 4);
 
    	return data[row][col];
}

// This essentially erases the matrix...
void Matrix::operator()(){
	// Reset all elements of the matrix to 0.0
	for(int row=0; row < size; ++row)
		for(int col=0; col<size; ++col)
			data[row][col]=0.0;

}



int main(){

	Matrix matrix;
	matrix(1,2) = 4.5;
	matrix();	// erase cMatrix
	

	std::cout << matrix(1,2) << std::endl;
	return 0;

}



/*


Because the () operator is so flexible, it can be tempting to use it for many different purposes. However, this is strongly discouraged, since the () symbol does not really give any indication of what the operator is doing. In our example above, it would be better to have written the erase functionality as a function called clear() or erase(), as matrix.erase() is easier to understand than matrix() (which could do anything!).





*/
