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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/inheritance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/inheritance

# Include any dependencies generated for this target.
include CMakeFiles/object_slicing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/object_slicing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/object_slicing.dir/flags.make

CMakeFiles/object_slicing.dir/object_slicing.cpp.o: CMakeFiles/object_slicing.dir/flags.make
CMakeFiles/object_slicing.dir/object_slicing.cpp.o: object_slicing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/inheritance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/object_slicing.dir/object_slicing.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/object_slicing.dir/object_slicing.cpp.o -c /home/mddarr/aptitude/inheritance/object_slicing.cpp

CMakeFiles/object_slicing.dir/object_slicing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/object_slicing.dir/object_slicing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/inheritance/object_slicing.cpp > CMakeFiles/object_slicing.dir/object_slicing.cpp.i

CMakeFiles/object_slicing.dir/object_slicing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/object_slicing.dir/object_slicing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/inheritance/object_slicing.cpp -o CMakeFiles/object_slicing.dir/object_slicing.cpp.s

# Object files for target object_slicing
object_slicing_OBJECTS = \
"CMakeFiles/object_slicing.dir/object_slicing.cpp.o"

# External object files for target object_slicing
object_slicing_EXTERNAL_OBJECTS =

object_slicing: CMakeFiles/object_slicing.dir/object_slicing.cpp.o
object_slicing: CMakeFiles/object_slicing.dir/build.make
object_slicing: CMakeFiles/object_slicing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/inheritance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable object_slicing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/object_slicing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/object_slicing.dir/build: object_slicing

.PHONY : CMakeFiles/object_slicing.dir/build

CMakeFiles/object_slicing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/object_slicing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/object_slicing.dir/clean

CMakeFiles/object_slicing.dir/depend:
	cd /home/mddarr/aptitude/inheritance && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/inheritance /home/mddarr/aptitude/inheritance /home/mddarr/aptitude/inheritance /home/mddarr/aptitude/inheritance /home/mddarr/aptitude/inheritance/CMakeFiles/object_slicing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/object_slicing.dir/depend

