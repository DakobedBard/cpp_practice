/* 

Check if a binary tree is a BST or not

A binary search tree (BST) is a node based binary tree data structure which has the following properties.
 The left subtree of a node contains only nodes with keys less than the node’s key.
 The right subtree of a node contains only nodes with keys greater than the node’s key.
 Both the left and right subtrees must also be binary search trees.

From the above properties it naturally follows that:
 Each node (item in the tree) has a distinct key.


*/
/* 
For each node, check if max value in left subtree is smaller than the node and min value in right subtree greater than the node.
*/


/* returns true if binary tree is a binary search tree */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <iostream>
#include <queue>
struct node{
	int key;
	struct node *left;
	struct node *right;
	int height;


};

/* A utility function to create a new BST node*/

struct node *newNode(int item)
{
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	
	temp->key = item;
	temp->left = temp->right =NULL;

	return temp;
}


/* A function to do inorder traversal of BST*/
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d \n", root->key);
		inorder(root->right);
	}
}

// A function to do preorder traversal of BST .. 

void preorder(struct node* node){

	if(node == NULL)
		return;
	printf("%d " , node->key);
	preorder(node->left);
	preorder(node->right);

}



/* Function to insert a new node with given key*/
struct node* insert(struct node *node, int key)
{

	/* If the tree is empty, return a new node */
	if(node == NULL) return newNode(key);
	
	
	/*  Otherwise, recur down the tree */
	if(key < node->key)
		node->left = insert(node->left,key);
	else if(key > node->key)
		node->right = insert(node->right,key);

	return node;
}


/* Deletion of a node in a BST 

There are three possibilities when we delete a node

1)Node to be deleted is a leaf.  Simply remove from the tree

  	      50                            50
           /     \         delete(20)      /   \
          30      70       --------->    30     70 
         /  \    /  \                     \    /  \ 
       20   40  60   80                   40  60   80


2)  Node to be deleted has only one child.  Copy the child to the node and deleted the child



             50                             50
           /     \         delete(30)      /   \
          30      70       --------->    40     70 
            \    /  \                          /  \ 
            40  60   80                       60   80

3)  Node to be deleted has two children:  Find inorder successor of the node.  Copy contents of the inorder successor to the node and deleted the inorder successor.  Note that inorder predecessor can also be used 
            
	      50                            60
           /     \         delete(50)      /   \
          40      70       --------->    40    70 
                 /  \                            \ 
                60   80                           80

*/

/* Given a non-empty binary search tree, return the node with the mimimum key value found in that tree.  Note that the entire tree needs to be searched. */

struct node* minValueNode(struct node* node)
{
	struct node* current = node; 

	while(current->left != NULL)
		current = current->left;
	return current;
}

struct node* maxValueNode(struct node* node){

	struct node* current = node;
	while(current->right != NULL)
		current = current ->right;
	return current;

}

/* 

Given a binary tree, find height of it.  Height of empty tree is 0.

Recursively calculate the height of left and right subtrees of a node and assign height to the node as max of the heights of two children plus 1.  

Algorithm:

maxHeight()

1)  If tree is empty then return 0

2)  Else
  a) Get the max depth of left subtree recursively call maxHeight(tree-> left-subtree)
  b) Get the max depth of right subtree recursively call maxHeight(tree-> right-subtree)
  c) add 1 to the max of the left and right subtrees.  
  d) Return maximum depth

*/

int maxHeight (struct node* node)
{
	if (node == NULL)
		return 0;
	else{
		int heightleft = maxHeight(node->left);
		int heightright = maxHeight(node->right);
		
		if(heightleft > heightright)
			return (heightleft +1);
		else 
			return (heightright +1);
	}
}


/* 

Time Complexity: The worst case time complexity of delete operation is O(h) where h is height of Binary Search Tree. In worst case, we may have to travel from root to the deepest leaf node. The height of a skewed tree may become n and the time complexity of delete operation may become O(n)


/* Given a binary search tree and a key, this function deletes and returns the new root */

struct node* deleteNode(struct node* root, int key){

	if( root == NULL) return root;
	
	/* If the key to be deleted is smaller than the root's, then it lies in the left subtree */
	
