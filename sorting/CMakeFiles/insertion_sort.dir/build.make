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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/sorting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/sorting

# Include any dependencies generated for this target.
include CMakeFiles/insertion_sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/insertion_sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/insertion_sort.dir/flags.make

CMakeFiles/insertion_sort.dir/insertion_sort.cpp.o: CMakeFiles/insertion_sort.dir/flags.make
CMakeFiles/insertion_sort.dir/insertion_sort.cpp.o: insertion_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/sorting/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/insertion_sort.dir/insertion_sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/insertion_sort.dir/insertion_sort.cpp.o -c /home/mddarr/aptitude/sorting/insertion_sort.cpp

CMakeFiles/insertion_sort.dir/insertion_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/insertion_sort.dir/insertion_sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/sorting/insertion_sort.cpp > CMakeFiles/insertion_sort.dir/insertion_sort.cpp.i

CMakeFiles/insertion_sort.dir/insertion_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/insertion_sort.dir/insertion_sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/sorting/insertion_sort.cpp -o CMakeFiles/insertion_sort.dir/insertion_sort.cpp.s

# Object files for target insertion_sort
insertion_sort_OBJECTS = \
"CMakeFiles/insertion_sort.dir/insertion_sort.cpp.o"

# External object files for target insertion_sort
insertion_sort_EXTERNAL_OBJECTS =

insertion_sort: CMakeFiles/insertion_sort.dir/insertion_sort.cpp.o
insertion_sort: CMakeFiles/insertion_sort.dir/build.make
insertion_sort: CMakeFiles/insertion_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/sorting/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable insertion_sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/insertion_sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/insertion_sort.dir/build: insertion_sort

.PHONY : CMakeFiles/insertion_sort.dir/build

CMakeFiles/insertion_sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/insertion_sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/insertion_sort.dir/clean

CMakeFiles/insertion_sort.dir/depend:
	cd /home/mddarr/aptitude/sorting && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/sorting /home/mddarr/aptitude/sorting /home/mddarr/aptitude/sorting /home/mddarr/aptitude/sorting /home/mddarr/aptitude/sorting/CMakeFiles/insertion_sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/insertion_sort.dir/depend

