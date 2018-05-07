cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)




set(weak_pointers weak_pointers.cpp  )
add_executable(weak_pointers ${weak_pointers} )












