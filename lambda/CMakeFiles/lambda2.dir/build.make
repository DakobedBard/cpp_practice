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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/lambda

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/lambda

# Include any dependencies generated for this target.
include CMakeFiles/lambda2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lambda2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lambda2.dir/flags.make

CMakeFiles/lambda2.dir/lambda2.cpp.o: CMakeFiles/lambda2.dir/flags.make
CMakeFiles/lambda2.dir/lambda2.cpp.o: lambda2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/lambda/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lambda2.dir/lambda2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lambda2.dir/lambda2.cpp.o -c /home/mddarr/aptitude/lambda/lambda2.cpp

CMakeFiles/lambda2.dir/lambda2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lambda2.dir/lambda2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/lambda/lambda2.cpp > CMakeFiles/lambda2.dir/lambda2.cpp.i

CMakeFiles/lambda2.dir/lambda2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lambda2.dir/lambda2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/lambda/lambda2.cpp -o CMakeFiles/lambda2.dir/lambda2.cpp.s

# Object files for target lambda2
lambda2_OBJECTS = \
"CMakeFiles/lambda2.dir/lambda2.cpp.o"

# External object files for target lambda2
lambda2_EXTERNAL_OBJECTS =

lambda2: CMakeFiles/lambda2.dir/lambda2.cpp.o
lambda2: CMakeFiles/lambda2.dir/build.make
lambda2: CMakeFiles/lambda2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/lambda/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lambda2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lambda2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lambda2.dir/build: lambda2

.PHONY : CMakeFiles/lambda2.dir/build

CMakeFiles/lambda2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lambda2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lambda2.dir/clean

CMakeFiles/lambda2.dir/depend:
	cd /home/mddarr/aptitude/lambda && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/lambda /home/mddarr/aptitude/lambda /home/mddarr/aptitude/lambda /home/mddarr/aptitude/lambda /home/mddarr/aptitude/lambda/CMakeFiles/lambda2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lambda2.dir/depend

