/*


C++ 11 introduced lambda expression to allow us write an inline function which can be used for short snippets of code that are not going to be reuse and not worth naming. In its simplest form lambda expression can be defined as follows:

[ capture clause ] (parameters) -> return-type  
{   
   definition of method   
} 


A lambda expression can have more power than an ordinary function by having access to variables from the enclosing scope. We can capture external variables from enclosing scope by three ways :
      Capture by reference
      Capture by value
      Capture by both (mixed capture)

Syntax used for capturing variables :
      [&] : capture all external variable by reference
      [=] : capture all external variable by value
      [a, &b] : capture a by value and b by reference




*/


#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;
void printVector(vector<int> v)
{
   	// lambda expression to print vector
    	for_each(v.begin(), v.end(), [](int i)
    	{
        	std::cout << i << " ";
    	});
    	cout << endl;
}
 
int main()
{
    	vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};
 
    	printVector(v);
 
    	// below snippet find first number greater than 4
    	// find_if searches for an element for which
    	// function(third argument) returns true
    	vector<int>:: iterator p = find_if(v.begin(), v.end(), [](int i)
    	{
        	return i > 4;
   	});
    	cout << "First number greater than 4 is : " << *p << endl;
 
 
    	// function to sort vector, lambda expression is for sorting in
    	// non-decreasing order Compiler can make out return type as
    	// bool, but shown here just for explanation
    	sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool
    	{
        	return a > b;
    	});
 
    	printVector(v);
 
    	// function to count numbers greater than or equal to 5
    	int count_5 = count_if(v.begin(), v.end(), [](int a)
    	{
        	return (a >= 5);
    	});
    	cout << "The number of elements greater than or equal to 5 is : " << count_5 << endl;
 
    	// function for removing duplicate element (after sorting all
    	// duplicate comes together)
    	p = unique(v.begin(), v.end(), [](int a, int b)
    	{
        	return a == b;
    	});
 
    	// resizing vector to make size equal to total different number
    	v.resize(distance(v.begin(), p));
    	printVector(v);
 
    	// accumulate function accumulate the container on the basis of
    	// function provided as third argument
    	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    	int f = accumulate(arr, arr + 10, 1, [](int i, int j)
    	{
        	return i * j;
    	});
 
    	cout << "Factorial of 10 is : " << f << endl;
 
    	//   We can also access function by storing this into variable
    	auto square = [](int i)
    	{
        	return i * i;
    	};
 
    	cout << "Square of 5 is : " << square(5) << endl;
}

