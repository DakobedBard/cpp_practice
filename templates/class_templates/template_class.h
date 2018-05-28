
#ifndef ARRAY_H
#define ARRAY_H

#include <assert.h>


template <class T>

/*
	In order for the compiler to use a template, it must see both a template definition (not jsut declaration) and the template type used to instantiate the template.  Also remember that C++ compiles files individually.  When the array.h header is #included in main, the template class definition is copied into main.cpp.  When the compiler sees that we need two template instances, Array<int> and Array<double> it will instantiate these and compile them as part of main.cpp.  However when it gets aroudn to cmopilling array.cpp seperately, it will have forgotten that we need an Array<int> and Array<double> so the template function is never instantiated.  Thus we get a linker error.  

One solution is to put all of your template class code in the header file.  When you #include the header file all of the template code will be in one place.  Upside of this solution is that it is simple.  Downside is that if the template class is used in many places you will have many local copies of the template class, which can increase your compile and linke times.  
  
If you feel that putting the Array.cpp code into the Array.h header makes the header too long/messy, an alternative is to rename Array.cpp to Array.inl (.inl stands for inline), and then include Array.inl from the bottom of the Array.h header. That yields the same result as putting all the code in the header, but helps keep things a little cleaner.



*/


class Array{
  private:
	int m_length;
	T *m_data;

  public:
	Array(){
		m_length = 0;
		m_data = nullptr;
	}

	Array(int length){
		m_data = new T[length];
		m_length = length;
	}
	~Array(){
		delete [] m_data;
	}

	void Erase(){
		delete[] m_data;
		
		m_data = nullptr;
		m_length = 0;
	}
	T& operator[](int index){
		assert(index >=0 && index <m_length);
		return m_data[index];
	}

	int getLength();  //

	


};



#endif

