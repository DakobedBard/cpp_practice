cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )


#set(unique unique.cpp  )
#add_executable(unique ${unique} )



#set(uniquefail unique3.cpp  )
#add_executable(unique3 ${uniquefail} )

#set(copy_semantics copy_semantics.cpp  )
#add_executable(copy_semantics ${copy_semantics} )


set(move_semantics move_semantics.cpp  )
add_executable(move_semantics ${move_semantics} )

set(move_semantics2 move_semantics2.cpp  )
add_executable(move_semantics2 ${move_semantics2} )

set(rvalue_references rvalue_references.cpp  )
add_executable(rvalue_references ${rvalue_references} )


set(return_rvalue_ref return_rvalue_ref.cpp  )
add_executable(return_rvalue_ref ${return_rvalue_ref} )










