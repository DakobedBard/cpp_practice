cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(lambda lambda.cpp)
add_executable(lambda ${lambda})

set(lambda lambda2.cpp)
add_executable(lambda2 ${lambda} )



