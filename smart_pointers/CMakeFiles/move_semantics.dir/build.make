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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/smart_pointers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/smart_pointers

# Include any dependencies generated for this target.
include CMakeFiles/move_semantics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/move_semantics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/move_semantics.dir/flags.make

CMakeFiles/move_semantics.dir/move_semantics.cpp.o: CMakeFiles/move_semantics.dir/flags.make
CMakeFiles/move_semantics.dir/move_semantics.cpp.o: move_semantics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/smart_pointers/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/move_semantics.dir/move_semantics.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/move_semantics.dir/move_semantics.cpp.o -c /home/mddarr/aptitude/smart_pointers/move_semantics.cpp

CMakeFiles/move_semantics.dir/move_semantics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/move_semantics.dir/move_semantics.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/smart_pointers/move_semantics.cpp > CMakeFiles/move_semantics.dir/move_semantics.cpp.i

CMakeFiles/move_semantics.dir/move_semantics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/move_semantics.dir/move_semantics.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/smart_pointers/move_semantics.cpp -o CMakeFiles/move_semantics.dir/move_semantics.cpp.s

# Object files for target move_semantics
move_semantics_OBJECTS = \
"CMakeFiles/move_semantics.dir/move_semantics.cpp.o"

# External object files for target move_semantics
move_semantics_EXTERNAL_OBJECTS =

move_semantics: CMakeFiles/move_semantics.dir/move_semantics.cpp.o
move_semantics: CMakeFiles/move_semantics.dir/build.make
move_semantics: CMakeFiles/move_semantics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/smart_pointers/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable move_semantics"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/move_semantics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/move_semantics.dir/build: move_semantics

.PHONY : CMakeFiles/move_semantics.dir/build

CMakeFiles/move_semantics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/move_semantics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/move_semantics.dir/clean

CMakeFiles/move_semantics.dir/depend:
	cd /home/mddarr/aptitude/smart_pointers && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/smart_pointers /home/mddarr/aptitude/smart_pointers /home/mddarr/aptitude/smart_pointers /home/mddarr/aptitude/smart_pointers /home/mddarr/aptitude/smart_pointers/CMakeFiles/move_semantics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/move_semantics.dir/depend
