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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/dynamic_programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/dynamic_programming

# Include any dependencies generated for this target.
include CMakeFiles/chain_multiplication.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chain_multiplication.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chain_multiplication.dir/flags.make

CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.o: CMakeFiles/chain_multiplication.dir/flags.make
CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.o: chain_multiplication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/dynamic_programming/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.o -c /home/mddarr/aptitude/dynamic_programming/chain_multiplication.cpp

CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/dynamic_programming/chain_multiplication.cpp > CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.i

CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/dynamic_programming/chain_multiplication.cpp -o CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.s

# Object files for target chain_multiplication
chain_multiplication_OBJECTS = \
"CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.o"

# External object files for target chain_multiplication
chain_multiplication_EXTERNAL_OBJECTS =

chain_multiplication: CMakeFiles/chain_multiplication.dir/chain_multiplication.cpp.o
chain_multiplication: CMakeFiles/chain_multiplication.dir/build.make
chain_multiplication: CMakeFiles/chain_multiplication.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/dynamic_programming/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chain_multiplication"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chain_multiplication.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chain_multiplication.dir/build: chain_multiplication

.PHONY : CMakeFiles/chain_multiplication.dir/build

CMakeFiles/chain_multiplication.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chain_multiplication.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chain_multiplication.dir/clean

CMakeFiles/chain_multiplication.dir/depend:
	cd /home/mddarr/aptitude/dynamic_programming && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/dynamic_programming /home/mddarr/aptitude/dynamic_programming /home/mddarr/aptitude/dynamic_programming /home/mddarr/aptitude/dynamic_programming /home/mddarr/aptitude/dynamic_programming/CMakeFiles/chain_multiplication.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chain_multiplication.dir/depend

