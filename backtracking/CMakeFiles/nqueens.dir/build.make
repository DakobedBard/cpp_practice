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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/backtracking

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/backtracking

# Include any dependencies generated for this target.
include CMakeFiles/nqueens.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nqueens.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nqueens.dir/flags.make

CMakeFiles/nqueens.dir/nqueens2.cpp.o: CMakeFiles/nqueens.dir/flags.make
CMakeFiles/nqueens.dir/nqueens2.cpp.o: nqueens2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/backtracking/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nqueens.dir/nqueens2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nqueens.dir/nqueens2.cpp.o -c /home/mddarr/aptitude/backtracking/nqueens2.cpp

CMakeFiles/nqueens.dir/nqueens2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nqueens.dir/nqueens2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/backtracking/nqueens2.cpp > CMakeFiles/nqueens.dir/nqueens2.cpp.i

CMakeFiles/nqueens.dir/nqueens2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nqueens.dir/nqueens2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/backtracking/nqueens2.cpp -o CMakeFiles/nqueens.dir/nqueens2.cpp.s

# Object files for target nqueens
nqueens_OBJECTS = \
"CMakeFiles/nqueens.dir/nqueens2.cpp.o"

# External object files for target nqueens
nqueens_EXTERNAL_OBJECTS =

nqueens: CMakeFiles/nqueens.dir/nqueens2.cpp.o
nqueens: CMakeFiles/nqueens.dir/build.make
nqueens: CMakeFiles/nqueens.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/backtracking/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nqueens"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nqueens.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nqueens.dir/build: nqueens

.PHONY : CMakeFiles/nqueens.dir/build

CMakeFiles/nqueens.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nqueens.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nqueens.dir/clean

CMakeFiles/nqueens.dir/depend:
	cd /home/mddarr/aptitude/backtracking && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/backtracking /home/mddarr/aptitude/backtracking /home/mddarr/aptitude/backtracking /home/mddarr/aptitude/backtracking /home/mddarr/aptitude/backtracking/CMakeFiles/nqueens.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nqueens.dir/depend
