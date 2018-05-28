cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(merge_sort merge_sort.cpp)
add_executable(merge_sort ${merge_sort} )

set(bubble_sort bubble_sort.cpp)
add_executable(bubble_sort ${bubble_sort} )

set(insertion_sort insertion_sort.cpp)
add_executable(insertion_sort ${insertion_sort} )

set(quick_sort quick_sort.cpp)
add_executable(quick_sort ${quick_sort} )

set(selection_sort selection_sort.cpp)
add_executable(selection_sort ${selection_sort} )
