#include <iostream>
using namespace std;
 
// Each template has its own static variable.. so this will output
//
//	We initialize the static variable for ALL templates to 0.  
// 		2
//		1	


template <class T>
class Test
{
private:
    	T val;
public:
    	static int count;
    	Test()  {   count++;   }
};
 
template<class T>
int Test<T>::count = 0;
 
int main()
{
    	Test<int> a;
    	Test<int> b;
    	Test<double> c;
    	cout << Test<int>::count   << endl;
    	cout << Test<double>::count << endl;
    	return 0;
}
