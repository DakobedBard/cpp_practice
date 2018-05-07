cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)


set(Heap heap.cpp heap.h main.cpp )
add_executable(heap ${Heap} )

#set(IntHeap int_heap.cpp )
#add_executable(int_heap ${IntHeap} )



set(MinHeap min_heap.cpp   )
add_executable(min_heap ${MinHeap} )

