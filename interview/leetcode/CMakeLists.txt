cmake_minimum_required(VERSION 2.8)

#ADD_DEFINITIONS(
#    -std=c++11 # Or -std=c++0x
    # Other flags
#)



set(TwoSum TwoSum.cpp )
add_executable(TwoSum ${TwoSum} )

set(two_pointers two_pointers.cpp )
add_executable(two_pointers ${two_pointers} )


