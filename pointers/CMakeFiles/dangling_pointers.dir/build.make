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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/pointers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/pointers

# Include any dependencies generated for this target.
include CMakeFiles/dangling_pointers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dangling_pointers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dangling_pointers.dir/flags.make

CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.o: CMakeFiles/dangling_pointers.dir/flags.make
CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.o: dangling_pointers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/pointers/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.o -c /home/mddarr/aptitude/pointers/dangling_pointers.cpp

CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/pointers/dangling_pointers.cpp > CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.i

CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/pointers/dangling_pointers.cpp -o CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.s

# Object files for target dangling_pointers
dangling_pointers_OBJECTS = \
"CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.o"

# External object files for target dangling_pointers
dangling_pointers_EXTERNAL_OBJECTS =

dangling_pointers: CMakeFiles/dangling_pointers.dir/dangling_pointers.cpp.o
dangling_pointers: CMakeFiles/dangling_pointers.dir/build.make
dangling_pointers: CMakeFiles/dangling_pointers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/pointers/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dangling_pointers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dangling_pointers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dangling_pointers.dir/build: dangling_pointers

.PHONY : CMakeFiles/dangling_pointers.dir/build

CMakeFiles/dangling_pointers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dangling_pointers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dangling_pointers.dir/clean

CMakeFiles/dangling_pointers.dir/depend:
	cd /home/mddarr/aptitude/pointers && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers/CMakeFiles/dangling_pointers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dangling_pointers.dir/depend

