cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)





set(fraction Fraction.cpp)
add_executable(fraction ${fraction} )




