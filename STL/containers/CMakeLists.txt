cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)





set(templated_vector_class templated_vector_class.cpp)
add_executable(templated_vector_class ${templated_vector_class} )




