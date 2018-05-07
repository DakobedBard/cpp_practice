#include "bst.h"


int main(){
	
	BinarySearchTree<int> b;
	int ch;
	int tmp,tmp1;
	while(1)
	{
		cout<<endl<<endl;
		cout<<" Binary Search Tree Operations "<<endl;
		cout<<" ----------------------------- "<<endl;
		cout<<" 1. Insertion/Creation "<<endl;
		cout<<" 2. In-Order Traversal "<<endl;
		cout<<" 3. Pre-Order Traversal "<<endl;
		cout<<" 4. Post-Order Traversal "<<endl;
		cout<<" 5. Removal "<<endl;
		cout<<" 6. Search "<<endl;
		cout<<" 7. Exit "<<endl;
		cout<<" Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1 : cout<<" Enter data to be inserted : ";
			cin.ignore(1);
			cin>>tmp;
			b.insert(tmp);
			break;
		case 2 : cout<<endl;
			cout<<" In-Order Traversal "<<endl;
			cout<<" -------------------"<<endl;
			b.print_inorder();
			break;
		case 3 : cout<<endl;
			cout<<" Pre-Order Traversal "<<endl;
			cout<<" -------------------"<<endl;
			b.print_preorder();
			break;
		case 4 : cout<<endl;
			cout<<" Post-Order Traversal "<<endl;
			cout<<" --------------------"<<endl;
			b.print_postorder();
			break;
		case 5 : cout<<" Enter data to be deleted : ";
			cin.clear();
			cin.ignore(1);
			cin>>tmp1;
			b.remove(tmp1);
			break;
		case 6 : cout<<" Enter data to be searched : ";
			cin.ignore(1);
			cin>>tmp;
			b.search(tmp);
			break;
		case 7 : system("pause");                                                      
			return 0;
			break;
		}
	}
}
