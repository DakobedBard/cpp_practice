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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/constructors

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/constructors

# Include any dependencies generated for this target.
include CMakeFiles/rule_of_five.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rule_of_five.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rule_of_five.dir/flags.make

CMakeFiles/rule_of_five.dir/rule_of_five.cpp.o: CMakeFiles/rule_of_five.dir/flags.make
CMakeFiles/rule_of_five.dir/rule_of_five.cpp.o: rule_of_five.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/constructors/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rule_of_five.dir/rule_of_five.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rule_of_five.dir/rule_of_five.cpp.o -c /home/mddarr/aptitude/constructors/rule_of_five.cpp

CMakeFiles/rule_of_five.dir/rule_of_five.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rule_of_five.dir/rule_of_five.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/constructors/rule_of_five.cpp > CMakeFiles/rule_of_five.dir/rule_of_five.cpp.i

CMakeFiles/rule_of_five.dir/rule_of_five.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rule_of_five.dir/rule_of_five.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/constructors/rule_of_five.cpp -o CMakeFiles/rule_of_five.dir/rule_of_five.cpp.s

# Object files for target rule_of_five
rule_of_five_OBJECTS = \
"CMakeFiles/rule_of_five.dir/rule_of_five.cpp.o"

# External object files for target rule_of_five
rule_of_five_EXTERNAL_OBJECTS =

rule_of_five: CMakeFiles/rule_of_five.dir/rule_of_five.cpp.o
rule_of_five: CMakeFiles/rule_of_five.dir/build.make
rule_of_five: CMakeFiles/rule_of_five.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/constructors/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rule_of_five"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rule_of_five.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rule_of_five.dir/build: rule_of_five

.PHONY : CMakeFiles/rule_of_five.dir/build

CMakeFiles/rule_of_five.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rule_of_five.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rule_of_five.dir/clean

CMakeFiles/rule_of_five.dir/depend:
	cd /home/mddarr/aptitude/constructors && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/constructors /home/mddarr/aptitude/constructors /home/mddarr/aptitude/constructors /home/mddarr/aptitude/constructors /home/mddarr/aptitude/constructors/CMakeFiles/rule_of_five.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rule_of_five.dir/depend

