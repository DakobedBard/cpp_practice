cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(copy_swap copy_swap.cpp )
add_executable(copy_swap ${copy_swap} )

set(conversion_operator conversion_operator.cpp )
add_executable(conversion_operator ${conversion_operator} )



