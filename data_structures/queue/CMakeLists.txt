cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)




set(queue queue.h queue_test.cpp )
add_executable(queue ${queue} )


