/*

This program demonstrates passing a comparator 





*/
#include <iostream>
#include <algorithm>
struct Interval
{
	int start;
	int end;
};

bool compareInterval(Interval i1, Interval i2){
	return(i1.start < i2.start);
}


int main(){

    	Interval arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
    	int n = sizeof(arr)/sizeof(arr[0]);

	// Sort the intervals in increasing order of start time

	std::sort(arr, arr+n, compareInterval);

	std::cout << "Intervals sorted by start time: \n"  <<std::endl;

	for(int i =0; i<n; i++){
		std::cout << "[" << arr[i].start << "," << arr[i].end << "]";

	}
	return 0;
}
