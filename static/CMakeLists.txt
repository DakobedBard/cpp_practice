cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

set(ref ref.cpp  )
add_executable(ref ${ref} )

set(static_member_variables static_member_variables.cpp  )
add_executable(static_member_variables ${static_member_variables} )





