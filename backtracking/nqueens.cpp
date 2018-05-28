
#define N 4
#include <stdio.h>

/*

	The idea is to place queens one by one in different columns, starting from the leftmost column.  When we place a queen in a columnn we check for clashes with already placed queens.  In the current column, if we find a row for which there is no clash, we mark this row and column as part of the solution.  If we do not find such a row due to clashes then we backtrack and return false

1) start in the leftmost column
2) if all queens are placed
	return true
3) Try all rows in the current column.
	a) uif queen can be placed safely in this row then mark this column as part of the solution and recursively check if placing queen here leads to a solution
	b) if placing queen in [row,column] leads to a solution return true
	c) if placing queen doesn't lead to a solution then unmark this column (backtrack) and go to step and try other rows

If all rows have been tried and nothign worked return false to trigger backtracking




*/

void printSolution(int board[N][N]){
	
	for(int i=0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("%d " , board[i][j]);
			
		}
		printf("\n")	;
	}

}

bool isSafe(int board[N][N], int row, int col){
	int i, j;
for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
 
    /* Check upper diagonal on left side */
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return false;
 
    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<N; i++, j--)
        if (board[i][j])
            return false;
 

}

/*

A  recursive utility function to solve N queen problems

*/
bool solveNQUtil(int board[N][N], int col){

	/*

	bae case: If all queens are placed then return true
	*/
	if(col >= N)
		return true;

	/*
	Consider this column and try placing this queen in all rows one by one
	*/	
	for(int i=0; i < N; i++){

		if(isSafe(board, i, col)){
			board[i][col] = 1;		// place this queen in board[i][col]
		
		
			if(solveNQUtil(board, col+1))
				return true;

		/* if placing queen in board[i][col] doesn't lead to a solution, then remove queen from board[i][col]. */

			board[i][col] = 0; // Backtrack
		}
	}

	return false;


}




bool solveNQ()
{
    int board[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
 
	if ( solveNQUtil(board, 0) == false )
    {
      printf("Solution does not exist");
      return false;
    }
 
    printSolution(board);
    return true;
}




int main(){

	bool t = solveNQ();
	printf("\n");
}
