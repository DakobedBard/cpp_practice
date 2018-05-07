cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(LinkedList  LinkedList.h ll_test.cpp )
add_executable(LinkedList ${LinkedList} )

set(bst  bst.h bst_test.cpp )
add_executable(bst ${bst} )

set(priority_queue  bst.h priority_queue.h heap_test.cpp )
add_executable(priority_queue ${priority_queue} )


