cmake_minimum_required(VERSION 2.8)

#ADD_DEFINITIONS(
#    -std=c++11 # Or -std=c++0x
    # Other flags
#)



set(minimum_height minimum_height.cpp )
add_executable(minimum_height ${minimum_height} )

set(contains_duplicate contains_duplicate.cpp )
add_executable(contains_duplicate ${contains_duplicate} )


