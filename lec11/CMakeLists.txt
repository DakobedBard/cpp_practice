cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )


set(arrays Complex.cpp Complex.h testcomplex.cpp )
add_executable(arrays ${arrays} )
