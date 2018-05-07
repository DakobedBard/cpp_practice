/*

Given a root of a tree, and an integer k.  Print all the nodes which are at k distance from root

For example, in the below tree, 4, 5 & 8 are at distance 2 from root.
            1
          /   \
        2      3
      /  \    /
    4     5  8 


First lets start by implementing a binary tree..



*/

#include <stdlib.h>
#include <stdio.h>




struct node{

	int data;
	struct node* left;
	struct node* right;

};


void printKDistance(struct node *root, int k){
	if(root = NULL){
		return;
	}
	 if(k == 0){
		printf("%d " , root->data);
		return;
	}else{	
		printKDistance(root->left, k-1);
		printKDistance(root->right, k-1);
	}
}



	
struct node* newNode(int data){
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	
	new_node->data = data;
	new_node->left = NULL;
	new_node->right =NULL;

	return (new_node);
}



int main(){
	printf("i am a faggot with a seg fault");

 /* 	Constructed binary tree is
            1
          /   \
        2      3
      /  \    /
    4     5  8 
*/
  	struct node *root = newNode(1);
  	root->left        = newNode(2);
  	root->right       = newNode(3);
 	root->left->left  = newNode(4);
  	root->left->right = newNode(5);
  	root->right->left = newNode(8);  

	printKDistance(root, 2);

	return 0;

}







