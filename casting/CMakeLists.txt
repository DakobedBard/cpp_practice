cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(static_casting static_casting.cpp)
add_executable(static_casting ${static_casting} )

set(type_conversion type_conversion.cpp)
add_executable(type_conversion ${type_conversion} )

set(inheritance_casting inheritance_casting.cpp)
add_executable(inheritance_casting ${inheritance_casting} )

set(const_casting const_cast.cpp)
add_executable(const_casting ${const_casting} )



set(dynamic_cast dynamic_cast.cpp)
add_executable(dynamic_cast ${dynamic_cast} )
