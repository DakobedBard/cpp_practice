
#include "graph.h"
int main(){

	AdjList_Graph graph(4);

	graph.insert_edge(0,1,1);
	//graph.insert_edge(0,2,1);
	//graph.insert_edge(1,2,1);
	//graph.insert_edge(2,0,1);
	//graph.insert_edge(3,3,1);
	graph.print();
}
