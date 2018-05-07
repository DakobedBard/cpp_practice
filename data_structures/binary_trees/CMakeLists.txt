cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



#set(binary_tree binary_tree.cpp  )
#add_executable(binary_tree ${binary_tree} )




set(bst  bst.h bst_main.cpp )
add_executable(bst ${bst} )


