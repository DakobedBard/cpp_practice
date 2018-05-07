#ifndef LinkedList_h
#define LinkedList_h


#include <iostream>


template <class DataType>
struct Node{
	DataType data;
	Node<DataType> *next;


};


template <class DataType>
class LinkedList
{
public:
	LinkedList();
	LinkedList (const LinkedList<DataType> & aplist);
	~LinkedList();
	LinkedList<DataType> & operator = (const LinkedList<DataType> & rlist);
	void insert (const DataType & element); // no current position after use
	bool first (DataType & listEl);	  // returns first element of list in listEl
	inline bool getNext (DataType & listEl);	  // retrieves the next element of a linked list

	DataType getNextItem();

	bool find (const DataType & element);  // returns true if element is found
	bool retrieve (DataType & element);  // like find, except returns found element
	bool replace (const DataType & newElement); // replaces element at current position
	bool remove (DataType & element);    // returns true if element is found
	bool isEmpty() const;				  // returns true if linked list is empty
	void makeEmpty();	

	void Iterative_ReverseList();
	
	Node<DataType>* return_head();
	void Recursive_ReverseList(Node<DataType>**  head_ref);
				  // no current position
private:
	Node<DataType> *start;
	Node<DataType> *current;			  // points to node at current position
	inline void deepCopy (const LinkedList<DataType> & original);
};

template <class DataType> 
Node<DataType>* LinkedList<DataType>::return_head(){
	
	return start;

}



template <class DataType> 
void LinkedList<DataType>::Iterative_ReverseList(){
	Node<DataType>* prev = NULL;
	Node<DataType>* next = NULL;
	Node<DataType>* current = start;

	while(current != NULL){
		next = current->next;
		current ->next = prev;
		prev = current;
		current = next;
	}
	start = prev;

}

template <class DataType> 
void LinkedList<DataType>::Recursive_ReverseList(Node<DataType>**  head_ref){

	Node<DataType>* first;
	Node<DataType>* rest;

	/* empty list*/

	if(*head_ref == NULL)
		return;
	// Suppose first = {1,2,3}, rest = {2,3}

	first = *head_ref;
	rest = first->next;

	/* 
	List has only one node	
	
	*/


	if(rest = NULL)
		return;

	// Reverse the rest list and put the first element at the end

	Recursive_ReverseList(&rest);
	first->next->next = first;

	// Tricky step..

	first->next = NULL;
	// Fix the head pointer.
	*head_ref = rest;

}





template<class DataType>
LinkedList<DataType>::LinkedList():start(0), current(0){}

template<class DataType>
LinkedList<DataType>::LinkedList(const LinkedList <DataType>& aplist){
	deepCopy(aplist);
}


template <class DataType>
LinkedList<DataType>::~LinkedList(){
	
}

template <class DataType>
LinkedList<DataType>& LinkedList<DataType>::operator = (const LinkedList<DataType>& rlist){
	if(this == &rlist)			// assignment operator
		return *this;
	makeEmpty();
	deepCopy(rlist);
	return *this;

}


// inserts at the beginning of the linked list...
// no current position after use

template <class DataType>
void LinkedList<DataType>::insert(const DataType& parameter){

	current = 0;
	Node<DataType>* node = new Node<DataType>;
	node->data = parameter;
	node->next = start;
	start = node;

}

template <class DataType>
bool LinkedList<DataType>::first(DataType& parameter) // O(1)
{
  	if (!start) return false;
  	parameter = start->data;
  	current = start;
  	return true;
}


template <class DataType>
bool LinkedList<DataType>::getNext(DataType& parameter) // O(1)
{
  if (!current) return false;
  current = current->next;
  if (!current) return false;
  parameter = current->data;
  return true;
}




template <class DataType>
bool LinkedList<DataType>::find(const DataType& parameter){
  	DataType temp;
  	if (first(temp)) do
 	{
    		if (parameter == temp) 
			return true; // found it
  		} while (getNext(temp));
  	return false; // no match
}



template <class DataType>
bool LinkedList<DataType>::retrieve(DataType& parameter){
	if(!find(parameter)) 
		return false;
	parameter = current-> data;		// set in find...
	return true;

}

template <class DataType>
bool LinkedList<DataType>::replace(const DataType& parameter){
	
	if(!current)
		return false;
	current->data = parameter;
	return true;

}


template <class DataType>
bool LinkedList<DataType>::remove(DataType& parameter) // O(n)
{
  	// find node to remove
  	Node<DataType>* p;
  	Node<DataType>* prev;
  	for (prev = 0, p = start; p; prev = p, p = p->next){
    		if (p->data == parameter)
      			break;
  	}
  	// deallocate node here
  	if (!p) return false; // no match
  	if (prev) 
		prev->next = p->next; 
	else 
		start = p->next;
  	if (p == current) 
		current = current->next;
  	parameter = p->data;
  	delete p;
  	return true;
}

template <class DataType>
bool LinkedList<DataType>::isEmpty() const // O(1)
{
  	return start == 0;
}

template <class DataType>
void LinkedList<DataType>::makeEmpty() // O(n)
{
  	while (start)
  	{
    		current = start->next;
    		delete start;
    		start = current;
  	} 
}

template <class DataType>
inline void LinkedList<DataType>::deepCopy( const LinkedList<DataType> & original )
{
	start = current = NULL;
	if ( original.start == NULL )
		return;
	Node<DataType> *copyptr = start = new Node<DataType>;
	Node<DataType> *originalptr = original.start;
	copyptr->data = originalptr->data;
	if ( originalptr == original.current )
		current = copyptr;
	while ( originalptr->next != NULL ) {
		originalptr = originalptr->next;
		copyptr->next = new Node<DataType>;
		copyptr = copyptr->next;
		copyptr->data = originalptr->data;
		if ( originalptr == original.current )
			current = copyptr;
	}
	copyptr->next = NULL;
}






#endif
