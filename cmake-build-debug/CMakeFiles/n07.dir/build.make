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
include CMakeFiles/n07.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/n07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/n07.dir/flags.make

CMakeFiles/n07.dir/recursion/n07.cpp.o: CMakeFiles/n07.dir/flags.make
CMakeFiles/n07.dir/recursion/n07.cpp.o: ../recursion/n07.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/n07.dir/recursion/n07.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/n07.dir/recursion/n07.cpp.o -c /home/elk/CLionProjects/infpp/recursion/n07.cpp

CMakeFiles/n07.dir/recursion/n07.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/n07.dir/recursion/n07.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elk/CLionProjects/infpp/recursion/n07.cpp > CMakeFiles/n07.dir/recursion/n07.cpp.i

CMakeFiles/n07.dir/recursion/n07.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/n07.dir/recursion/n07.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elk/CLionProjects/infpp/recursion/n07.cpp -o CMakeFiles/n07.dir/recursion/n07.cpp.s

# Object files for target n07
n07_OBJECTS = \
"CMakeFiles/n07.dir/recursion/n07.cpp.o"

# External object files for target n07
n07_EXTERNAL_OBJECTS =

n07: CMakeFiles/n07.dir/recursion/n07.cpp.o
n07: CMakeFiles/n07.dir/build.make
n07: CMakeFiles/n07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable n07"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/n07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/n07.dir/build: n07

.PHONY : CMakeFiles/n07.dir/build

CMakeFiles/n07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/n07.dir/cmake_clean.cmake
.PHONY : CMakeFiles/n07.dir/clean

CMakeFiles/n07.dir/depend:
	cd /home/elk/CLionProjects/infpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles/n07.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/n07.dir/depend

