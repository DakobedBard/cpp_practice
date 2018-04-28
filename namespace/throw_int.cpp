#include <iostream>

int main()
{
    	try
    	{
       		throw 10;
    	}
    	catch (...)
    	{
        	std::cout << "default exception\n";
    	}
    	catch (int param)
    	{
        	std::cout << "int exception\n";
    	}
 
    	return 0;
}
