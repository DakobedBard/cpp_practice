

#include <vector>
#include <cassert>

#include <iostream>

template<class T>
class HeapNode{
  public:
	HeapNode(const int key, const T& item):key(key), item(item) {
	}
	T getItem() const{
		return item;
	}

	int getKey() const{
		return key;
	}

	void updateKey(const int newKey){
		key = newKey;
	}
	void updateItem(const T& newItem){
		item = newItem;
	}
	HeapNode& operator = (const HeapNode& heapItem){
		this-> key = heapItem.getKey();
		this-> item = heapItem.getItem();
		return *this;
	}
  private:
	int key;
	T item;
};




template <class T>
class MinHeap{
  public:
	std::vector<HeapNode<T>> heap;
	

	int leftChild(const int index) const{
		return index*2 + 1;
	}
	int rightChild(const int index) const {
		return index*2 + 2;
	}
	int parent(const int index) const{
		return (index -1)/2;
	}
	
	T Extract_Min(){
		assert(heap.size() > 0);
	}

	T peak(){
		return heap[0];
	}
	
	// this function returns wether the given heap is empty or not..

	bool is_empty(){
		return heap_size() == 0;
	}	
	
	void updateKey(const T& item, const int newKey){

	}
	void heapify(const std::vector<T>& items, const std::vector<int>& keys){



	}


  protected:


  private:
};


int main(){
	std::cout << " fuck" << std::endl;
}

