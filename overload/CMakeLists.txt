cmake_minimum_required(VERSION 2.8)



ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



#set(overload overload.cpp)
#add_executable(overload ${overload})



#set(overload_comparisson overload_comparisson.cpp)
#add_executable(overload_comparisson ${overload_comparisson})


#set(subscript_overload subscript_overload.cpp)
#add_executable(subscript_overload ${subscript_overload})


#set(paranthesis_operator paranthesis_operator.cpp)
#add_executable(paranthesis_operator ${paranthesis_operator})



set(functors functors.cpp)
add_executable(functors ${functors})

set(overloading_typecasts overloading_typecasts.cpp)
add_executable(overloading_typecasts ${overloading_typecasts})

