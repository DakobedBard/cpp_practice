# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/pointers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/pointers

# Include any dependencies generated for this target.
include CMakeFiles/chain.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chain.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chain.dir/flags.make

CMakeFiles/chain.dir/chain_function_calls.cpp.o: CMakeFiles/chain.dir/flags.make
CMakeFiles/chain.dir/chain_function_calls.cpp.o: chain_function_calls.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/pointers/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chain.dir/chain_function_calls.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chain.dir/chain_function_calls.cpp.o -c /home/mddarr/aptitude/pointers/chain_function_calls.cpp

CMakeFiles/chain.dir/chain_function_calls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chain.dir/chain_function_calls.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/pointers/chain_function_calls.cpp > CMakeFiles/chain.dir/chain_function_calls.cpp.i

CMakeFiles/chain.dir/chain_function_calls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chain.dir/chain_function_calls.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/pointers/chain_function_calls.cpp -o CMakeFiles/chain.dir/chain_function_calls.cpp.s

# Object files for target chain
chain_OBJECTS = \
"CMakeFiles/chain.dir/chain_function_calls.cpp.o"

# External object files for target chain
chain_EXTERNAL_OBJECTS =

chain: CMakeFiles/chain.dir/chain_function_calls.cpp.o
chain: CMakeFiles/chain.dir/build.make
chain: CMakeFiles/chain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/pointers/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chain"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chain.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chain.dir/build: chain

.PHONY : CMakeFiles/chain.dir/build

CMakeFiles/chain.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chain.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chain.dir/clean

CMakeFiles/chain.dir/depend:
	cd /home/mddarr/aptitude/pointers && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers/CMakeFiles/chain.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chain.dir/depend
