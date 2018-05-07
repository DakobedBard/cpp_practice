#include "bst.h"

int main(){
	Tree<int> tree;
    	tree.insert(14);
    	tree.insert(12);
    	tree.insert(6);
    	tree.insert(17);
    	tree.insert(8);
	tree.insert(13);
	tree.deleteNode(14);

	

    	tree.print();
}
