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
include CMakeFiles/this.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/this.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/this.dir/flags.make

CMakeFiles/this.dir/this.cpp.o: CMakeFiles/this.dir/flags.make
CMakeFiles/this.dir/this.cpp.o: this.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/ap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/this.dir/this.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/this.dir/this.cpp.o -c /home/mddarr/aptitude/ap/this.cpp

CMakeFiles/this.dir/this.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/this.dir/this.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/ap/this.cpp > CMakeFiles/this.dir/this.cpp.i

CMakeFiles/this.dir/this.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/this.dir/this.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/ap/this.cpp -o CMakeFiles/this.dir/this.cpp.s

# Object files for target this
this_OBJECTS = \
"CMakeFiles/this.dir/this.cpp.o"

# External object files for target this
this_EXTERNAL_OBJECTS =

this: CMakeFiles/this.dir/this.cpp.o
this: CMakeFiles/this.dir/build.make
this: CMakeFiles/this.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/ap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable this"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/this.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/this.dir/build: this

.PHONY : CMakeFiles/this.dir/build

CMakeFiles/this.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/this.dir/cmake_clean.cmake
.PHONY : CMakeFiles/this.dir/clean

CMakeFiles/this.dir/depend:
	cd /home/mddarr/aptitude/ap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap /home/mddarr/aptitude/ap/CMakeFiles/this.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/this.dir/depend

