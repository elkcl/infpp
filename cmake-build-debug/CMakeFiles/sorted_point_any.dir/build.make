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
include CMakeFiles/sorted_point_any.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sorted_point_any.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sorted_point_any.dir/flags.make

CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.o: CMakeFiles/sorted_point_any.dir/flags.make
CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.o: ../memory/sorted_point_any.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.o -c /home/elk/CLionProjects/infpp/memory/sorted_point_any.cpp

CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elk/CLionProjects/infpp/memory/sorted_point_any.cpp > CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.i

CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elk/CLionProjects/infpp/memory/sorted_point_any.cpp -o CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.s

# Object files for target sorted_point_any
sorted_point_any_OBJECTS = \
"CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.o"

# External object files for target sorted_point_any
sorted_point_any_EXTERNAL_OBJECTS =

sorted_point_any: CMakeFiles/sorted_point_any.dir/memory/sorted_point_any.cpp.o
sorted_point_any: CMakeFiles/sorted_point_any.dir/build.make
sorted_point_any: CMakeFiles/sorted_point_any.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sorted_point_any"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sorted_point_any.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sorted_point_any.dir/build: sorted_point_any

.PHONY : CMakeFiles/sorted_point_any.dir/build

CMakeFiles/sorted_point_any.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sorted_point_any.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sorted_point_any.dir/clean

CMakeFiles/sorted_point_any.dir/depend:
	cd /home/elk/CLionProjects/infpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles/sorted_point_any.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sorted_point_any.dir/depend
