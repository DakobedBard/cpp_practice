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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/graphs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/graphs

# Include any dependencies generated for this target.
include CMakeFiles/adjacency_matrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/adjacency_matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/adjacency_matrix.dir/flags.make

CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.o: CMakeFiles/adjacency_matrix.dir/flags.make
CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.o: adjacency_matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/graphs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.o -c /home/mddarr/aptitude/graphs/adjacency_matrix.cpp

CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/graphs/adjacency_matrix.cpp > CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.i

CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/graphs/adjacency_matrix.cpp -o CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.s

# Object files for target adjacency_matrix
adjacency_matrix_OBJECTS = \
"CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.o"

# External object files for target adjacency_matrix
adjacency_matrix_EXTERNAL_OBJECTS =

adjacency_matrix: CMakeFiles/adjacency_matrix.dir/adjacency_matrix.cpp.o
adjacency_matrix: CMakeFiles/adjacency_matrix.dir/build.make
adjacency_matrix: CMakeFiles/adjacency_matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/graphs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable adjacency_matrix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/adjacency_matrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/adjacency_matrix.dir/build: adjacency_matrix

.PHONY : CMakeFiles/adjacency_matrix.dir/build

CMakeFiles/adjacency_matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/adjacency_matrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/adjacency_matrix.dir/clean

CMakeFiles/adjacency_matrix.dir/depend:
	cd /home/mddarr/aptitude/graphs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/graphs /home/mddarr/aptitude/graphs /home/mddarr/aptitude/graphs /home/mddarr/aptitude/graphs /home/mddarr/aptitude/graphs/CMakeFiles/adjacency_matrix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/adjacency_matrix.dir/depend

