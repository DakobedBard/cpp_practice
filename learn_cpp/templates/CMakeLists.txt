cmake_minimum_required(VERSION 2.8)

#ADD_DEFINITIONS(
#    -std=c++11 # Or -std=c++0x
    # Other flags
#)



set(function_templates function_templates.cpp )
add_executable(function_templates ${function_templates} )

set(class_template_specialization class_template_specialization.cpp )
add_executable(class_template_specialization ${class_template_specialization} )

set(function_template_specialization function_template_specialization.cpp )
add_executable(function_template_specialization ${function_template_specialization} )

