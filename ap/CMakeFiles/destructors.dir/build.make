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
include CMakeFiles/destructors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/destructors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/destructors.dir/flags.make

CMakeFiles/destructors.dir/destructors.cpp.o: CMakeFiles/destructors.dir/flags.make
CMakeFiles/destructors.dir/destructors.cpp.o: destructors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/ap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/destructors.dir/destructors.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/destructors.dir/destructors.cpp.o -c /home/mddarr/aptitude/ap/destructors.cpp

CMakeFiles/destructors.dir/destructors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/destructors.dir/destructors.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/ap/destructors.cpp > CMakeFiles/destructors.dir/destructors.cpp.i

CMakeFiles/destructors.dir/destructors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/destructors.dir/destructors.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/ap/destructors.cpp -o CMakeFiles/destructors.dir/destructors.cpp.s

# Object files for target destructors
destructors_OBJECTS = \
"CMakeFiles/destructors.dir/destructors.cpp.o"

# External object files for target destructors
destructors_EXTERNAL_OBJECTS =

destructors: CMakeFiles/destructors.dir/destructors.cpp.o
destructors: CMakeFiles/destructors.dir/build.make
destructors: CMakeFiles/destructors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/ap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable destructors"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/destructors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/destructors.dir/build: destructors

.PHONY : CMakeFiles/destructors.dir/build

CMakeFiles/destructors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/destructors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/destructors.dir/clean

CMakeFiles/destructors.dir/depend:
	cd /home/mddarr/aptitude/ap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap/CMakeFiles/destructors.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/destructors.dir/depend

