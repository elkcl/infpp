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
include algo/mergesort/CMakeFiles/MergeLib.dir/depend.make

# Include the progress variables for this target.
include algo/mergesort/CMakeFiles/MergeLib.dir/progress.make

# Include the compile flags for this target's objects.
include algo/mergesort/CMakeFiles/MergeLib.dir/flags.make

# Object files for target MergeLib
MergeLib_OBJECTS =

# External object files for target MergeLib
MergeLib_EXTERNAL_OBJECTS =

algo/mergesort/libMergeLib.a: algo/mergesort/CMakeFiles/MergeLib.dir/build.make
algo/mergesort/libMergeLib.a: algo/mergesort/CMakeFiles/MergeLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elk/CLionProjects/infpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library libMergeLib.a"
	cd /home/elk/CLionProjects/infpp/cmake-build-debug/algo/mergesort && $(CMAKE_COMMAND) -P CMakeFiles/MergeLib.dir/cmake_clean_target.cmake
	cd /home/elk/CLionProjects/infpp/cmake-build-debug/algo/mergesort && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MergeLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
algo/mergesort/CMakeFiles/MergeLib.dir/build: algo/mergesort/libMergeLib.a

.PHONY : algo/mergesort/CMakeFiles/MergeLib.dir/build

algo/mergesort/CMakeFiles/MergeLib.dir/clean:
	cd /home/elk/CLionProjects/infpp/cmake-build-debug/algo/mergesort && $(CMAKE_COMMAND) -P CMakeFiles/MergeLib.dir/cmake_clean.cmake
.PHONY : algo/mergesort/CMakeFiles/MergeLib.dir/clean

algo/mergesort/CMakeFiles/MergeLib.dir/depend:
	cd /home/elk/CLionProjects/infpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elk/CLionProjects/infpp /home/elk/CLionProjects/infpp/algo/mergesort /home/elk/CLionProjects/infpp/cmake-build-debug /home/elk/CLionProjects/infpp/cmake-build-debug/algo/mergesort /home/elk/CLionProjects/infpp/cmake-build-debug/algo/mergesort/CMakeFiles/MergeLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : algo/mergesort/CMakeFiles/MergeLib.dir/depend

