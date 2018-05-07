

#include <vector>


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
		item = newItem'
	}
	HeapNode& operator = (const HeapNode& heapItem){
		this-> key = heapItem.getKey();
		this->item = heapItem.getItem();
		return *this;
	}
  private:
	int key;
	T item;
};




template <class T>
class MinHeap{
  public:
	std::vector<HeapNode>
	



};


int main(){

}


