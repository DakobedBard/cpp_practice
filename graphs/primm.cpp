/*

Implementation of Primm's algorithm for finding the minimum spanning Tree.  

Greedy Algorithm

Start with empty spanning tree.  The idea is to maintain two sets of vertices.  The first set contains the vertices already included in the MST, the other set contains the vertices not yet included.  At every step, it considers all the edges that connect the two sets, and picks the minimum weight edge from these edges.  After picking the edge it moves the other endpoint of the edge to the set containining MST.

A group of edges that connectss two set of vertices in a graph is called a cut in graph theory.  So at every step of Prim's algorithm, we find a cut (of two sets, one contains the vertices already included in MST) and other contains the rest of the vertices)  


1) Create a set mstSet that keeps track of vertices already included in MST

2) Assign a key value to all vertices in the input graph.  Initialize all key values as INFINITE.  Assign key value as 0 for the first vertex so that it is picked first.

3) While mstSET doesn't include all vertices

	a) Pick a vertex u which is not there in mstSet and has minimum key value
	b) include u to msetSet
	c) update key value of all adjacent vertices of u.  To update the key values, iterate through all adjacent vertices.  For every adjacent vertex v, if weight of edge u-v is less than the previous key value of v, update the key value as weight of u-v. 

The idea of




*/

#define V 5
int main(){


	/* Let us create the following graph
          2    3
      (0)--(1)--(2)
       |   / \   |
      6| 8/   \5 |7
       | /     \ |
      (3)-------(4)
            9          */
   int graph[V][V] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };


}
