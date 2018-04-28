cmake_minimum_required(VERSION 2.8)

#ADD_DEFINITIONS(
#    -std=c++11 # Or -std=c++0x
    # Other flags
#)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(template_class template_class.cpp )
add_executable(template_class ${template_class} )





set(class_template class_template.cpp )
add_executable(class_template ${class_template} )


set(function_template function_template.cpp )
add_executable(function_template ${function_template} )
