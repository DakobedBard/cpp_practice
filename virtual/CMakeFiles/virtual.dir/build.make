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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/virtual

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/virtual

# Include any dependencies generated for this target.
include CMakeFiles/virtual.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/virtual.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/virtual.dir/flags.make

CMakeFiles/virtual.dir/virtual.cpp.o: CMakeFiles/virtual.dir/flags.make
CMakeFiles/virtual.dir/virtual.cpp.o: virtual.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/virtual/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/virtual.dir/virtual.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/virtual.dir/virtual.cpp.o -c /home/mddarr/aptitude/virtual/virtual.cpp

CMakeFiles/virtual.dir/virtual.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/virtual.dir/virtual.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/virtual/virtual.cpp > CMakeFiles/virtual.dir/virtual.cpp.i

CMakeFiles/virtual.dir/virtual.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/virtual.dir/virtual.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/virtual/virtual.cpp -o CMakeFiles/virtual.dir/virtual.cpp.s

# Object files for target virtual
virtual_OBJECTS = \
"CMakeFiles/virtual.dir/virtual.cpp.o"

# External object files for target virtual
virtual_EXTERNAL_OBJECTS =

virtual: CMakeFiles/virtual.dir/virtual.cpp.o
virtual: CMakeFiles/virtual.dir/build.make
virtual: CMakeFiles/virtual.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/virtual/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable virtual"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/virtual.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/virtual.dir/build: virtual

.PHONY : CMakeFiles/virtual.dir/build

CMakeFiles/virtual.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/virtual.dir/cmake_clean.cmake
.PHONY : CMakeFiles/virtual.dir/clean

CMakeFiles/virtual.dir/depend:
	cd /home/mddarr/aptitude/virtual && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/virtual /home/mddarr/aptitude/virtual /home/mddarr/aptitude/virtual /home/mddarr/aptitude/virtual /home/mddarr/aptitude/virtual/CMakeFiles/virtual.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/virtual.dir/depend
