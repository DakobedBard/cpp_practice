



#include <iostream>

template <class DataType>
class Tree{

  	struct TreeNode{
		DataType data;
		TreeNode *left;
		TreeNode *right;
	
		TreeNode(DataType val): data(val), left(NULL), right(NULL){}

	};

	TreeNode *root;
	void print(TreeNode* node);
	void freeMemory(TreeNode* node);
	TreeNode* deleteNode_utility(TreeNode* node, DataType data);
	
	
	

  public:
	Tree();
	~Tree();
	void insert(DataType);
	void print();
	
	bool deleteNode(DataType data);
	TreeNode* minValueNode(TreeNode* node);
	
};


template <class DataType>
Tree<DataType>::Tree():root(NULL){

}

template <class DataType>
Tree<DataType>::~Tree()
{
    freeMemory(root);
}


template <class DataType>
typename Tree<DataType>::TreeNode* Tree<DataType>::minValueNode(TreeNode* node)
{
 
	TreeNode* current = node;
	while(current->left != NULL)
		current = current->left;
	return current;
}




template <typename DataType>
typename Tree<DataType>::TreeNode* Tree<DataType>::deleteNode_utility(TreeNode* root, DataType data){
	
	if(root == NULL)
		return root;

	// If the key to be deleted is smaller than the root's key... then it lies in left subtree

	if(data < root->data)
		root -> left = deleteNode_utility(root->left,data);
	else if(data > root->data)
		root-> right = deleteNode_utility(root->right,data);
	else{					// if the data is the same as the root's data, the this is the node to be deleted

		if(root->left == NULL){
			TreeNode* temp  = root->right;
			delete root;
			return temp;
		}
		else if(root->right == NULL){
			TreeNode* temp = root->left;
			delete root;
			return temp;
		}
		
		// Node with two children:  Get the inorder successor ( smallest in the right subtree)

		TreeNode* min = minValueNode(root->right);
		root->data = min->data;

		root->right = deleteNode_utility(root->right, min->data);

	}
	return root;

}


template <class DataType>
bool Tree<DataType>::deleteNode(DataType data){
	
	TreeNode* min = minValueNode(root);

	std::cout << "The value of min is..." << min->data << std::endl;

	deleteNode_utility(root, data);	
	
}





template <class DataType>
void Tree<DataType>::freeMemory(Tree::TreeNode *node){
	if (node==NULL)
  	    	return;
    	if (node->left)
        	freeMemory(node->left);
    	if (root->right)
        	freeMemory(node->right);
    delete node;

}

template <class DataType>
void Tree<DataType>::insert(DataType val){

	TreeNode *treeNode = NULL;

	try{
		treeNode = new TreeNode(val);  // handle exception necessary?
	
	}catch(std::bad_alloc &exception){
		std::cerr << "bad_alloc caught: " << exception.what() << std::endl;
        	EXIT_FAILURE;
	}
	
	TreeNode *temp = NULL;
	TreeNode *prev = NULL;

	temp = root;
	while(temp){
		prev = temp;
		if(temp->data < treeNode->data)
			temp = temp->right;
		else{
			temp = temp->left;
		}
	}
	if(prev == NULL){
		root = treeNode;
	}else{
		if(prev->data < treeNode->data){
			prev->right = treeNode;
		}else{
			prev->left = treeNode;
		}
	}
}



template <class DataType>
void Tree<DataType>::print(TreeNode *root)
{
    	if (root==NULL)
        	return ;
    	print(root->left);
    	std::cout << root->data << std::endl;
    	print(root->right);
}

template <class DataType>
void Tree<DataType>::print()
{
    	print(root);
}