	if( key < root->key)
		root->left = deleteNode(root->left,key);
	/* If the key to be deleted is greater than the root's then it lies in the right subtree  */
	
	else if( key > root->key)
		root->right = deleteNode(root->right,key);
	
	/* If the key to be deleted is the same as the root's key, then the root is the node to be deleted.  We must consider the three differenant scenarios  */
	else{
	
		if(root->left ==NULL)				/*  Node with only one child  or no children */
		{
			struct node* temp = root->right;
			free(root);
			return temp;
		}

		/* Node with two childrem: Get the inorder successor(smallest) in the right subtree  */
		struct node* temp = minValueNode(root->right);
		/* Copy the inorder successor's content to the new node*/

		root->key = temp->key;

		// Delete the inorder successor
		root->right = deleteNode(root->right, temp->key);
	}
}





/* Returns true if a binary tree is a binary search tree */

/* 

Method 2 checks if binary tree is a BST or not.  This method is less efficient than method #3.  
	



*/


int naive_isBST(struct node* node){
	if (node == NULL)
		return true;
	// False if the maximum of the left is > than node..	
	return 1;

}






/* 

Method 3 

 This method is more efficient.  Method 2 above runs slowly since it traverses over some parts of the tree many times. A better solution looks at each node only once. The trick is to write a utility helper function isBSTUtil(struct node* node, int min, int max) that traverses down the tree keeping track of the narrowing min and max allowed values as it goes, looking at each node only once. The initial values for min and max should be INT_MIN and INT_MAX — they narrow from there. 

Algorithm


the function isBSTUtil returns true if the given tree is a BST and its values are >= min and <= max.  

int isBSTUtil(struct node* node, int min, int max)


*/


int isBSTUtil(struct node * node, int min, int max);


int isBST(struct node* node)
{
	return(isBSTUtil(node, INT_MIN, INT_MAX));

}

/* Returns true if the given tree is a BST and the value are >= min and <= max*/


int isBSTUtil(struct node *node, int min, int max){
	
	if(node == NULL)         /* An empty tree is a BST */
		return 1;
	/*  false if this node violates the min/ max  */
	if(node-> key <min || node->key > max)
		return 0;
	/* Other wise check the subtrees recursively tightening the min or max constraint*/
	return isBSTUtil(node->left, min, node->key-1) && isBSTUtil(node->right, node->key+1, max);
	
}


/*

Given a sorted ascending singly linked list, construct a balanced BST.

struct node{
	int key;
	struct node *left;
	struct node *right;
};




*/

// Define our linked list node...
struct ListNode{

	int data;
	struct ListNode* next;

};


/*

WE WILL UTILIZE THE FOLLOWING UTILITY FUNCTIONS THAT RETURN COUTN OF NODES IN A GIVEN LINKED LOST


*/


int countLNodes(struct LNode *head){
	int count =0;

	return count;

}




/*

We will create a BST recursively 

we can find the middle element in O(1) time in a sorted array...


*/

struct node* sortedarray_toBST(int arr[], int start, int end){

	if(start > end)
		return NULL;

	int mid = (start + end)/2;
	struct node *root = newNode(arr[mid]);
	

	root->left = sortedarray_toBST(arr, start, mid-1);
	root->right = sortedarray_toBST(arr,mid+1, end);
	return root;	

}

void test_array_toBST(){
    

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
    	int n = sizeof(arr)/sizeof(arr[0]);
 
    	/* Convert List to BST */

	printf("Convert the sorted array to a BST\n");
    	struct node *root = sortedarray_toBST(arr, 0, n-1);
    	printf("n PreOrder Traversal of constructed BST \n ");
    	preorder(root);
	

}


