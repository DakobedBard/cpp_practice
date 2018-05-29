cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(adjacency_list adjacency_list.cpp )
add_executable(adjacency_list ${adjacency_list} )

set(adjacency_matrix adjacency_matrix.cpp )
add_executable(adjacency_matrix ${adjacency_matrix} )



set(primm primm.cpp )
add_executable(primm ${primm} )

set(union_find union_find.cpp )
add_executable(union_find ${union_find} )


