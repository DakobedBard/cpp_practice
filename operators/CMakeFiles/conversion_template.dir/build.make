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
include CMakeFiles/conversion_template.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/conversion_template.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/conversion_template.dir/flags.make

CMakeFiles/conversion_template.dir/conversion_template.cpp.o: CMakeFiles/conversion_template.dir/flags.make
CMakeFiles/conversion_template.dir/conversion_template.cpp.o: conversion_template.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/operators/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/conversion_template.dir/conversion_template.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conversion_template.dir/conversion_template.cpp.o -c /home/mddarr/aptitude/operators/conversion_template.cpp

CMakeFiles/conversion_template.dir/conversion_template.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conversion_template.dir/conversion_template.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/operators/conversion_template.cpp > CMakeFiles/conversion_template.dir/conversion_template.cpp.i

CMakeFiles/conversion_template.dir/conversion_template.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conversion_template.dir/conversion_template.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/operators/conversion_template.cpp -o CMakeFiles/conversion_template.dir/conversion_template.cpp.s

# Object files for target conversion_template
conversion_template_OBJECTS = \
"CMakeFiles/conversion_template.dir/conversion_template.cpp.o"

# External object files for target conversion_template
conversion_template_EXTERNAL_OBJECTS =

conversion_template: CMakeFiles/conversion_template.dir/conversion_template.cpp.o
conversion_template: CMakeFiles/conversion_template.dir/build.make
conversion_template: CMakeFiles/conversion_template.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/operators/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable conversion_template"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/conversion_template.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/conversion_template.dir/build: conversion_template

.PHONY : CMakeFiles/conversion_template.dir/build

CMakeFiles/conversion_template.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/conversion_template.dir/cmake_clean.cmake
.PHONY : CMakeFiles/conversion_template.dir/clean

CMakeFiles/conversion_template.dir/depend:
	cd /home/mddarr/aptitude/operators && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/operators /home/mddarr/aptitude/operators /home/mddarr/aptitude/operators /home/mddarr/aptitude/operators /home/mddarr/aptitude/operators/CMakeFiles/conversion_template.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/conversion_template.dir/depend

