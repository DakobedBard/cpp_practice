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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/ap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/ap

# Include any dependencies generated for this target.
include CMakeFiles/virtual_destructor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/virtual_destructor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/virtual_destructor.dir/flags.make

CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.o: CMakeFiles/virtual_destructor.dir/flags.make
CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.o: virtual_destructor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/ap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.o -c /home/mddarr/aptitude/ap/virtual_destructor.cpp

CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/ap/virtual_destructor.cpp > CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.i

CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/ap/virtual_destructor.cpp -o CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.s

# Object files for target virtual_destructor
virtual_destructor_OBJECTS = \
"CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.o"

# External object files for target virtual_destructor
virtual_destructor_EXTERNAL_OBJECTS =

virtual_destructor: CMakeFiles/virtual_destructor.dir/virtual_destructor.cpp.o
virtual_destructor: CMakeFiles/virtual_destructor.dir/build.make
virtual_destructor: CMakeFiles/virtual_destructor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/ap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable virtual_destructor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/virtual_destructor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/virtual_destructor.dir/build: virtual_destructor

.PHONY : CMakeFiles/virtual_destructor.dir/build

CMakeFiles/virtual_destructor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/virtual_destructor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/virtual_destructor.dir/clean

CMakeFiles/virtual_destructor.dir/depend:
	cd /home/mddarr/aptitude/ap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap/CMakeFiles/virtual_destructor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/virtual_destructor.dir/depend

