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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/exceptions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/exceptions

# Include any dependencies generated for this target.
include CMakeFiles/exceptions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exceptions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exceptions.dir/flags.make

CMakeFiles/exceptions.dir/exceptions.cpp.o: CMakeFiles/exceptions.dir/flags.make
CMakeFiles/exceptions.dir/exceptions.cpp.o: exceptions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/exceptions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exceptions.dir/exceptions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exceptions.dir/exceptions.cpp.o -c /home/mddarr/aptitude/exceptions/exceptions.cpp

CMakeFiles/exceptions.dir/exceptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exceptions.dir/exceptions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/exceptions/exceptions.cpp > CMakeFiles/exceptions.dir/exceptions.cpp.i

CMakeFiles/exceptions.dir/exceptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exceptions.dir/exceptions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/exceptions/exceptions.cpp -o CMakeFiles/exceptions.dir/exceptions.cpp.s

# Object files for target exceptions
exceptions_OBJECTS = \
"CMakeFiles/exceptions.dir/exceptions.cpp.o"

# External object files for target exceptions
exceptions_EXTERNAL_OBJECTS =

exceptions: CMakeFiles/exceptions.dir/exceptions.cpp.o
exceptions: CMakeFiles/exceptions.dir/build.make
exceptions: CMakeFiles/exceptions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/exceptions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exceptions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exceptions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exceptions.dir/build: exceptions

.PHONY : CMakeFiles/exceptions.dir/build

CMakeFiles/exceptions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exceptions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exceptions.dir/clean

CMakeFiles/exceptions.dir/depend:
	cd /home/mddarr/aptitude/exceptions && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/exceptions /home/mddarr/aptitude/exceptions /home/mddarr/aptitude/exceptions /home/mddarr/aptitude/exceptions /home/mddarr/aptitude/exceptions/CMakeFiles/exceptions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exceptions.dir/depend

