

#include <iostream>


//Template class declaration and definition

template <class DataType>
class Formatter{
	DataType* m_t;
  public:
	Formatter(DataType* t): m_t(t){}
	void print(){
		std::cout << *m_t << std::endl;
	}
};

// Specialization of template class for type char*
template<> class Formatter <char*>
{
	char** m_t;
  public:
	Formatter(char** t):m_t(t){}
	void print(){
		std::cout << "Char value: " << **m_t << std::endl;
	}
};


int main(){
	int i = 157;
	Formatter<int> formatter1(&i);
	
	char str[10] = "string1";
	char* str1 = str;

	// Use the specialized template

	Formatter<char*> formatter2(&str1);
	formatter1.print();		// 157 
	formatter2.print();		// Char value : s

}
