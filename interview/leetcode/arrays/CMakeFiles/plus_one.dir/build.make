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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/interview/leetcode/arrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/interview/leetcode/arrays

# Include any dependencies generated for this target.
include CMakeFiles/plus_one.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/plus_one.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/plus_one.dir/flags.make

CMakeFiles/plus_one.dir/plus_one.cpp.o: CMakeFiles/plus_one.dir/flags.make
CMakeFiles/plus_one.dir/plus_one.cpp.o: plus_one.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/interview/leetcode/arrays/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/plus_one.dir/plus_one.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/plus_one.dir/plus_one.cpp.o -c /home/mddarr/aptitude/interview/leetcode/arrays/plus_one.cpp

CMakeFiles/plus_one.dir/plus_one.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plus_one.dir/plus_one.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/interview/leetcode/arrays/plus_one.cpp > CMakeFiles/plus_one.dir/plus_one.cpp.i

CMakeFiles/plus_one.dir/plus_one.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plus_one.dir/plus_one.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/interview/leetcode/arrays/plus_one.cpp -o CMakeFiles/plus_one.dir/plus_one.cpp.s

# Object files for target plus_one
plus_one_OBJECTS = \
"CMakeFiles/plus_one.dir/plus_one.cpp.o"

# External object files for target plus_one
plus_one_EXTERNAL_OBJECTS =

plus_one: CMakeFiles/plus_one.dir/plus_one.cpp.o
plus_one: CMakeFiles/plus_one.dir/build.make
plus_one: CMakeFiles/plus_one.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/interview/leetcode/arrays/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable plus_one"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/plus_one.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/plus_one.dir/build: plus_one

.PHONY : CMakeFiles/plus_one.dir/build

CMakeFiles/plus_one.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/plus_one.dir/cmake_clean.cmake
.PHONY : CMakeFiles/plus_one.dir/clean

CMakeFiles/plus_one.dir/depend:
	cd /home/mddarr/aptitude/interview/leetcode/arrays && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/interview/leetcode/arrays /home/mddarr/aptitude/interview/leetcode/arrays /home/mddarr/aptitude/interview/leetcode/arrays /home/mddarr/aptitude/interview/leetcode/arrays /home/mddarr/aptitude/interview/leetcode/arrays/CMakeFiles/plus_one.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/plus_one.dir/depend

