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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/data_structures/template_data_structures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/data_structures/template_data_structures

# Include any dependencies generated for this target.
include CMakeFiles/kruskall.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kruskall.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kruskall.dir/flags.make

CMakeFiles/kruskall.dir/kruskall.cpp.o: CMakeFiles/kruskall.dir/flags.make
CMakeFiles/kruskall.dir/kruskall.cpp.o: kruskall.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/data_structures/template_data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kruskall.dir/kruskall.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kruskall.dir/kruskall.cpp.o -c /home/mddarr/aptitude/data_structures/template_data_structures/kruskall.cpp

CMakeFiles/kruskall.dir/kruskall.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kruskall.dir/kruskall.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/data_structures/template_data_structures/kruskall.cpp > CMakeFiles/kruskall.dir/kruskall.cpp.i

CMakeFiles/kruskall.dir/kruskall.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kruskall.dir/kruskall.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/data_structures/template_data_structures/kruskall.cpp -o CMakeFiles/kruskall.dir/kruskall.cpp.s

# Object files for target kruskall
kruskall_OBJECTS = \
"CMakeFiles/kruskall.dir/kruskall.cpp.o"

# External object files for target kruskall
kruskall_EXTERNAL_OBJECTS =

kruskall: CMakeFiles/kruskall.dir/kruskall.cpp.o
kruskall: CMakeFiles/kruskall.dir/build.make
kruskall: CMakeFiles/kruskall.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/data_structures/template_data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kruskall"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kruskall.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kruskall.dir/build: kruskall

.PHONY : CMakeFiles/kruskall.dir/build

CMakeFiles/kruskall.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kruskall.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kruskall.dir/clean

CMakeFiles/kruskall.dir/depend:
	cd /home/mddarr/aptitude/data_structures/template_data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/data_structures/template_data_structures /home/mddarr/aptitude/data_structures/template_data_structures /home/mddarr/aptitude/data_structures/template_data_structures /home/mddarr/aptitude/data_structures/template_data_structures /home/mddarr/aptitude/data_structures/template_data_structures/CMakeFiles/kruskall.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kruskall.dir/depend
