/*

Given a binary string, count number of substrings that start and end with 1.  


if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.


A simple solution is to run two loops.  Outer loop picks every 1 as starting point and inner loop searches for ending 1 and increments count whenever it finds 1.  


*/



#include<iostream>


int countSubStr(char str[]){

	int result =0;		// Initialize result

	//Pick a starting point...

	for(int i =0; str[i] != '\0'; i++){
		if(str[i] =='1')
		{
			//Search for all possible ending poitns.. 

			for(int j = i+1; str[j] != '\0'; j++)
				if(str[j] == '1')
					result++;
		}
	}
	return result;	
}


/*

This problem can be solved in o(n) using a single traversal
a) Count the number of 1's
b) return m(m-1)/2	This is the numer of unique pairs...


*/


int count(char str[]){
	int m =0;		//Count of 1's in input string

	for(int i=0; str[i] != '\0'; i++){
		if(str[i] == '1')
		m++;
	}
	
	return m*(m-1)/2;
}




int main(){

	char str[] = "00100101";
  	std::cout << countSubStr(str) << std::endl;
	std::cout << count(str) << std::endl;
}
