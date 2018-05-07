cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



#set(find_duplicates find_duplicates.cpp )
#add_executable(find_duplicates ${find_duplicates} )

set(two_sum two_sum.cpp )
add_executable(two_sum ${two_sum} )




