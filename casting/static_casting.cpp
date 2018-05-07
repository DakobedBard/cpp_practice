/*

const_cast, 
static_cast
reinterpret_cast



regular cast vs static_cast vs dynamic_cast...

static_cast is used for cases where you basically want to reverse an implicit conversion, with a few restrictions and additions. static_cast performs no runtime checks. This should be used if you know that you refer to an object of a specific type, and thus a check would be unnecessary. Example:


dynamic_cast is useful when you don't know what the dynamic type of the object is. It returns a null pointer if the object referred to doesn't contain the type casted to as a base class (when you cast to a reference, a bad_cast exception is thrown in that case).



You cannot use dynamic_cast if you downcast (cast to a derived class) and the argument type is not polymorphic. For example, the following code is not valid, because Base doesn't contain any virtual function:

Regular Cast
These casts are also called C-style cast. A C-style cast is basically identical to trying out a range of sequences of C++ casts, and taking the first C++ cast that works, without ever considering dynamic_cast. Needless to say, this is much more powerful as it combines all of const_cast, static_cast and reinterpret_cast, but it's also unsafe, because it does not use dynamic_cast.

In addition, C-style casts not only allow you to do this, but they also allow you to safely cast to a private base-class, while the "equivalent" static_cast sequence would give you a compile-time error for that.

Some people prefer C-style casts because of their brevity. I use them for numeric casts only, and use the appropriate C++ casts when user defined types are involved, as they provide stricter checking.








static_cast<target type>(expression)

*/

int main(){

}
