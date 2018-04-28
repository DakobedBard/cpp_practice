cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(chain chain_function_calls.cpp )
add_executable(chain ${chain} )


set(delete_this delete_this.cpp )
add_executable(delete_this ${delete_this} )

set(nullptr nullptr.cpp )
add_executable(nullptr ${nullptr} )



set(dangling_pointers dangling_pointers.cpp )
add_executable(dangling_pointers ${dangling_pointers} )




