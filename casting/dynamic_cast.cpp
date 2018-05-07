/*

The dynamic_cast keyword is used to casts a datum from one pointer or reference of a polymorphic type to another, similar to static_cast but performing a type safety check at runtime to ensure the validity of the cast. Generally for the purpose of casting a pointer or reference up the inheritance chain (inheritance hierarchy) in a safe way, including performing so-called cross casts.

  TYPE& dynamic_cast<TYPE&> (object);
  TYPE* dynamic_cast<TYPE*> (object);



The target type must be a pointer or reference type, and the expression must evaluate to a pointer or reference.

If you attempt to cast to a pointer type, and that type is not an actual type of the argument object, then the result of the cast will be NULL.

If you attempt to cast to a reference type, and that type is not an actual type of the argument object, then the cast will throw a std::bad_cast exception.

When it doesn't fail, dynamic cast returns a pointer or reference of the target type to the object to which expression referred.

*/


struct A{
	virtual void f(){}
};

struct B: public A{

};

struct C {

};


void f(){
	A a;
	B b;

	A* ap = &b;
	B* b1 = dynamic_cast<B*> (&a);		// NULL , this casting will never succeed
	B* b2 = dynamic_cast<B*> (ap);		// 'b'
	C* c = dynamic_cast<C*> (ap);		// NULL ..
	
	A& ar = dynamic_cast<A&> (*ap);		// Ok
	B& br = dynamic_cast<B&> (*ap);		// Ok
	C& cr = dynamic_cast<C&> (*ap);		// std::bad_cast


}



/* 

reinterpret_cast is used to simply cast one type bitwise to another.  Any pointer or integral type can be cast to any other with reinterpret cast, easily allowing for misused.  

  TYPE reinterpret_cast<TYPE> (object);


*/











int main(){


	int a = 0xffe38024;
int* b = reinterpret_cast<int*>(a);
}


















