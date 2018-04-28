cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(Default ap.cpp)
#add_executable(default ${Default} )


#set(Hide hide.cpp)
#add_executable(hide ${Hide} )

set(test test.cpp)
add_executable(test ${test} )

set(output output.cpp)
add_executable(output ${output} )

