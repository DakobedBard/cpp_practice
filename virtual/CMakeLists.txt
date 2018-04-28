cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(destructors destructors.cpp  )
add_executable(destructors ${destructors} )


set(derived_virtual derived_virtual.cpp  )
add_executable(derived_virtual ${derived_virtual} )


set(run_time_polymorphism run_time_polymorphism.cpp  )
add_executable(run_time_polymorphism ${run_time_polymorphism} )

set(private_virtual private_virtual.cpp  )
add_executable(private_virtual ${private_virtual} )

set(virtual_class virtual_class.cpp  )
add_executable(virtual_class ${virtual_class} )


