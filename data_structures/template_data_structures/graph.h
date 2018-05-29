

/*

Insert edges into the adjacency list...


Can i implement one of the graph algorithms using my Graph class?



Do BFS and DFS on each of the implementations... write code to transition from one representation to another.. 





*/


#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>


#define adj_V 5

struct Edge{

	int src, dest;
	Edge* edge;

	Edge():src(0),dest(0){}

};



class Graph{

	int V,E;
  	Edge* edge;
  public:
	Graph(int V_, int E_):V(V_), E(E_){}

	

};


class GraphNode{
	
	struct AdjListNode{
		int dest;
		int weight;
		AdjListNode(int dest_, int weight_):dest(dest_), weight(weight_){}
	};

	std::vector<AdjListNode> adjList;
	
  public:
	int id;
	GraphNode(int id_):id(id_){}
	GraphNode(){}
	void print_adjlist(){
		if (adjList.size() == 0)
			std::cout << " NULL" << std::endl; 

		for(int i= 0; i < adjList.size(); i++){

			std::cout << adjList[i].dest << "   with weight: " << adjList[i].weight <<std::endl;
		}
	}

	std::vector<AdjListNode> return_adjlist(){
		return adjList;

	}

	void insert(int k){
		AdjListNode adj_node(k , 1);
		adjList.push_back(adj_node);
	}

	/*
	Overload insert for weighted graphs.  

	*/

	void insert(int k, int w){
		AdjListNode adj_node(k , w);
		adjList.push_back(adj_node);
	}


};



class AdjList_Graph{

	int V;
	std::unordered_map<int, GraphNode*> nodeList;

  public:

	AdjList_Graph(int V_) : V(V_){
		for(int i =0; i < V_ ; i++){
			nodeList[i] = new GraphNode(i);
		}
	}
	int getV(){
		return V;
	}

	GraphNode* get_Node(int k){
		return nodeList[k] ;
	}

	void print(){
		GraphNode current_node;
		for (auto it: nodeList){
			current_node = *(it.second);
			std::cout << "node id: " << current_node.id << " adjacency list: " <<std::endl;
			current_node.print_adjlist();
			std::cout << std::endl;

		//	std::cout << "id: "  << it.first;
		}

	}


	void insert_edge(int first_vertex, int second_vertex, int w){
		
		// Get pointers to respective nodes

		GraphNode *node1 = nodeList[first_vertex];
		GraphNode *node2 = nodeList[second_vertex];
		node1->insert(second_vertex, w);

	}

	void BFS(){

	}

	void BFS_Util(int s){

		bool *visited = new bool[V];

		for(int i=0; i < V; i++)
			visited[i] = false;

		std::list<GraphNode*> queue;
		// Mark the current node as visited and enqueue it

		queue.push_back(get_Node(s));

		
	//	while(!queue.empty()){

			//s = queue.front();	
			//std::cout << s << " ";
			//queue.pop_front();
			//std::cout << "the size of" << *(nodeList[i])->
// nodeList is the unordered map
			//for(int i =0; i < nodeList[i].size(); i++){


			//}
	//	}
		



	}



};

/*

Worry about templating the Nodes in the graph later...




*/



class AdjMatrix_Graph{
  private:
	int** adjMatrix;
	int numVertices;

  public:

	AdjMatrix_Graph(int numVertices_){

		this->numVertices = numVertices_;
		adjMatrix = new int*[numVertices];
		for(int i=0; i < numVertices; i++){
			adjMatrix[i] = new int[numVertices];
			for(int j=0; j < numVertices; j++)
				adjMatrix[i][j] = 0;
		}
	}

	void print(){
		for(int i =0; i < numVertices; i++){
			
			for(int j=0; j < numVertices; j++){
				std::cout << adjMatrix[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

	void addEdge(int i, int j, int w){
		adjMatrix[i][j] = w;
		adjMatrix[j][i] = w;
	}
	

	void removeEdge(int i, int j){
		adjMatrix[i][j] = 0;
		adjMatrix[j][i] = 0;
	}

	~AdjMatrix_Graph(){
		for(int i=0; i< numVertices; i++)
			delete[] adjMatrix[i];
	}



};
