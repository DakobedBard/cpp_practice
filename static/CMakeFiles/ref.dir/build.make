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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/static

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/static

# Include any dependencies generated for this target.
include CMakeFiles/ref.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ref.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ref.dir/flags.make

CMakeFiles/ref.dir/ref.cpp.o: CMakeFiles/ref.dir/flags.make
CMakeFiles/ref.dir/ref.cpp.o: ref.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/static/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ref.dir/ref.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ref.dir/ref.cpp.o -c /home/mddarr/aptitude/static/ref.cpp

CMakeFiles/ref.dir/ref.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ref.dir/ref.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/static/ref.cpp > CMakeFiles/ref.dir/ref.cpp.i

CMakeFiles/ref.dir/ref.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ref.dir/ref.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/static/ref.cpp -o CMakeFiles/ref.dir/ref.cpp.s

# Object files for target ref
ref_OBJECTS = \
"CMakeFiles/ref.dir/ref.cpp.o"

# External object files for target ref
ref_EXTERNAL_OBJECTS =

ref: CMakeFiles/ref.dir/ref.cpp.o
ref: CMakeFiles/ref.dir/build.make
ref: CMakeFiles/ref.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/static/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ref"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ref.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ref.dir/build: ref

.PHONY : CMakeFiles/ref.dir/build

CMakeFiles/ref.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ref.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ref.dir/clean

CMakeFiles/ref.dir/depend:
	cd /home/mddarr/aptitude/static && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/static /home/mddarr/aptitude/static /home/mddarr/aptitude/static /home/mddarr/aptitude/static /home/mddarr/aptitude/static/CMakeFiles/ref.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ref.dir/depend
