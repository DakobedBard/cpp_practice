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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/operators/scope_resolution

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/operators/scope_resolution

# Include any dependencies generated for this target.
include CMakeFiles/resolution.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/resolution.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/resolution.dir/flags.make

CMakeFiles/resolution.dir/resolution2.cpp.o: CMakeFiles/resolution.dir/flags.make
CMakeFiles/resolution.dir/resolution2.cpp.o: resolution2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/operators/scope_resolution/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/resolution.dir/resolution2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/resolution.dir/resolution2.cpp.o -c /home/mddarr/aptitude/operators/scope_resolution/resolution2.cpp

CMakeFiles/resolution.dir/resolution2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/resolution.dir/resolution2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/operators/scope_resolution/resolution2.cpp > CMakeFiles/resolution.dir/resolution2.cpp.i

CMakeFiles/resolution.dir/resolution2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/resolution.dir/resolution2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/operators/scope_resolution/resolution2.cpp -o CMakeFiles/resolution.dir/resolution2.cpp.s

# Object files for target resolution
resolution_OBJECTS = \
"CMakeFiles/resolution.dir/resolution2.cpp.o"

# External object files for target resolution
resolution_EXTERNAL_OBJECTS =

resolution: CMakeFiles/resolution.dir/resolution2.cpp.o
resolution: CMakeFiles/resolution.dir/build.make
resolution: CMakeFiles/resolution.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/operators/scope_resolution/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable resolution"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/resolution.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/resolution.dir/build: resolution

.PHONY : CMakeFiles/resolution.dir/build

CMakeFiles/resolution.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/resolution.dir/cmake_clean.cmake
.PHONY : CMakeFiles/resolution.dir/clean

CMakeFiles/resolution.dir/depend:
	cd /home/mddarr/aptitude/operators/scope_resolution && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/operators/scope_resolution /home/mddarr/aptitude/operators/scope_resolution /home/mddarr/aptitude/operators/scope_resolution /home/mddarr/aptitude/operators/scope_resolution /home/mddarr/aptitude/operators/scope_resolution/CMakeFiles/resolution.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/resolution.dir/depend

