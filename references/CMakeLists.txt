cmake_minimum_required(VERSION 2.8)

#ADD_DEFINITIONS(
#    -std=c++11 # Or -std=c++0x
    # Other flags
#)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(static_ref static_ref.cpp )
add_executable(static_ref ${static_ref} )

set(pass_by_ref pass_by_ref.cpp  )
add_executable(pass_by_ref ${pass_by_ref} )
