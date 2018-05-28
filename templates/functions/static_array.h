#include <iostream>

template <class T, int size>		// Size is the expression paramter\

class StaticArray{
  private:
	T m_array[size];
  public:
	T* getArray(){
		return m_array;
	}
	T& operator[](int index){
		return m_array[index];
	}

};


template <typename T, int size>
void print(StaticArray<T,size> &array){
	for(int count =0; count < size; ++count)
		std::cout << array[count] << ' ' << std::endl;
}


