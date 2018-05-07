cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(bst  bst.h bst_test.cpp )
add_executable(bst ${bst} )


