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
CMAKE_SOURCE_DIR = /home/mddarr/aptitude/graphs/kruskall

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mddarr/aptitude/graphs/kruskall

# Include any dependencies generated for this target.
include CMakeFiles/krusakall.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/krusakall.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/krusakall.dir/flags.make

CMakeFiles/krusakall.dir/kruskall.cpp.o: CMakeFiles/krusakall.dir/flags.make
CMakeFiles/krusakall.dir/kruskall.cpp.o: kruskall.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mddarr/aptitude/graphs/kruskall/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/krusakall.dir/kruskall.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/krusakall.dir/kruskall.cpp.o -c /home/mddarr/aptitude/graphs/kruskall/kruskall.cpp

CMakeFiles/krusakall.dir/kruskall.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/krusakall.dir/kruskall.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mddarr/aptitude/graphs/kruskall/kruskall.cpp > CMakeFiles/krusakall.dir/kruskall.cpp.i

CMakeFiles/krusakall.dir/kruskall.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/krusakall.dir/kruskall.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mddarr/aptitude/graphs/kruskall/kruskall.cpp -o CMakeFiles/krusakall.dir/kruskall.cpp.s

# Object files for target krusakall
krusakall_OBJECTS = \
"CMakeFiles/krusakall.dir/kruskall.cpp.o"

# External object files for target krusakall
krusakall_EXTERNAL_OBJECTS =

krusakall: CMakeFiles/krusakall.dir/kruskall.cpp.o
krusakall: CMakeFiles/krusakall.dir/build.make
krusakall: CMakeFiles/krusakall.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mddarr/aptitude/graphs/kruskall/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable krusakall"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/krusakall.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/krusakall.dir/build: krusakall

.PHONY : CMakeFiles/krusakall.dir/build

CMakeFiles/krusakall.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/krusakall.dir/cmake_clean.cmake
.PHONY : CMakeFiles/krusakall.dir/clean

CMakeFiles/krusakall.dir/depend:
	cd /home/mddarr/aptitude/graphs/kruskall && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mddarr/aptitude/graphs/kruskall /home/mddarr/aptitude/graphs/kruskall /home/mddarr/aptitude/graphs/kruskall /home/mddarr/aptitude/graphs/kruskall /home/mddarr/aptitude/graphs/kruskall/CMakeFiles/krusakall.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/krusakall.dir/depend
