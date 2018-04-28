cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)





set(3darrays 3darrays.cpp)
add_executable(3darrays ${3darrays} )




