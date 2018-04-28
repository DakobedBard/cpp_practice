#include <memory>    // for std::unique_ptr
#include <stdlib.h>  // for EXIT_SUCCESS

using namespace std;
typedef struct {  int a, b; } IntPair;

int main(int argc, char **argv) {
  	unique_ptr<int> x(new int(5));

  	// Return a pointer to the pointed to object

	int *x = x.get()

	// Return a reference to the pointed to object

	int val = *x;

	unique_ptr<IntPair> ip(new IntPair);
	ip>a = 100;
}
