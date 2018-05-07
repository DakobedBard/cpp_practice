#include <iostream>

/*

This program demonstrates move constructors and move assignment operators... 


*/


template <class DataType>


class auto_ptr{

	DataType* m_ptr;

  public:
	auto_ptr(DataType* ptr = nullptr):m_ptr(ptr){}

	~auto_ptr(){
		delete m_ptr;
	}

	// Copy constructor, do copy of a.m_ptr to m_ptr

	auto_ptr(const auto_ptr& other){
		m_ptr = new DataType;
		*m_ptr = *other.m_ptr;
	}
	
	// Move construtor.. We transfer owner ship of other.m_ptr to m_ptr..

	auto_ptr(auto_ptr&& other):m_ptr(other.m_ptr){
		other.m_ptr = nullptr;				// We have stolen the pointer from other
	}	

	auto_ptr& operator=(const auto_ptr& other){
		if(&other == this)					// Check for self assignment detection
			return *this;
		
		// Release any resource we're holding..

		delete m_ptr;
	
		//Copy the resource
		m_ptr = new DataType;
		*m_ptr = *other.m_ptr;

		return *this;
	}
	// Move assignment... transfer ownership of other.m_ptr to m_ptr..

	auto_ptr& operator = (auto_ptr&& other){
		
		if(&other == this)			// check for self assignent... 
			return *this;
		
		// Release any resource we are holding...

		delete m_ptr;

		// transfer ownership of other.m_ptr to m_ptr...

		m_ptr = other.m_ptr;
		other.m_ptr = nullptr;
		

		return *this;
	}
	
	DataType& operator*() const {return *m_ptr;}
	DataType* operator->() const{return m_ptr;}


};


class Resource{

  public:

	Resource() {std::cout << "Resource acquired\n";}
	~Resource(){std::cout << "Resource destroyed\n";}

};

auto_ptr<Resource> generateResource(){
	auto_ptr<Resource> res(new Resource);
	return res; 	// this return value will invoke the move constructor....

}




int main(){
	auto_ptr<Resource> mainres;
	mainres = generateResource();
	return 0;
}
