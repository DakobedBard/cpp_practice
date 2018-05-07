cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(umap umap.cpp )
add_executable(umap ${umap} )


set(string_frequency string_frequency.cpp )
add_executable(string_frequency ${string_frequency} )

set(intersection intersection.cpp )
add_executable(intersection ${intersection} )
