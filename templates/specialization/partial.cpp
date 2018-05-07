// This program demonstrates partial template specialization.  

template <typename A,B>
struct test{};

template <typename B> 
struct test <int, B>{


};

// Here we will demonstrate instantiation of class templates..


template <typename DataType>
class foo{
  public:
	int x;
};






int main(){

}
