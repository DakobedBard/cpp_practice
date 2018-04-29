cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



set(copy copy_elison.cpp  )
add_executable(copy_elison ${copy} )



#set(declare declare.cpp  )
#add_executable(declare ${declare} )

#set(rule_of_five rule_of_five.cpp  )
#add_executable(rule_of_five ${rule_of_five} )




