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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/operators/conversions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/operators/conversions

# Include any dependencies generated for this target.
include CMakeFiles/qsort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qsort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qsort.dir/flags.make

CMakeFiles/qsort.dir/qsort.cpp.o: CMakeFiles/qsort.dir/flags.make
CMakeFiles/qsort.dir/qsort.cpp.o: qsort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/operators/conversions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qsort.dir/qsort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qsort.dir/qsort.cpp.o -c /home/mddarr/aptitude/operators/conversions/qsort.cpp

CMakeFiles/qsort.dir/qsort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qsort.dir/qsort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/operators/conversions/qsort.cpp > CMakeFiles/qsort.dir/qsort.cpp.i

CMakeFiles/qsort.dir/qsort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qsort.dir/qsort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/operators/conversions/qsort.cpp -o CMakeFiles/qsort.dir/qsort.cpp.s

# Object files for target qsort
qsort_OBJECTS = \
"CMakeFiles/qsort.dir/qsort.cpp.o"

# External object files for target qsort
qsort_EXTERNAL_OBJECTS =

qsort: CMakeFiles/qsort.dir/qsort.cpp.o
qsort: CMakeFiles/qsort.dir/build.make
qsort: CMakeFiles/qsort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/operators/conversions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable qsort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qsort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qsort.dir/build: qsort

.PHONY : CMakeFiles/qsort.dir/build

CMakeFiles/qsort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qsort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qsort.dir/clean

CMakeFiles/qsort.dir/depend:
	cd /home/mddarr/aptitude/operators/conversions && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/operators/conversions /home/mddarr/aptitude/operators/conversions /home/mddarr/aptitude/operators/conversions /home/mddarr/aptitude/operators/conversions /home/mddarr/aptitude/operators/conversions/CMakeFiles/qsort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qsort.dir/depend

