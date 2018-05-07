cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)




set(stack stack.h stack_test.cpp Exception.h )
add_executable(stack ${stack} )


