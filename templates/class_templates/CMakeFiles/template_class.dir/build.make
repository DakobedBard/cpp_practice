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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/templates/class_templates

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/templates/class_templates

# Include any dependencies generated for this target.
include CMakeFiles/template_class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/template_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/template_class.dir/flags.make

CMakeFiles/template_class.dir/array_main.cpp.o: CMakeFiles/template_class.dir/flags.make
CMakeFiles/template_class.dir/array_main.cpp.o: array_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/templates/class_templates/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/template_class.dir/array_main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/template_class.dir/array_main.cpp.o -c /home/mddarr/aptitude/templates/class_templates/array_main.cpp

CMakeFiles/template_class.dir/array_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/template_class.dir/array_main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/templates/class_templates/array_main.cpp > CMakeFiles/template_class.dir/array_main.cpp.i

CMakeFiles/template_class.dir/array_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/template_class.dir/array_main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/templates/class_templates/array_main.cpp -o CMakeFiles/template_class.dir/array_main.cpp.s

# Object files for target template_class
template_class_OBJECTS = \
"CMakeFiles/template_class.dir/array_main.cpp.o"

# External object files for target template_class
template_class_EXTERNAL_OBJECTS =

template_class: CMakeFiles/template_class.dir/array_main.cpp.o
template_class: CMakeFiles/template_class.dir/build.make
template_class: CMakeFiles/template_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/templates/class_templates/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable template_class"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/template_class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/template_class.dir/build: template_class

.PHONY : CMakeFiles/template_class.dir/build

CMakeFiles/template_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/template_class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/template_class.dir/clean

CMakeFiles/template_class.dir/depend:
	cd /home/mddarr/aptitude/templates/class_templates && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/templates/class_templates /home/mddarr/aptitude/templates/class_templates /home/mddarr/aptitude/templates/class_templates /home/mddarr/aptitude/templates/class_templates /home/mddarr/aptitude/templates/class_templates/CMakeFiles/template_class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/template_class.dir/depend

