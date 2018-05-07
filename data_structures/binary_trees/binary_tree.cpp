/*

Implementation of a binary search tree

*/


struct node{
	int key;
	struct node *left, *right;
};


//A utility function to create a new BST node.
struct node *newNode(int item){
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	temp-> key = item;
	temp->left = temp->right = NULL;
	return temp;
}

int main(){

}
