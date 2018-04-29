/*

This program will demonstrate cyclic references...



*/


struct A{
	std::shared_ptr<A> ptr;

};

int main(){

}
