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
include CMakeFiles/isderivedfrom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/isderivedfrom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/isderivedfrom.dir/flags.make

CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.o: CMakeFiles/isderivedfrom.dir/flags.make
CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.o: isderivedfrom.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/inheritance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.o -c /home/mddarr/aptitude/inheritance/isderivedfrom.cpp

CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/inheritance/isderivedfrom.cpp > CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.i

CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/inheritance/isderivedfrom.cpp -o CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.s

# Object files for target isderivedfrom
isderivedfrom_OBJECTS = \
"CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.o"

# External object files for target isderivedfrom
isderivedfrom_EXTERNAL_OBJECTS =

isderivedfrom: CMakeFiles/isderivedfrom.dir/isderivedfrom.cpp.o
isderivedfrom: CMakeFiles/isderivedfrom.dir/build.make
isderivedfrom: CMakeFiles/isderivedfrom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/inheritance/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable isderivedfrom"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/isderivedfrom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/isderivedfrom.dir/build: isderivedfrom

.PHONY : CMakeFiles/isderivedfrom.dir/build

CMakeFiles/isderivedfrom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/isderivedfrom.dir/cmake_clean.cmake
.PHONY : CMakeFiles/isderivedfrom.dir/clean

CMakeFiles/isderivedfrom.dir/depend:
	cd /home/mddarr/aptitude/inheritance && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/inheritance /home/mddarr/aptitude/inheritance /home/mddarr/aptitude/inheritance /home/mddarr/aptitude/inheritance /home/mddarr/aptitude/inheritance/CMakeFiles/isderivedfrom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/isderivedfrom.dir/depend

