cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)




set(unique unique.cpp  )
add_executable(unique ${unique} )

set(unique_vec unique_vec.cpp  )
add_executable(unique_vec ${unique_vec} )











