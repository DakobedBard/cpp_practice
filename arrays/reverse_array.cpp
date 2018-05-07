/*

Sometimes we need two pointers at the same time to do an iteration..


*/



#include <iostream>
#include <algorithm>

void reverse(int *v, int N){

	int i =0;
	int j= N-1;

	while(i < j){
		
		std::swap(v[i], v[j]);
		i++;
		j--;
	}

}

int main(){

	int arr[5] = {1,2,3,4,5};
	
	reverse(arr, 5);

	for(int i=0; i <5; i++){
		std::cout << arr[i];
	}

	std::cout << std::endl;
}



