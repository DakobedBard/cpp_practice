


/*
A minimum spanning tree:

Given a connected an undirected graph, a spanning tree of that graph is a subgraph that is a tree and connects al lthe vertices together.  A sibngle graph can have man different spanning treees.  s m inimum spanning tree or minimum weight spanning tre for a weightedd, connected and undirected graph is a spanning tree with weight less than ore qual to the weight of every other spanning tree.  


V - 1 edges

1) sort all the eges in non decreasing order of their weight
2) Pick the smallest edge.  check if it forms a cycle with the spanning tree formed so far.  If cycle is not formed, include this edge.  Else, discard it.
3) Repeat step # 2 until there are (v-1) edges in the spanning tree


the step #2 uses union find algorithm to detect cycle.  
*/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// A structure to represent a weighted edge in graph
struct Edge{
	int src, dest, weight;

};

// A structure to represent a connected, undirected and weighted graph

struct Graph{
	int V,E;
	/*
		Grpah is represented as an array of edges since the graph is undirected, the edge from source to dest is also edge from dest to strc
	*/	

	struct Edge* edge;
};


struct subset{

	int parent;
	int rank;
};


int myComp(const void* a, const void* b){
	struct Edge* a1 = (struct Edge*)a;
	struct Edge* b1 = (struct Edge*)b;
	return a1->weight > b1->weight;
}

struct Adjecency_Graph{
	


};

int find(struct subset subsets[], int i){
	

	// Find root and make root as parent of i
	if(subsets[i].parent != i)
		subsets[i].parent = find(subsets, subsets[i].parent);
	return subsets[i].parent;

	
}

void Union(struct subset subsets[], int x , int y){

	int xroot = find(subsets, x);
	int yroot = find(subsets, y);

	// Attach smaller rank tree under root of higher rank tree (union by rank)

	if(subsets[xroot].rank > subsets[yroot].rank)
		subsets[xroot].parent = yroot;
	else if(subsets[xroot].rank > subsets[yroot].rank)
		subsets[yroot].parent = xroot;
	// If ranks are same, then make one as root and increment its rank by one
	else{
		subsets[yroot].parent = xroot;
		subsets[xroot].rank++;
	}


}


// The main function to construct MST using Kruskal's algorithm
void KruskalMST(struct Graph* graph)
{
    int V = graph->V;
    struct Edge result[V];  // Tnis will store the resultant MST
    int e = 0;  // An index variable, used for result[]
    int i = 0;  // An index variable, used for sorted edges
 
    // Step 1:  Sort all the edges in non-decreasing 
    // order of their weight. If we are not allowed to 
    // change the given graph, we can create a copy of
    // array of edges
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);
 
    // Allocate memory for creating V ssubsets
    struct subset *subsets =
        (struct subset*) malloc( V * sizeof(struct subset) );
 
    // Create V subsets with single elements
    for (int v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
 
    // Number of edges to be taken is equal to V-1
    while (e < V - 1)
    {
        // Step 2: Pick the smallest edge. And increment 
        // the index for next iteration
        struct Edge next_edge = graph->edge[i++];
 
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
 
        // If including this edge does't cause cycle,
        // include it in result and increment the index 
        // of result for next edge
        if (x != y)
        {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
        // Else discard the next_edge
    }
 
    // print the contents of result[] to display the
    // built MST
    printf("Following are the edges in the constructed MST\n");
    for (i = 0; i < e; ++i)
        printf("%d -- %d == %d\n", result[i].src, result[i].dest,
                                                 result[i].weight);
    return;


}



struct Graph* createGraph(int V, int E){
	struct Graph* graph = new Graph;
	graph->V = V;
	graph->E = E;
	graph->edge = new Edge[E];
	return graph;

}


int main(){

 int V = 4;  // Number of vertices in graph
    int E = 5;  // Number of edges in graph
    struct Graph* graph = createGraph(V, E);
 
 
    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = 10;
 
    // add edge 0-2
    graph->edge[1].src = 0;
    graph->edge[1].dest = 2;
    graph->edge[1].weight = 6;
 
    // add edge 0-3
    graph->edge[2].src = 0;
    graph->edge[2].dest = 3;
    graph->edge[2].weight = 5;
 
    // add edge 1-3
    graph->edge[3].src = 1;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 15;
 
    // add edge 2-3
    graph->edge[4].src = 2;
    graph->edge[4].dest = 3;
    graph->edge[4].weight = 4;
 
    KruskalMST(graph);
 
    return 0;
	
}


