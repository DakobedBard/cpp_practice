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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/pointers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/pointers

# Include any dependencies generated for this target.
include CMakeFiles/delete_this.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/delete_this.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/delete_this.dir/flags.make

CMakeFiles/delete_this.dir/delete_this.cpp.o: CMakeFiles/delete_this.dir/flags.make
CMakeFiles/delete_this.dir/delete_this.cpp.o: delete_this.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/pointers/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/delete_this.dir/delete_this.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/delete_this.dir/delete_this.cpp.o -c /home/mddarr/aptitude/pointers/delete_this.cpp

CMakeFiles/delete_this.dir/delete_this.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/delete_this.dir/delete_this.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/pointers/delete_this.cpp > CMakeFiles/delete_this.dir/delete_this.cpp.i

CMakeFiles/delete_this.dir/delete_this.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/delete_this.dir/delete_this.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/pointers/delete_this.cpp -o CMakeFiles/delete_this.dir/delete_this.cpp.s

# Object files for target delete_this
delete_this_OBJECTS = \
"CMakeFiles/delete_this.dir/delete_this.cpp.o"

# External object files for target delete_this
delete_this_EXTERNAL_OBJECTS =

delete_this: CMakeFiles/delete_this.dir/delete_this.cpp.o
delete_this: CMakeFiles/delete_this.dir/build.make
delete_this: CMakeFiles/delete_this.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/pointers/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable delete_this"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/delete_this.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/delete_this.dir/build: delete_this

.PHONY : CMakeFiles/delete_this.dir/build

CMakeFiles/delete_this.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/delete_this.dir/cmake_clean.cmake
.PHONY : CMakeFiles/delete_this.dir/clean

CMakeFiles/delete_this.dir/depend:
	cd /home/mddarr/aptitude/pointers && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers /home/mddarr/aptitude/pointers/CMakeFiles/delete_this.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/delete_this.dir/depend

