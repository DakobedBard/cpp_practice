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
CMAKE_SOURCE_DIR = /home/mddarr/git/skeleton/server_build

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/git/skeleton/server_build

# Include any dependencies generated for this target.
include ap/CMakeFiles/output27.dir/depend.make

# Include the progress variables for this target.
include ap/CMakeFiles/output27.dir/progress.make

# Include the compile flags for this target's objects.
include ap/CMakeFiles/output27.dir/flags.make

ap/CMakeFiles/output27.dir/output27.cpp.o: ap/CMakeFiles/output27.dir/flags.make
ap/CMakeFiles/output27.dir/output27.cpp.o: ap/output27.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/git/skeleton/server_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ap/CMakeFiles/output27.dir/output27.cpp.o"
	cd /home/mddarr/git/skeleton/server_build/ap && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/output27.dir/output27.cpp.o -c /home/mddarr/git/skeleton/server_build/ap/output27.cpp

ap/CMakeFiles/output27.dir/output27.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/output27.dir/output27.cpp.i"
	cd /home/mddarr/git/skeleton/server_build/ap && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/git/skeleton/server_build/ap/output27.cpp > CMakeFiles/output27.dir/output27.cpp.i

ap/CMakeFiles/output27.dir/output27.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/output27.dir/output27.cpp.s"
	cd /home/mddarr/git/skeleton/server_build/ap && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/git/skeleton/server_build/ap/output27.cpp -o CMakeFiles/output27.dir/output27.cpp.s

# Object files for target output27
output27_OBJECTS = \
"CMakeFiles/output27.dir/output27.cpp.o"

# External object files for target output27
output27_EXTERNAL_OBJECTS =

ap/output27: ap/CMakeFiles/output27.dir/output27.cpp.o
ap/output27: ap/CMakeFiles/output27.dir/build.make
ap/output27: ap/CMakeFiles/output27.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/git/skeleton/server_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable output27"
	cd /home/mddarr/git/skeleton/server_build/ap && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/output27.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ap/CMakeFiles/output27.dir/build: ap/output27

.PHONY : ap/CMakeFiles/output27.dir/build

ap/CMakeFiles/output27.dir/clean:
	cd /home/mddarr/git/skeleton/server_build/ap && $(CMAKE_COMMAND) -P CMakeFiles/output27.dir/cmake_clean.cmake
.PHONY : ap/CMakeFiles/output27.dir/clean

ap/CMakeFiles/output27.dir/depend:
	cd /home/mddarr/git/skeleton/server_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/git/skeleton/server_build /home/mddarr/git/skeleton/server_build/ap /home/mddarr/git/skeleton/server_build /home/mddarr/git/skeleton/server_build/ap /home/mddarr/git/skeleton/server_build/ap/CMakeFiles/output27.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ap/CMakeFiles/output27.dir/depend

