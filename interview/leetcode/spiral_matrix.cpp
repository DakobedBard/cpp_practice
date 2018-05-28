/*

How would I print out the spiral?
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

*/





#define N 3
#include <iostream>
#include <vector>
#include <stdio.h>

void spiralPrint(int m, int n, int input[N][N]){
	

	int i, k =0, l=0;


	/*
		k starting row index
		m end rowing index
		l starting column index
		n ending column index
		i -iterator



	*/


	for(int i =0; i < N;  i++){
		for(int j=0; j < N; j++){

			std::cout << input[i][j] << " " ; 
		}
		std::cout << "\n";
	} 	

	while(k<m && l <n){

		// Print the first row from the remaining rows

		// We are currently at k row, l column

		for(i =l; i < n; ++i){



			printf("%d ", input[k][i]);
		}

		k++;

		// Print the last column from the remaining columns
		for(i =k; i < m; ++i){
			printf("%d ", input[i][n-1]);
		}

		n--;

		// Print the last row from the remaining rows



		if(k<m)
		{
			for(i =n-1; i >=l; --i){
				printf("%d ", input[m-1][i]);
			}
			m--;
		}
		if(l<n){
		// Print the first column from the remaining columns

			for(i =m-1; i >=k; --i){
				printf("%d ", input[i][l]);
			}
			l++;
		
		}


	}




}


int main(){

	int input[N][N] = {{1,2,3},{4,5,6}, {7,8,9}};
	spiralPrint(N, N, input);



	std::cout <<std::endl;

}
