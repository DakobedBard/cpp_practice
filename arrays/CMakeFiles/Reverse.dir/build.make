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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/arrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/arrays

# Include any dependencies generated for this target.
include CMakeFiles/Reverse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Reverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Reverse.dir/flags.make

CMakeFiles/Reverse.dir/reverse_array.cpp.o: CMakeFiles/Reverse.dir/flags.make
CMakeFiles/Reverse.dir/reverse_array.cpp.o: reverse_array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/arrays/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Reverse.dir/reverse_array.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reverse.dir/reverse_array.cpp.o -c /home/mddarr/aptitude/arrays/reverse_array.cpp

CMakeFiles/Reverse.dir/reverse_array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reverse.dir/reverse_array.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/arrays/reverse_array.cpp > CMakeFiles/Reverse.dir/reverse_array.cpp.i

CMakeFiles/Reverse.dir/reverse_array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reverse.dir/reverse_array.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/arrays/reverse_array.cpp -o CMakeFiles/Reverse.dir/reverse_array.cpp.s

# Object files for target Reverse
Reverse_OBJECTS = \
"CMakeFiles/Reverse.dir/reverse_array.cpp.o"

# External object files for target Reverse
Reverse_EXTERNAL_OBJECTS =

Reverse: CMakeFiles/Reverse.dir/reverse_array.cpp.o
Reverse: CMakeFiles/Reverse.dir/build.make
Reverse: CMakeFiles/Reverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/arrays/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Reverse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Reverse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Reverse.dir/build: Reverse

.PHONY : CMakeFiles/Reverse.dir/build

CMakeFiles/Reverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Reverse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Reverse.dir/clean

CMakeFiles/Reverse.dir/depend:
	cd /home/mddarr/aptitude/arrays && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/arrays /home/mddarr/aptitude/arrays /home/mddarr/aptitude/arrays /home/mddarr/aptitude/arrays /home/mddarr/aptitude/arrays/CMakeFiles/Reverse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Reverse.dir/depend

