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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/references

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/references

# Include any dependencies generated for this target.
include CMakeFiles/static_ref.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/static_ref.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/static_ref.dir/flags.make

CMakeFiles/static_ref.dir/static_ref.cpp.o: CMakeFiles/static_ref.dir/flags.make
CMakeFiles/static_ref.dir/static_ref.cpp.o: static_ref.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/references/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/static_ref.dir/static_ref.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/static_ref.dir/static_ref.cpp.o -c /home/mddarr/aptitude/references/static_ref.cpp

CMakeFiles/static_ref.dir/static_ref.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/static_ref.dir/static_ref.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/references/static_ref.cpp > CMakeFiles/static_ref.dir/static_ref.cpp.i

CMakeFiles/static_ref.dir/static_ref.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/static_ref.dir/static_ref.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/references/static_ref.cpp -o CMakeFiles/static_ref.dir/static_ref.cpp.s

# Object files for target static_ref
static_ref_OBJECTS = \
"CMakeFiles/static_ref.dir/static_ref.cpp.o"

# External object files for target static_ref
static_ref_EXTERNAL_OBJECTS =

static_ref: CMakeFiles/static_ref.dir/static_ref.cpp.o
static_ref: CMakeFiles/static_ref.dir/build.make
static_ref: CMakeFiles/static_ref.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/references/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable static_ref"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/static_ref.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/static_ref.dir/build: static_ref

.PHONY : CMakeFiles/static_ref.dir/build

CMakeFiles/static_ref.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/static_ref.dir/cmake_clean.cmake
.PHONY : CMakeFiles/static_ref.dir/clean

CMakeFiles/static_ref.dir/depend:
	cd /home/mddarr/aptitude/references && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/references /home/mddarr/aptitude/references /home/mddarr/aptitude/references /home/mddarr/aptitude/references /home/mddarr/aptitude/references/CMakeFiles/static_ref.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/static_ref.dir/depend

