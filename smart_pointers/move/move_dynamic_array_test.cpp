#include <iostream>
#include <chrono> // for std::chrono functions
#include "move_Dynamic_Array.h"
class Timer
{
private:
	// Type aliases to make accessing nested type easier
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;
 
	std::chrono::time_point<clock_t> m_beg;
 
public:
	Timer() : m_beg(clock_t::now())
	{
	}
 
	void reset()
	{
		m_beg = clock_t::now();
	}
 
	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}
};
 
// Return a copy of arr with all of the values doubled
DynamicArray<int> cloneArrayAndDouble(const DynamicArray<int> &arr)
{
	DynamicArray<int> dbl(arr.getLength());
	for (int i = 0; i < arr.getLength(); ++i)
		dbl[i] = arr[i] * 2;
 
	return dbl;
}
 
int main()
{
	Timer t;
 
	DynamicArray<int> arr(1000000);
 
	for (int i = 0; i < arr.getLength(); i++)
		arr[i] = i;
 
	arr = cloneArrayAndDouble(arr);
 
	std::cout << t.elapsed() << std::endl;
}
