#include<iostream>


template <class T>
class bst{


	struct TreeNode{
		T data;
		TreeNode *left;
		TreeNode *right;

		TreeNode(T val): data(val), left(NULL), right(NULL){

		}

	};


	TreeNode* root;
	void print(TreeNode* root_);

	void freeMemory(TreeNode*);

  public:

	bst();
	~bst();
	void insert(T t);
	void print();

};


template  <class T>

void bst<T>::freeMemory(bst::TreeNode *node){

	if(node == NULL)
		return;
	if(node->left)
		freeMemory(node->left);
	if(root->right)
		freeMemory(node->right);
	delete node;

}
