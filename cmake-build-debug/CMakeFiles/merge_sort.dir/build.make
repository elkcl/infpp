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
include CMakeFiles/merge_sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/merge_sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/merge_sort.dir/flags.make

CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.o: CMakeFiles/merge_sort.dir/flags.make
CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.o: ../algo/mergesort_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.o -c /home/elk/CLionProjects/infpp/algo/mergesort_test.cpp

CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elk/CLionProjects/infpp/algo/mergesort_test.cpp > CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.i

CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elk/CLionProjects/infpp/algo/mergesort_test.cpp -o CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.s

# Object files for target merge_sort
merge_sort_OBJECTS = \
"CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.o"

# External object files for target merge_sort
merge_sort_EXTERNAL_OBJECTS =

merge_sort: CMakeFiles/merge_sort.dir/algo/mergesort_test.cpp.o
merge_sort: CMakeFiles/merge_sort.dir/build.make
merge_sort: algo/mergesort/libMergeLib.a
merge_sort: CMakeFiles/merge_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable merge_sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/merge_sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/merge_sort.dir/build: merge_sort

.PHONY : CMakeFiles/merge_sort.dir/build

CMakeFiles/merge_sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/merge_sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/merge_sort.dir/clean

CMakeFiles/merge_sort.dir/depend:
	cd /home/elk/CLionProjects/infpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles/merge_sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/merge_sort.dir/depend

