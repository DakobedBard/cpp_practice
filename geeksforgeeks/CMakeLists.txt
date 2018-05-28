cmake_minimum_required(VERSION 2.8)



ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)




set(all_pairs all_pairs.cpp)
add_executable(all_pairs ${all_pairs})

