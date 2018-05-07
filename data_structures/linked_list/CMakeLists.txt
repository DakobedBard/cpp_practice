cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(LinkedList LinkedList.h main.cpp )
add_executable(linked_list ${LinkedList} )


set(LinkedList my_linked_list.h test_list.cpp )
add_executable(linkedlist ${LinkedList} )

