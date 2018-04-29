#include <memory>    // for std::unique_ptr
#include <stdlib.h>  // for EXIT_SUCCESS
#include <iostream>

using namespace std;
int main(int argc, char **argv){

	unique_ptr<int> x(new int(5));
	cout << "x: " << x.get() << endl;

	unique_ptr<int> y(x.release());		// y takes ownership, while x abdicates it...

	cout << "x: " << x.get() << endl;
	cout << "y: " << y.get() << endl;

	unique_ptr<int> z(new int(10));
		
	z.reset(y.release());			// z deletes its old pointer and takes ownership of y's pointer..
						//  while y abdicates its ownership

	return EXIT_SUCCESS;
}
