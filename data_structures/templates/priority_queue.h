#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <stdexcept>


template <class DataType>

class Heap{

  public:
	Heap();
	Heap(DataType elements[], int arraySize);
	DataType remove() throw(std::runtime_error);
	void add(DataType element);
	int getSize();
  private:
	std::vector<DataType> v;


};

template <class DataType>
Heap<DataType>::Heap(){

}


template <class DataType>
Heap<DataType>::Heap(DataType elements[], int arraySize){
	for(int i=0; i< arraySize ; i++){
		add(elements[i]);
	}
}

template <class DataType>
void Heap<DataType>::add(DataType element){

}

template <class DataType>
DataType Heap<DataType>::remove() throw(std::runtime_error){

}

template <class DataType>
int Heap<DataType>::getSize(){
	return v.size();
}





#endif
