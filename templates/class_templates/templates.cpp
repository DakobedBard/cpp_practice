


#include "array.h"
#include "array.cpp"


template class Array <int>;
template class Array<double>;

/*

The "template class" command causes the compiler to explicitly instantiate the template class.  In the above code, the compiler will stencil out both Array<int> and Array<double> inside of templates.cpp.





*/
