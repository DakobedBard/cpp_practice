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
include CMakeFiles/adj_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/adj_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/adj_list.dir/flags.make

CMakeFiles/adj_list.dir/adj_list_test.cpp.o: CMakeFiles/adj_list.dir/flags.make
CMakeFiles/adj_list.dir/adj_list_test.cpp.o: adj_list_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/data_structures/template_data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/adj_list.dir/adj_list_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/adj_list.dir/adj_list_test.cpp.o -c /home/mddarr/aptitude/data_structures/template_data_structures/adj_list_test.cpp

CMakeFiles/adj_list.dir/adj_list_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/adj_list.dir/adj_list_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/data_structures/template_data_structures/adj_list_test.cpp > CMakeFiles/adj_list.dir/adj_list_test.cpp.i

CMakeFiles/adj_list.dir/adj_list_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/adj_list.dir/adj_list_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/data_structures/template_data_structures/adj_list_test.cpp -o CMakeFiles/adj_list.dir/adj_list_test.cpp.s

# Object files for target adj_list
adj_list_OBJECTS = \
"CMakeFiles/adj_list.dir/adj_list_test.cpp.o"

# External object files for target adj_list
adj_list_EXTERNAL_OBJECTS =

adj_list: CMakeFiles/adj_list.dir/adj_list_test.cpp.o
adj_list: CMakeFiles/adj_list.dir/build.make
adj_list: CMakeFiles/adj_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/data_structures/template_data_structures/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable adj_list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/adj_list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/adj_list.dir/build: adj_list

.PHONY : CMakeFiles/adj_list.dir/build

CMakeFiles/adj_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/adj_list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/adj_list.dir/clean

CMakeFiles/adj_list.dir/depend:
	cd /home/mddarr/aptitude/data_structures/template_data_structures && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/data_structures/template_data_structures /home/mddarr/aptitude/data_structures/template_data_structures /home/mddarr/aptitude/data_structures/template_data_structures /home/mddarr/aptitude/data_structures/template_data_structures /home/mddarr/aptitude/data_structures/template_data_structures/CMakeFiles/adj_list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/adj_list.dir/depend
