#include <iostream>

#define default_value 16
#include <iostream> 
using namespace std; 
 
const int maxQsize = 100; 
 
template <class DataType> 
class Queue { 
  	DataType q[maxQsize]; 
  	int size; 
  	int enqueueloc, dequeueloc;
  public: 
 	Queue(int len);
  	void enqueue(DataType data);
  	DataType dequeue();
}; 


template<class DataType>
DataType Queue<DataType>::dequeue() { 
    	if(dequeueloc == enqueueloc) { 
      		cout << " -- Queue is empty.\n"; 
      		return 0;  
    	} 
    	dequeueloc++; 
    	return q[dequeueloc]; 
} 


template<class DataType>
Queue<DataType>::Queue(int len) { 
    	if(len > maxQsize) 
       		len = maxQsize; 
    	else if(len <= 0) 
       		len = 1;  
 
    	size = len; 
    	enqueueloc = dequeueloc = 0; 
  } 

template <class DataType>
void Queue<DataType>::enqueue(DataType data) { 
    	if(enqueueloc == size) { 
      		std::cout << " -- Queue is full.\n"; 
    	  	return;
	}
    	enqueueloc++; 
    	q[enqueueloc] = data; 
 
} 
