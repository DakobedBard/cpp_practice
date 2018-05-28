cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++14 # Or -std=c++0x
    # Other flags
)



set(unique_pointers unique_pointers.cpp )
add_executable(unique_pointers ${unique_pointers} )

set(return_unique return_unique.cpp )
add_executable(return_unique ${return_unique} )

set(pass_unique pass_unique.cpp )
add_executable(pass_unique ${pass_unique} )
