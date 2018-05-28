/*



*/


#include <limits.h>
#include <stdio.h>
int matrixChainOrder(int p[], int i, int j){

	if(i==j)
		return 0;

	int k;
	int min = INT_MAX;
	int count;



	for(k = i; k<j; k++){
		count = matrixChainOrder(p,i,k)+matrixChainOrder(p,k+1, j) + p[i-1]*p[k]*p[j];
		if (count < min)
            		min = count;	
	}
	return min;
}


int dynamic_matrix_chain_order(int p[], int i, int j){

	


}

int main(){

	 int p[] = {1,2,3,4};
	int n = sizeof(p)/sizeof(p[0]);
	printf("Minimum number of multiplications is %d ",
                          matrixChainOrder(p, 1, n-1));

	printf("\n");



/*


four matrices with dimensions 40x20, 20x30, 30x10, 10x30

LEt the input 3 matrices be A,B,C and D. The inimum number of multiplicatiosn are obtained by putting parenthesis 

(A(BC))D --> 20*30*10 + 40*20*10 + 40*10*30

*/	


}





