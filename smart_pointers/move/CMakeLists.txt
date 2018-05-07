cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)


set(move_constructor move_constructor.cpp  )
add_executable(move_constructor ${move_constructor} )





set(Dynamic_Array_Test Dynamic_Array_Test.cpp  )
add_executable(Dynamic_Array_Test ${Dynamic_Array_Test} )


set(Move_Dynamic_Array_Test  move_dynamic_array_test.cpp move_Dynamic_Array.h   )
add_executable(Move_Dynamic_Array_Test ${Move_Dynamic_Array_Test} )

set(std_move  std_move.cpp   )
add_executable(std_move ${std_move} )
