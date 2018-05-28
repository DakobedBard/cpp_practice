cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

#set(template_class array.h array.cpp array_main.cpp )
set(template_class coloring.cpp )
add_executable(array ${template_class} )



