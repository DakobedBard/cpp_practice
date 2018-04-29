cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(inheritance inheritance.cpp  )
add_executable(inheritance ${inheritance} )

set(constructors constructors.cpp  )
add_executable(constructors ${constructors} )

set(isderivedfrom isderivedfrom.cpp  )
add_executable(isderivedfrom ${isderivedfrom} )


set(hide_overloaded_methods hide_overloaded_methods.cpp  )
add_executable(hide_overloaded_methods ${hide_overloaded_methods} )

set(private_inheritance private_inheritance.cpp  )
add_executable(private_inheritance ${private_inheritance} )


