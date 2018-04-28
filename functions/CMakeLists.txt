cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(functor functor.cpp)
add_executable(functor ${functor} )



set(functor_class functor_class.cpp)
add_executable(functor_class ${functor_class} )

