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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/functions

# Include any dependencies generated for this target.
include CMakeFiles/functor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/functor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/functor.dir/flags.make

CMakeFiles/functor.dir/functor.cpp.o: CMakeFiles/functor.dir/flags.make
CMakeFiles/functor.dir/functor.cpp.o: functor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/functions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/functor.dir/functor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/functor.dir/functor.cpp.o -c /home/mddarr/aptitude/functions/functor.cpp

CMakeFiles/functor.dir/functor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/functor.dir/functor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/functions/functor.cpp > CMakeFiles/functor.dir/functor.cpp.i

CMakeFiles/functor.dir/functor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/functor.dir/functor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/functions/functor.cpp -o CMakeFiles/functor.dir/functor.cpp.s

# Object files for target functor
functor_OBJECTS = \
"CMakeFiles/functor.dir/functor.cpp.o"

# External object files for target functor
functor_EXTERNAL_OBJECTS =

functor: CMakeFiles/functor.dir/functor.cpp.o
functor: CMakeFiles/functor.dir/build.make
functor: CMakeFiles/functor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/functions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable functor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/functor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/functor.dir/build: functor

.PHONY : CMakeFiles/functor.dir/build

CMakeFiles/functor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/functor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/functor.dir/clean

CMakeFiles/functor.dir/depend:
	cd /home/mddarr/aptitude/functions && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/functions /home/mddarr/aptitude/functions /home/mddarr/aptitude/functions /home/mddarr/aptitude/functions /home/mddarr/aptitude/functions/CMakeFiles/functor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/functor.dir/depend
