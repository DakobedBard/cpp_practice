cmake_minimum_required(VERSION 2.8)

#ADD_DEFINITIONS(
#    -std=c++11 # Or -std=c++0x
    # Other flags
#)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(exception_destruction exception_destruction.cpp )
add_executable(exception_destruction ${exception_destruction} )

set(standard_exception standard_exception.cpp )
add_executable(standard_exception ${standard_exception} )


set(exception_in_constructor exception_in_constructor.cpp)
add_executable(exception_in_constructor ${exception_in_constructor})

set(output output.cpp)
add_executable(output ${output})


set(base_exceptions base_exceptions.cpp)
add_executable(base_exceptions ${base_exceptions})

set(stack_unwind stack_unwind.cpp)
add_executable(stack_unwind ${stack_unwind})