/*


Merge two balanced binary search trees






You are given two balanced binary search trees e.g., AVL or Red Black Tree. Write a function that merges the two given balanced BSTs into a balanced binary search tree. Let there be m elements in first tree and n elements in the other tree. Your merge function should take O(m+n) time.

In the following solutions, it is assumed that sizes of trees are also given as input. If the size is not given, then we can get the size by traversing the tree (See this).



Method 1 (Insert elements of first tree to second) 
Take all elements of first BST one by one, and insert them into the second BST. Inserting an element to a self balancing BST takes Logn time (See this) where n is size of the BST. So time complexity of this method is Log(n) + Log(n+1) … Log(m+n-1). The value of this expression will be between mLogn and mLog(m+n-1). As an optimization, we can pick the smaller tree as first tree.

Method 2 (Merge Inorder Traversals) 
1) Do inorder traversal of first tree and store the traversal in one temp array arr1[]. This step takes O(m) time.
2) Do inorder traversal of second tree and store the traversal in another temp array arr2[]. This step takes O(n) time.
3) The arrays created in step 1 and 2 are sorted arrays. Merge the two sorted arrays into one array of size m + n. This step takes O(m+n) time.
4) Construct a balanced tree from the merged array using the technique discussed in this post. This step takes O(m+n) time.


*/


// A utility function to merge two sorted arrays into one...

int* merge(int arr1[], int arr2[] , int m, int n);

void storeInorder(struct node* node, int inorder[], int *index_ptr);

struct node* mergeTrees(struct node *root1, struct node *root2, int m, int n){




}








/*

Merge two BST's with limited extra space... 

Given two Binary Search Trees(BST), print the elements of both BSTs in sorted form. The expected time complexity is O(m+n) where m is the number of nodes in first tree and n is the number of nodes in second tree. Maximum allowed auxiliary space is O(height of the first tree + height of the second tree).


First BST 
       3
    /     \
   1       5


Second BST
    4
  /   \
2       6


Output: 1 2 3 4 5 6


First BST 
          8
         / \
        2   10
       /
      1
Second BST 
          5
         / 
        3  
       /
      0

*/



