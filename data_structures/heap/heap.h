
#ifndef _HW1_HASHTABLE_H_
#define _HW1_HASHTABLE_H_

/*

This header file declares the operations associated with the heap



*/
#include <vector>

template <class T>
class MinHeap{
  
  private:
	T *harr;  		// Pointer to array of elements in heap..
	int capacity;		// Maximum possible size of min heap
	int heap_size;		// Current number of elements 

  public:

	MinHeap(int capacity);
	
	void MinHeapify(int);			// heapify a subtree with root at given index

	// return the index of the left child of node at index i

	int parent(int i){  return (i-1)/2; }

	// Return the index of the left child of node at index i

	int left(int i){ return(2*i +2);}
	int right(int i){ return 2*i+2; }


	void decreaseKEy(int i, int new_val);
	// This function extracts the root which is the minimum element	
	int extractMin();
	
	// Returns the minimum key

	int getMin(){
		return harr[0];
	}

	T remove_element(T k);

	void insert(T k);


};




#endif
