cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)


set(shared_cycle shared_cycle.cpp  )
add_executable(shared_cycle ${shared_cycle} )


set(shared_vector shared_vector.cpp  )
add_executable(shared_vector ${shared_vector} )

set(shared_ptr shared_ptr.cpp  )
add_executable(shared_ptr ${shared_ptr} )


set(weak_cycle weak_cycle.cpp  )
add_executable(weak_cycle ${weak_cycle} )









