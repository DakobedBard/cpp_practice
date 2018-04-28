


#include <iostream>
#include <cstdlib>
void add(int a, int b)
{
    std::cout <<"Addition is " << a+b<< std::endl;
}
void subtract(int a, int b)
{
       std::cout <<"Subtraction is" << a-b << std::endl;
}
void multiply(int a, int b)
{
    std::cout<< "Multiplication is " << a*b << std::endl;
}
 
int main()
{
    // fun_ptr_arr is an array of function pointers
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10;
 
    std::cout << "Enter Choice: 0 for add, 1 for subtract and 2 "
            "for multiply" << std::endl;
    scanf("%d", &ch);
 
    if (ch > 2) return 0;
 
    (*fun_ptr_arr[ch])(a, b);
 
    return 0;
}
