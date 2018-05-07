#include<iostream>
using namespace std;



 
void fun(const int &i)
{
    	cout << "fun(const int &) called " << std::endl;
}
void fun(int &i)
{
    	cout << "fun(int &) called " << std::endl ;
}
int main()
{
    	const int i = 10;
    	fun(i);
    	return 0;
}
