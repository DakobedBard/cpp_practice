cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(const_member_functions const_member_functions.cpp  )
add_executable(const_member_functions ${const_member_functions} )

set(function_overloading function_overloading.cpp  )
add_executable(function_overloading ${function_overloading} )


set(const_int const_int.cpp  )
add_executable(const_int ${const_int} )




