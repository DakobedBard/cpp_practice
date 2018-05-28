/*

Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).


RETURN THE TOTAL VALUE IN THE KNAPSACK AND THE ITEMS INCLUDED


*/



/*

A naive approach is to consider all subsets of items and calculate the total weight and value of all subsets.  Consider the only subets subsets whose total weight is smaller than W

1) Optimal substructure

To consider all subsets of items, there can be two cases for every item: (1) the item is included in the optimal subset, (2) not included in the optimal set

Therefore the maximum value than can be obtained from n items is the max of the following two values

1) Maximum value obtained by n-1 items and W weight (excluding nth item)

2) Value of nth item plus maximum value obtained by n-1 items and W minus weight of the nth item


In the following recursion tree, K() refers to knapSack().  The two parameters indicated in the following recursion tree are n and W.  
The recursion tree is for following sample inputs.
wt[] = {1, 1, 1}, W = 2, val[] = {10, 20, 30}

                       K(3, 2)         ---------> K(n, W)
                   /            \ 
                 /                \               
            K(2,2)                  K(2,1)
          /       \                  /    \ 
        /           \              /        \
       K(1,2)      K(1,1)        K(1,1)     K(1,0)
       /  \         /   \          /   \
     /      \     /       \      /       \
K(0,2)  K(0,1)  K(0,1)  K(0,0)  K(0,1)   K(0,0)
Recursion tree for Knapsack capacity 2 units and 3 items of 1 unit weight.


These subproblems are being evaluated again, thus the problem has overlapping subproblems property.  So the 0-1 knapsack problem has both properties of a dynamic programming problem.  Let us construct a temprary array K[][]


*/

#include <stdio.h>
#include <vector>
#include <iostream>

int maximum(int a, int b){

	return (a>b)?a:b;
}

int knapSack(int W, int wt[], int val[], int n){
	// Base Case

	if(n ==0 || W ==0)
		return 0;
	if(wt[n-1] > W)
		return knapSack(W,wt,val, n-1);

	// Return the maximum of two cases
	// (1) nth item included
	// (2) not included

	else return maximum(val[n-1] + knapSack(W-wt[n-1],wt, val, n-1), knapSack(W,wt,val, n-1));

}


 
/*

*/


int dynamic_knapSack(int W, int wt[], int val[], int n){
	int i,w;
	int K[n+1][W+1];

	for(i=0; i <= n; i++){

		for(w =0; w <= W; w++){

			if(i==0 || w==0)
				K[i][w] =0;
			else if(wt[i-1] <= w)
				K[i][w] = std::max(val[i-1] + K[i-1][w-wt[i-1]],K[i-1][w]);
			else
				K[i][w] = K[i-1][w];		
		}
	}
	return K[n][W];

}



int main(){
	int val[] = {60, 100, 120};
    	int wt[] = {10, 20, 30};
    	int  W = 50;
    	int n = sizeof(val)/sizeof(val[0]);
    	printf("%d", dynamic_knapSack(W, wt, val, n));
	printf("\n");

}
