#include <iostream>
#define V 4
/*

The idea of the backtracking algorithm is to assign colors one by one to different vertices, starting from the vertex 0.  Before assigning a color, we check for safety by considering already assigned colors to the adjacent vertices.  If we find a color assignment which is safe we mark the color assignment as part of solution.  If not we do not find color due to clashes then we backtrack and return false



*/







/* A utility function to print solution */
void printSolution(int color[])
{
    printf("Solution Exists:"
            " Following are the assigned colors \n");
    for (int i = 0; i < V; i++)
      printf(" %d ", color[i]);
    printf("\n");
}


/*
A utility function to check if the current color assignment is safe for vertex v 

*/

bool isSafe(int v, bool graph[V][V], int color[], int c){

	for(int i=0 ; i <V; i++)
		if(graph[v][i] && c == color[i])
			return false;
	return true;
}


bool graphColoringUtil(bool graph[V][V], int m, int color[], int v)
{
	if(v == V)			// This is the base case at which point we are done... 
		return true;

	for(int c=1; c <= m; c++)		// Try different colors from thsi vertex.  
	{
		if(isSafe(v, graph, color, c))
		{
			color[v] = c;

/*
recur to assign colors to rest of the vertices
*/

			if(graphColoringUtil(graph, m, color, v+1) == true)
				return true;
/*

if assigning color c doesn't lead to a solution then remove it

*/
			color[v] = 0;
		}
	}
	return false;
}




bool graphColoring(bool graph[V][V], int m){
	
	int *color = new int[V];
	for(int i=0; i<V; i++)
		color[i] = 0;

	if(graphColoringUtil(graph, m,color,0) == false)
	{
		printf("Solution does not exist");
		return false;
	}
	// print the solution
	printSolution(color);
	return true;

}











int main()
{
    /* Create following graph and test whether it is 3 colorable
      (3)---(2)
       |   / |
       |  /  |
       | /   |
      (0)---(1)
    */
    bool graph[V][V] = {{0, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 0},
    };
    int m = 3; // Number of colors
    graphColoring (graph, m);
    return 0;
}
