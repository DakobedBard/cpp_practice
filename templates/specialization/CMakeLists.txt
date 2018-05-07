cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(explicit_specialization.cpp exp.cpp )
add_executable(explicit_specialization.cpp ${explicit_specialization.cpp} )


set(partial.cpp partial.cpp )
add_executable(partial.cpp ${partial.cpp} )






