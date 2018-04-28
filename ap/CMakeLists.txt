cmake_minimum_required(VERSION 2.8)



set(Default default.cpp)


 

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(Default ap.cpp)
#add_executable(default ${Default} )


#set(Hide hide.cpp)
#add_executable(hide ${Hide} )

set(Output27 constructors.cpp)
add_executable(constructors ${Output27} )

set(new new.cpp)
add_executable(new ${new})

set(inheritance inheritance.cpp)
add_executable(inheritance ${inheritance})

set(virtual virtual.cpp)
add_executable(virtual ${virtual})
