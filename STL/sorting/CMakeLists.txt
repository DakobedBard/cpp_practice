cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(transform transform.cpp)
add_executable(transform ${transform} )

set(std_transform std_transform.cpp)
add_executable(std_transform ${std_transform} )

set(matrix matrix.cpp)
add_executable(matrix ${matrix} )




