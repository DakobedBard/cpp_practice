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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/interview/leetcode/heap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/interview/leetcode/heap

# Include any dependencies generated for this target.
include CMakeFiles/TopKFrequent.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TopKFrequent.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TopKFrequent.dir/flags.make

CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.o: CMakeFiles/TopKFrequent.dir/flags.make
CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.o: TopKFrequent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/interview/leetcode/heap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.o -c /home/mddarr/aptitude/interview/leetcode/heap/TopKFrequent.cpp

CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/interview/leetcode/heap/TopKFrequent.cpp > CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.i

CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/interview/leetcode/heap/TopKFrequent.cpp -o CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.s

# Object files for target TopKFrequent
TopKFrequent_OBJECTS = \
"CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.o"

# External object files for target TopKFrequent
TopKFrequent_EXTERNAL_OBJECTS =

TopKFrequent: CMakeFiles/TopKFrequent.dir/TopKFrequent.cpp.o
TopKFrequent: CMakeFiles/TopKFrequent.dir/build.make
TopKFrequent: CMakeFiles/TopKFrequent.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/interview/leetcode/heap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TopKFrequent"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TopKFrequent.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TopKFrequent.dir/build: TopKFrequent

.PHONY : CMakeFiles/TopKFrequent.dir/build

CMakeFiles/TopKFrequent.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TopKFrequent.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TopKFrequent.dir/clean

CMakeFiles/TopKFrequent.dir/depend:
	cd /home/mddarr/aptitude/interview/leetcode/heap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/interview/leetcode/heap /home/mddarr/aptitude/interview/leetcode/heap /home/mddarr/aptitude/interview/leetcode/heap /home/mddarr/aptitude/interview/leetcode/heap /home/mddarr/aptitude/interview/leetcode/heap/CMakeFiles/TopKFrequent.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TopKFrequent.dir/depend
