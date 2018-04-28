cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

#set(complex main.cpp Complex.h)
#add_executable(complex ${complex} )

set(stream_buffers stream_buffers.cpp )
add_executable(stream_buffers ${stream_buffers} )

set(geeks_stream geek_stream.cpp )
add_executable(geeks_stream ${geeks_stream} )

set(input_stream input_stream.cpp )
add_executable(input_stream ${input_stream} )



