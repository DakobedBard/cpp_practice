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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/operators

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/operators

# Include any dependencies generated for this target.
include CMakeFiles/assignment_operator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assignment_operator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignment_operator.dir/flags.make

CMakeFiles/assignment_operator.dir/assignment_operator.cpp.o: CMakeFiles/assignment_operator.dir/flags.make
CMakeFiles/assignment_operator.dir/assignment_operator.cpp.o: assignment_operator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/operators/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assignment_operator.dir/assignment_operator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment_operator.dir/assignment_operator.cpp.o -c /home/mddarr/aptitude/operators/assignment_operator.cpp

CMakeFiles/assignment_operator.dir/assignment_operator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment_operator.dir/assignment_operator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/operators/assignment_operator.cpp > CMakeFiles/assignment_operator.dir/assignment_operator.cpp.i

CMakeFiles/assignment_operator.dir/assignment_operator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment_operator.dir/assignment_operator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/operators/assignment_operator.cpp -o CMakeFiles/assignment_operator.dir/assignment_operator.cpp.s

# Object files for target assignment_operator
assignment_operator_OBJECTS = \
"CMakeFiles/assignment_operator.dir/assignment_operator.cpp.o"

# External object files for target assignment_operator
assignment_operator_EXTERNAL_OBJECTS =

assignment_operator: CMakeFiles/assignment_operator.dir/assignment_operator.cpp.o
assignment_operator: CMakeFiles/assignment_operator.dir/build.make
assignment_operator: CMakeFiles/assignment_operator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/operators/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable assignment_operator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignment_operator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignment_operator.dir/build: assignment_operator

.PHONY : CMakeFiles/assignment_operator.dir/build

CMakeFiles/assignment_operator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assignment_operator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assignment_operator.dir/clean

CMakeFiles/assignment_operator.dir/depend:
	cd /home/mddarr/aptitude/operators && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/operators /home/mddarr/aptitude/operators /home/mddarr/aptitude/operators /home/mddarr/aptitude/operators /home/mddarr/aptitude/operators/CMakeFiles/assignment_operator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assignment_operator.dir/depend

