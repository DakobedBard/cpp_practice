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
include CMakeFiles/union_find.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/union_find.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/union_find.dir/flags.make

CMakeFiles/union_find.dir/union_find.cpp.o: CMakeFiles/union_find.dir/flags.make
CMakeFiles/union_find.dir/union_find.cpp.o: union_find.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/graphs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/union_find.dir/union_find.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/union_find.dir/union_find.cpp.o -c /home/mddarr/aptitude/graphs/union_find.cpp

CMakeFiles/union_find.dir/union_find.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/union_find.dir/union_find.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/graphs/union_find.cpp > CMakeFiles/union_find.dir/union_find.cpp.i

CMakeFiles/union_find.dir/union_find.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/union_find.dir/union_find.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/graphs/union_find.cpp -o CMakeFiles/union_find.dir/union_find.cpp.s

# Object files for target union_find
union_find_OBJECTS = \
"CMakeFiles/union_find.dir/union_find.cpp.o"

# External object files for target union_find
union_find_EXTERNAL_OBJECTS =

union_find: CMakeFiles/union_find.dir/union_find.cpp.o
union_find: CMakeFiles/union_find.dir/build.make
union_find: CMakeFiles/union_find.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/graphs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable union_find"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/union_find.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/union_find.dir/build: union_find

.PHONY : CMakeFiles/union_find.dir/build

CMakeFiles/union_find.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/union_find.dir/cmake_clean.cmake
.PHONY : CMakeFiles/union_find.dir/clean

CMakeFiles/union_find.dir/depend:
	cd /home/mddarr/aptitude/graphs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/graphs /home/mddarr/aptitude/graphs /home/mddarr/aptitude/graphs /home/mddarr/aptitude/graphs /home/mddarr/aptitude/graphs/CMakeFiles/union_find.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/union_find.dir/depend

