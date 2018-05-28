cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(nqueens nqueens2.cpp  )
add_executable(nqueens ${nqueens} )





