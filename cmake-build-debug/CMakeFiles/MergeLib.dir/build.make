# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/elk/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/elk/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elk/CLionProjects/infpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elk/CLionProjects/infpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MergeLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MergeLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MergeLib.dir/flags.make

CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.o: CMakeFiles/MergeLib.dir/flags.make
CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.o: ../algo/mergesort/merge_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.o -c /home/elk/CLionProjects/infpp/algo/mergesort/merge_sort.cpp

CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elk/CLionProjects/infpp/algo/mergesort/merge_sort.cpp > CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.i

CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elk/CLionProjects/infpp/algo/mergesort/merge_sort.cpp -o CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.s

# Object files for target MergeLib
MergeLib_OBJECTS = \
"CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.o"

# External object files for target MergeLib
MergeLib_EXTERNAL_OBJECTS =

libMergeLib.a: CMakeFiles/MergeLib.dir/algo/mergesort/merge_sort.cpp.o
libMergeLib.a: CMakeFiles/MergeLib.dir/build.make
libMergeLib.a: CMakeFiles/MergeLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMergeLib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MergeLib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MergeLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MergeLib.dir/build: libMergeLib.a

.PHONY : CMakeFiles/MergeLib.dir/build

CMakeFiles/MergeLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MergeLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MergeLib.dir/clean

CMakeFiles/MergeLib.dir/depend:
	cd /home/elk/CLionProjects/infpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles/MergeLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MergeLib.dir/depend
