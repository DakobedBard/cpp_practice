/*

Write a program that finds the maximum depth of a tree

We recursively calculate height of left and right subtrees of a node and assign height to the node as max othe heights of two children plus 1.  



 maxDepth()
1. If tree is empty then return 0
2. Else
     (a) Get the max depth of left subtree recursively  i.e., 
          call maxDepth( tree->left-subtree)
     (a) Get the max depth of right subtree recursively  i.e., 
          call maxDepth( tree->right-subtree)
     (c) Get the max of max depths of left and right 
          subtrees and add 1 to it for the current node.
         max_depth = max(max dept of left subtree,  
                             max depth of right subtree) 
                             + 1
     (d) Return max_depth

*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;

};

// Compute the "maxDepth" of a tree -- the number of nodes along the longest path from the root node down to the farthest leaf node

int maxDepth(struct node* node){

	if(node == NULL){
		return 0;
	}else{
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);
		
		if(lDepth > rDepth){
			return (lDepth+1);
		}else{
			return (rDepth+1);
		}	
	}
}

struct node* deleteNode(struct node* root, itn key){


}




struct node* newNode(int data){
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	
	return new_node;
}


int main(){

	struct node *root = newNode(1);
    	root->left = newNode(2);
    	root->right = newNode(3);
    	root->left->left = newNode(4);
    	root->left->right = newNode(5); 

	printf("Hight of tree is %d\n", maxDepth(root));
  	return 0;
}
