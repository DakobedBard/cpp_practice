cmake_minimum_required(VERSION 2.8)


ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(virtual virtual.cpp)
add_executable(virtual ${virtual})

set(pure pure.cpp)
add_executable(pure ${pure})

set(templates templates7.cpp)
add_executable(templates7 ${templates})

#set(templates templates8.cpp)
#add_executable(templates8 ${templates})

#set(templates templates9.cpp)
#add_executable(templates9 ${templates})

#set(templates templates10.cpp)
#add_executable(templates10 ${templates})
