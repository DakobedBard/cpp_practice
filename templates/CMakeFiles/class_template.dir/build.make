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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/templates

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/templates

# Include any dependencies generated for this target.
include CMakeFiles/class_template.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/class_template.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/class_template.dir/flags.make

CMakeFiles/class_template.dir/class_template.cpp.o: CMakeFiles/class_template.dir/flags.make
CMakeFiles/class_template.dir/class_template.cpp.o: class_template.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/templates/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/class_template.dir/class_template.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/class_template.dir/class_template.cpp.o -c /home/mddarr/aptitude/templates/class_template.cpp

CMakeFiles/class_template.dir/class_template.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/class_template.dir/class_template.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/templates/class_template.cpp > CMakeFiles/class_template.dir/class_template.cpp.i

CMakeFiles/class_template.dir/class_template.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/class_template.dir/class_template.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/templates/class_template.cpp -o CMakeFiles/class_template.dir/class_template.cpp.s

# Object files for target class_template
class_template_OBJECTS = \
"CMakeFiles/class_template.dir/class_template.cpp.o"

# External object files for target class_template
class_template_EXTERNAL_OBJECTS =

class_template: CMakeFiles/class_template.dir/class_template.cpp.o
class_template: CMakeFiles/class_template.dir/build.make
class_template: CMakeFiles/class_template.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/templates/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable class_template"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/class_template.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/class_template.dir/build: class_template

.PHONY : CMakeFiles/class_template.dir/build

CMakeFiles/class_template.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/class_template.dir/cmake_clean.cmake
.PHONY : CMakeFiles/class_template.dir/clean

CMakeFiles/class_template.dir/depend:
	cd /home/mddarr/aptitude/templates && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/templates /home/mddarr/aptitude/templates /home/mddarr/aptitude/templates /home/mddarr/aptitude/templates /home/mddarr/aptitude/templates/CMakeFiles/class_template.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/class_template.dir/depend

