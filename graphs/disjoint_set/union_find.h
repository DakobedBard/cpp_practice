
#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
struct Edge{
	int src, dest;
	Edge(int src_, int dest_):src(src_), dest(dest_){}
	Edge():src(0),dest(0){}
};

class Graph{

	int V,E;
	Edge* edge;

	Graph(int V_, int E_):V(V_), E(E_), edge(new Edge[E_]){}
		

	
};





/*

I suppose we could define our own simple linked list...

Or we maintain an array of vectors for each vertex.  Each vertex will have a vector of adjacenc edges



*/



class GraphNode{
  	uint64_t id;
	std::vector<uint64_t> adjList;

};

/*

Make use of an unordered map which takes the node ID as the key, and the node itself as a value.  This way you can search for a node in the graph in constant time..

The contains the adjacency list which we will use a std::vector


*/

class Adjacency_List_Graph{

	int V ;

	std::unordered_map<int, GraphNode> nodeList;

  public:
	Adjacency_List_Graph(int V_):V(V_){}
	void addEdge(uint64_t node_id, std::vector<uint64_t> adjlist){
	//	nodeList[node_id] = new std::vector<uint64_t>

	} 
	

};
		

	//void addEdge(std::vector<int> adj[] , int V){


//	}
/*	void printGraph(std::vector <int> adj[], int V){
		for(int v = 0; v < V; ++v){
			std::cout << "\n Adjacency list of vertex " << v << "\n head ";
				for(auto x : adj[v])
					std::cout << "->" << x
		}

	}
*/
	// An adjacency list has a 





/*

Adjacency matrix representation is simply a matrix of edges.  

Write a function that validates an adjacency matrix representation of an undirected graph. 

Our graph will be a 


*/


class Adjacency_Matrix_Graph{

	int V;  		// Number of vertices
	
	int adjacency_matrix[3][3];

	void print_matrix(){
		for(int i =0; i <V; i++){
			for(int j=0; j< V; j++){
				std::cout << adjacency_matrix[V][V] << " ";
			}
			std::cout << std::endl;
		}

	}



};


