# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/elk/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/elk/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elk/CLionProjects/infpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elk/CLionProjects/infpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vector_tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vector_tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector_tree.dir/flags.make

CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.o: CMakeFiles/vector_tree.dir/flags.make
CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.o: ../trees/vector_tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.o -c /home/elk/CLionProjects/infpp/trees/vector_tree.cpp

CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elk/CLionProjects/infpp/trees/vector_tree.cpp > CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.i

CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elk/CLionProjects/infpp/trees/vector_tree.cpp -o CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.s

# Object files for target vector_tree
vector_tree_OBJECTS = \
"CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.o"

# External object files for target vector_tree
vector_tree_EXTERNAL_OBJECTS =

vector_tree: CMakeFiles/vector_tree.dir/trees/vector_tree.cpp.o
vector_tree: CMakeFiles/vector_tree.dir/build.make
vector_tree: CMakeFiles/vector_tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector_tree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector_tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector_tree.dir/build: vector_tree

.PHONY : CMakeFiles/vector_tree.dir/build

CMakeFiles/vector_tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vector_tree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vector_tree.dir/clean

CMakeFiles/vector_tree.dir/depend:
	cd /home/elk/CLionProjects/infpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles/vector_tree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vector_tree.dir/depend

