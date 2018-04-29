cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)


set(shared_cycle shared_cycle.cpp  )
add_executable(shared_cycle ${shared_cycle} )










