cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)





set(sizeof sizeof.cpp)
add_executable(sizeof ${sizeof} )


set(operations operations.cpp)
add_executable(operations ${operations} )

set(vectors vectors.cpp)
add_executable(vectors ${vectors} )

set(Reverse reverse_array.cpp )
add_executable(Reverse ${Reverse} )



