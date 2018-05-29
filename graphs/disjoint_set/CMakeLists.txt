cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(union_find_test union_find_test.cpp )
add_executable(union_find_test ${union_find_test} )

