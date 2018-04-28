#include <iostream>
/*
The inline specifier makes the declarations from the nested namespace appear exactly as if they had been declared in the enclosing namespace. This means it drags out the declaration (“var” in the above example) from a nested namespace to the containing namespace.

Advantages of using inline namespaces:

Avoid verbose :Consider the above code, if you want to print “var”, you write:
  cout << ns1::ns2::ns3::var;
This looks good only if namespace's names are short as in the above example. But by using inline with namespaces there is no need to type the entire namespace as given above or use the "using" directive.

Support of Library :The inline namespace mechanism is intended to support library evolution by providing a mechanism that supports a form of versioning. Refer this for details.


"Using" directive

This same behavior (same as inline namesapces) can also be achieved by using the "using" declarative inside namespaces. A using-directive that names the inline namespace is implicitly inserted in the enclosing namespace (similar to the implicit using-directive for the unnamed namespace). Consider the following C++ code:


*/



namespace name1{
	inline namespace name2{
		int var = 10;
	}
}

namespace ns1
{
    inline namespace ns2
    {
        inline namespace ns3
        {
            int var = 12;
        }
    }
}


int main(){
	std::cout  <<  name1::var << std::endl;

	std::cout << "inside the inline namespace? " << ns1::var << std::endl;
	return 0;

}
