cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(sort_vector sort_vector.cpp)
add_executable(sort_vector ${sort_vector} )


set(comparator comparator.cpp)
add_executable(comparator ${comparator} )



