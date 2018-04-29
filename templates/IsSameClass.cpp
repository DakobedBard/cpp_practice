/*
Implement a template boolean IsSameClass() that takes class A and B as template parameters.  It should compare class A andB and return false when they are diffrent classes and true if they are the same class.  



*/




#include <iostream>


template <typename T, typename U>
struct is_same{
	static const bool value = false;
};

template<typename T>
struct is_same<T, T>
{
	static const bool value = true;
};


template<class A, class B>

bool isSameClass(){
	return is_same<A, B>::value;
}


class queer_class{

};

class gay_class{

};

int main(){
	bool g = isSameClass<gay_class, gay_class>();
	std::cout << "is same class? " << g << std::endl;
}
