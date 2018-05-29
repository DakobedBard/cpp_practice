cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(binary_tree  binary_tree.h binary_tree_test.cpp )
add_executable(binary_tree ${binary_tree} )


set(linked_list  linked_list.h linked_list_test.cpp )
add_executable(linked_list ${linked_list} )


set(heap  heap.h heap_test.cpp )
add_executable(heap ${heap} )


set(graph  graph.h graph_test.cpp )
add_executable(graph ${graph} )


set(adj_matrix  graph.h adj_matrix_test.cpp )
add_executable(adj_matrix ${adj_matrix} )


set(adj_list  graph.h adj_list_test.cpp )
add_executable(adj_list ${adj_list} )


set(prim   prim.cpp )
add_executable(prim ${prim} )
