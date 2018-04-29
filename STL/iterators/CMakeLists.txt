cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(iterator iterator.cpp)
add_executable(iterator ${iterator} )



set(list_iterator list_iterator.cpp)
add_executable(list_iterator ${list_iterator} )


set(Linked_List Linked_List.cpp)
add_executable(Linked_List ${Linked_List} )
