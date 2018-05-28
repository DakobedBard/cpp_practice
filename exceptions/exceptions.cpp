/*

This program demonstrates error handling using a try-catch block




*/

#include <cmath>
#include <iostream>


double mySqrt(double x){

	if(x < 0.0)
		throw "can't take sqrt";

	return sqrt(x);

}






int main(){

	std::cout << "Enter a number ";
	double x;
	
	std::cin >> x;
	try // Look for exceptions that occur within try block and route to attached catch block(s)
    	{
        	double d = mySqrt(x);
        	std::cout << "The sqrt of " << x << " is " << d << '\n';
    	}
    	catch (const char* exception) // catch exceptions of type const char*
    	{
        	std::cerr << "Error: " << exception << std::endl;
    	}
	return 0;
}
