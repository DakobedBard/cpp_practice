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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/ap/virtual_shit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/ap/virtual_shit

# Include any dependencies generated for this target.
include CMakeFiles/templates.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/templates.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/templates.dir/flags.make

CMakeFiles/templates.dir/templates.cpp.o: CMakeFiles/templates.dir/flags.make
CMakeFiles/templates.dir/templates.cpp.o: templates.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/ap/virtual_shit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/templates.dir/templates.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/templates.dir/templates.cpp.o -c /home/mddarr/aptitude/ap/virtual_shit/templates.cpp

CMakeFiles/templates.dir/templates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/templates.dir/templates.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/ap/virtual_shit/templates.cpp > CMakeFiles/templates.dir/templates.cpp.i

CMakeFiles/templates.dir/templates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/templates.dir/templates.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/ap/virtual_shit/templates.cpp -o CMakeFiles/templates.dir/templates.cpp.s

# Object files for target templates
templates_OBJECTS = \
"CMakeFiles/templates.dir/templates.cpp.o"

# External object files for target templates
templates_EXTERNAL_OBJECTS =

templates: CMakeFiles/templates.dir/templates.cpp.o
templates: CMakeFiles/templates.dir/build.make
templates: CMakeFiles/templates.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/ap/virtual_shit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable templates"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/templates.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/templates.dir/build: templates

.PHONY : CMakeFiles/templates.dir/build

CMakeFiles/templates.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/templates.dir/cmake_clean.cmake
.PHONY : CMakeFiles/templates.dir/clean

CMakeFiles/templates.dir/depend:
	cd /home/mddarr/aptitude/ap/virtual_shit && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/ap/virtual_shit /home/mddarr/aptitude/ap/virtual_shit /home/mddarr/aptitude/ap/virtual_shit /home/mddarr/aptitude/ap/virtual_shit /home/mddarr/aptitude/ap/virtual_shit/CMakeFiles/templates.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/templates.dir/depend