// A utility unction to merge two sorted arrays into one
int *merge(int arr1[], int arr2[], int m, int n)
{
    // mergedArr[] is going to contain result
    int *mergedArr = new int[m + n];
    int i = 0, j = 0, k = 0;
 
    // Traverse through both arrays
    while (i < m && j < n)
    {
        // Pick the smaler element and put it in mergedArr
        if (arr1[i] < arr2[j])
        {
            mergedArr[k] = arr1[i];
            i++;
        }
        else
        {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
 
    // If there are more elements in first array
    while (i < m)
    {
        mergedArr[k] = arr1[i];
        i++; k++;
    }
 
    // If there are more elements in second array
    while (j < n)
    {
        mergedArr[k] = arr2[j];
        j++; k++;
    }
 
    return mergedArr;
}



/* A helper function that stores inorder traversal of a tree rooted with node
/(void storeInorder(struct node* node, int inorder[], int *index_ptr)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
  /*  storeInorder(node->left, inorder, index_ptr);
 
    inorder[*index_ptr] = node->data;
    (*index_ptr)++;  // increase index for next entry
 
    /* now recur on right child 
    storeInorder(node->right, inorder, index_ptr);
}
 
*/

/* A function that constructs Balanced Binary Search Tree from a sorted array
   See https://www.geeksforgeeks.org/archives/17138 */
struct node* sortedArrayToBST(int arr[], int start, int end)
{
    /* Base Case */
    if (start > end)
      return NULL;
 
    /* Get the middle element and make it root */
    int mid = (start + end)/2;
    struct node *root = newNode(arr[mid]);
 	//root->key
    /* Recursively construct the left subtree and make it
       left child of root */
    root->left =  sortedArrayToBST(arr, start, mid-1);
 
    /* Recursively construct the right subtree and make it
       right child of root */
    root->right = sortedArrayToBST(arr, mid+1, end);
 
    return root;
}

int findLevel(struct node *root, int k, int level){

	// Base case

	if(root == NULL)
		return -1;


	if(root->key == k)
		return level;
	int l = findLevel(root->left, k, level+1);
	//return 0;
	return (l != -1)? l : findLevel(root->right, k, level+1);


}
/*

This function returns a pointer to the LCA of two given values n1 and n2.  It also sets d1, d2 and dist if one key is not ancestor of other

d1 to store distance of n1 from root
d2 to store distance of n2 from root

level (distance from root) of current node

dist-> to store the distance between n1 and n2



*/

/*
struct node* findDistUtil(struct node* root, int n1, int n2, int &d1, int &d2, int &dist, int lvl){

	if(root == NULL)
		return NULL;
	if(root->key == n1){
		d1 = lvl;
		return root;
	}

	if(root->key ==n2){
		d2 = lvl;	
		return root;
	}


	// Look for n1 and n2 in left and right subtrees
	
	struct node *left_lca = findDistUtil(root->left, n1, n2,d1,d2,dist,lvl+1);
	struct node *right_lca = findDistUtil(root->right, n1, n2,d1,d2,dist,lvl+1);

	// If both of the above calls return Non NULL, then one key is present in one subtree and other is 
	// present in the other.  SO this node is the LCA

	if(left_lca && right_lca){
		dist = d1+d2 - 2*lvl;
		return root;
	}

	// Otherwise check if left subtree is 

	return(left_lca != NULL) ? left_lca:right_lca;

}

*/

struct node *findDistUtil(struct node* root, int n1, int n2, int &d1, 
                            int &d2, int &dist, int lvl)
{
    // Base case
    if (root == NULL) return NULL;
 
    // If either n1 or n2 matches with root's key, report
    // the presence by returning root (Note that if a key is
    // ancestor of other, then the ancestor key becomes LCA
    if (root->key == n1)
    {
         d1 = lvl;
         return root;
    }
    if (root->key == n2)
    {
         d2 = lvl;
         return root;
    }
 
    // Look for n1 and n2 in left and right subtrees
    struct node *left_lca  = findDistUtil(root->left, n1, n2, 
                                   d1, d2, dist, lvl+1);
    struct node *right_lca = findDistUtil(root->right, n1, n2,
                                   d1, d2, dist, lvl+1);
 
    // If both of the above calls return Non-NULL, then
    // one key is present in once subtree and other is 
    // present in other. So this node is the LCA
    if (left_lca && right_lca)
    {
        dist = d1 + d2 - 2*lvl;
        return root;
    }
 
    // Otherwise check if left subtree or right subtree 
    // is LCA
    return (left_lca != NULL)? left_lca: right_lca;
}



int findDistance2(struct node* root, int n1, int n2){

	int d1 = -1;
	int d2 = -1;
	int dist;


	struct node* lca = findDistUtil(root, n1, n2, d1, d2, dist, 1);
	// If both n1 and n2 were present in binary tree, return dist

	if(d1 != -1 && d2 != -1)
		return dist;
	

	if(d1 != -1){
		dist = findLevel(lca, n2,0);
	}

	if(d2!= -1 ) {
		dist = findLevel(lca, n1, 0);
		return dist;
	}
	return -1;
	
	

}


int findDistance(struct node *root, int n1, int n2)
{
   	int d1 =-1, d2 = -1, dist;
	struct node* lca = findDistUtil(root, n1, n2, d1,d2, dist,1);
	
 	// If both n1 and n2 were present in Binary Tree return dist

	if(d1!= -1 && d2 != -1){
		return dist;
	}

	if (d1 != -1)
    	{
        	dist = findLevel(lca, n2, 0);
        	return dist;
    	}
 
    	// If n2 is ancestor of n1, consider n2 as root 
    	// and find level of n1 in subtree rooted with n2
    	if (d2 != -1)
    	{
        	dist = findLevel(lca, n1, 0);
        	return dist;
    	}
    	return -1;
}




/*

Here I am implementing BFS with a queue.. At the minimum height, the node will have 0 children on its left and right.  Therefore by applying a breadth first search, the first node with null left and right pointers will be at the minimum depth.  Return this value.    




*/



int minDepth(struct node* root){
	if(root == NULL)
		return 0;



	std::queue<struct node*> q;


	struct node* current_node = root;

	//std::cout << "the value of the node of the queyue" << current_node->key << std::endl;
	q.push(current_node);
	int depth =0;
	while(!q.empty()){

		depth ++;
		int size = q.size();

		while(size){
			current_node = q.front();
			if(current_node->left != NULL){
				q.push(current_node->left);
				std::cout << "I'm getting pushed: " << current_node->key << "and the depth" << depth << std::endl;
				

			}
			if(current_node->left != NULL){
				q.push(current_node->left);
				std::cout << "I'm getting pushed: " << current_node->key << std::endl;
			}
			if(current_node->left == NULL and current_node->right == NULL){	
				std::cout << "My children are null..: " << current_node->key << std::endl;
				return depth;
			}


		//	std::cout << "The maximum value of this node is " << current_node->key << std::endl;
			q.pop();
			size--;
		}

	}


	/*//while(!q.empty()){

		depth++;
		int size = q.size();
//		std::cout << "the size of the queyue" << size << std::endl;
		
	/*	while(size){

			struct node* current_node = q.front();
//			std::cout << "the value of the node of the queyue" << current_node->key << std::endl;
		
			//if(current_node->left = NULL)
//				std::cout << "The Left value of this node is NULL " << current_node->key << std::endl;
			//else{

//				std::cout<< "not " <<std::endl; 
			//}

			//std::cout << "The maximum value of this node is " << current_node->key << std::endl;
			q.pop();
			size--;

				int size = q.size();
		//std::cout << "the size of the queyue" << size << std::endl;

	}
	*/	

	
	return 0;


}



	/*		std::cout << "the value of the current node" << current_node->key << std::endl;
			if(current_node->left != NULL){
				q.push(current_node->left);
			}
			if(current_node->right)
				q.push(current_node->right);
			if(current_node->left == NULL && current_node->right == NULL)
				return depth;
*/


int main()
{
/* Let us create following BST
            50
           /  \
          30   70
         /  \  / \
       20   40 60 80 */
   	struct node *root = NULL;
    	root = insert(root, 50);
    	root = insert(root, 30);
    	root = insert(root, 20);
   	root = insert(root, 40);
    	root = insert(root, 70);
    	root = insert(root, 60);
    	root = insert(root, 80);
 

	int first_level = findLevel(root, 30,0);
	std::cout << "first level: " << first_level <<std::endl;

   	//struct node *max = maxValueNode(root);


//	std::cout << "The maximum value of this node is " << max->key << std::endl;
//	test_array_toBST();

//	printf("\n");

	std::cout << "\n";

	std::cout << "Dist(20, 80) = " << findDistance(root, 20, 80);

	std::cout << "\n";


	struct node* root2 = NULL;
	root2 = newNode( 1);
	root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);
    root2->right->left = newNode(6);
    root2->right->right = newNode(7);
    root2->right->left->right = newNode(8);

	preorder(root2);

	std::cout << "Dist(4, 5) = " << findDistance(root2, 4,5) << std::endl;
	std::cout << "Dist(4, 6) = " << findDistance(root2, 4,6)<< std::endl;
	std::cout << "Dist(3, 4) = " << findDistance(root2, 3,4)<< std::endl;
	std::cout << "Dist(2, 4) = " << findDistance(root2, 2,4)<< std::endl;
	std::cout << "\n";
	//root = insert(root, 2);
	//root = insert(root, 3);
	//root = insert(root, 4);
	//root = insert(root, 5);
	

	//int n = (int)root->key;
	//std::cout << "the key of the root is" <<max->key << std::endl;
	//int mindepth = minDepth(root);

	


	//std::cout << "the value of the node of the queyue" << root->key << std::endl;

	//std::cout << "the min depth is " << mindepth<<std::endl;

 /*   printf("Inorder traversal of the given tree \n");
    inorder(root);
 
    printf("\nDelete 20\n");
    root = deleteNode(root, 20);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    printf("\nDelete 30\n");
    root = deleteNode(root, 30);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    printf("\nDelete 50\n");
    root = deleteNode(root, 50);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);



    struct node *gay = newNode(1);
 
    gay->left = newNode(2);
    gay->right = newNode(3);
    gay->left->left = newNode(4);
    gay->left->right = newNode(5); 
    gay->left->left->left = newNode(23);
    gay->left->left->left->left = newNode(28);
   
    printf("Height of tree is %d \n" , maxHeight(gay));

    bool gayer = isBST(gay);
    if(gayer ==1)
	printf("this is a bst \n");
    else
	printf("not a bst\n");
    return 0;
  */

}





