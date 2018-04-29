/*

Do not use sizeof for array parameters...


*/


#include<iostream>
void fun(int arr[])  
{
  	int i;   
 
  	/* sizeof should not be used here to get number  of elements in array*/
 	int arr_size = sizeof(arr)/sizeof(arr[0]); /* incorrect use of siseof*/
  	for (i = 0; i < arr_size; i++) 
  	{  
    		arr[i] = i;  /*executed only once */
  	}
}
 
int main()
{
  	int i;  
  	int arr[4] = {0, 0 ,0, 0};
  	fun(arr);
   
  	/* use of sizeof is fine here*/
  	for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    		std::cout << arr[i];
 	std::cout << std::endl;
  	getchar();  
  	return 0;
}   
