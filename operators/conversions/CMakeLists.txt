cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(implicit_conversion implicit_conversion.cpp )
add_executable(implicit_conversion ${implicit_conversion} )

#set(conversion_template conversion_template.cpp )
#add_executable(conversion_template ${conversion_template} )


#set(array_of_function_pointers array_of_function_pointers.cpp)
#add_executable(array_of_function_pointers ${array_of_function_pointers})

#set(fptr, fptr.cpp)
#add_executable(fptr, ${fptr})


#set(qsort qsort.cpp )
#add_executable(qsort ${qsort} )
