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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/oop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/oop

# Include any dependencies generated for this target.
include CMakeFiles/explicit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/explicit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/explicit.dir/flags.make

CMakeFiles/explicit.dir/explicit.cpp.o: CMakeFiles/explicit.dir/flags.make
CMakeFiles/explicit.dir/explicit.cpp.o: explicit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/oop/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/explicit.dir/explicit.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/explicit.dir/explicit.cpp.o -c /home/mddarr/aptitude/oop/explicit.cpp

CMakeFiles/explicit.dir/explicit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/explicit.dir/explicit.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/oop/explicit.cpp > CMakeFiles/explicit.dir/explicit.cpp.i

CMakeFiles/explicit.dir/explicit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/explicit.dir/explicit.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/oop/explicit.cpp -o CMakeFiles/explicit.dir/explicit.cpp.s

# Object files for target explicit
explicit_OBJECTS = \
"CMakeFiles/explicit.dir/explicit.cpp.o"

# External object files for target explicit
explicit_EXTERNAL_OBJECTS =

explicit: CMakeFiles/explicit.dir/explicit.cpp.o
explicit: CMakeFiles/explicit.dir/build.make
explicit: CMakeFiles/explicit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/oop/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable explicit"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/explicit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/explicit.dir/build: explicit

.PHONY : CMakeFiles/explicit.dir/build

CMakeFiles/explicit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/explicit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/explicit.dir/clean

CMakeFiles/explicit.dir/depend:
	cd /home/mddarr/aptitude/oop && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/oop /home/mddarr/aptitude/oop /home/mddarr/aptitude/oop /home/mddarr/aptitude/oop /home/mddarr/aptitude/oop/CMakeFiles/explicit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/explicit.dir/depend

