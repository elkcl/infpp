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

# The CMake executable.
CMAKE_COMMAND = /data/data/ru.iiec.cxxdroid/files/bin/cmake

# The command to remove a file.
RM = /data/data/ru.iiec.cxxdroid/files/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /storage/emulated/0/Repos/infpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /storage/emulated/0/Repos/infpp

# Include any dependencies generated for this target.
include CMakeFiles/n03.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/n03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/n03.dir/flags.make

CMakeFiles/n03.dir/recursion/n03.cpp.o: CMakeFiles/n03.dir/flags.make
CMakeFiles/n03.dir/recursion/n03.cpp.o: recursion/n03.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/storage/emulated/0/Repos/infpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/n03.dir/recursion/n03.cpp.o"
	/data/user/0/ru.iiec.cxxdroid/files/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/n03.dir/recursion/n03.cpp.o -c /storage/emulated/0/Repos/infpp/recursion/n03.cpp

CMakeFiles/n03.dir/recursion/n03.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/n03.dir/recursion/n03.cpp.i"
	/data/user/0/ru.iiec.cxxdroid/files/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /storage/emulated/0/Repos/infpp/recursion/n03.cpp > CMakeFiles/n03.dir/recursion/n03.cpp.i

CMakeFiles/n03.dir/recursion/n03.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/n03.dir/recursion/n03.cpp.s"
	/data/user/0/ru.iiec.cxxdroid/files/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /storage/emulated/0/Repos/infpp/recursion/n03.cpp -o CMakeFiles/n03.dir/recursion/n03.cpp.s

# Object files for target n03
n03_OBJECTS = \
"CMakeFiles/n03.dir/recursion/n03.cpp.o"

# External object files for target n03
n03_EXTERNAL_OBJECTS =

n03: CMakeFiles/n03.dir/recursion/n03.cpp.o
n03: CMakeFiles/n03.dir/build.make
n03: CMakeFiles/n03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/storage/emulated/0/Repos/infpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable n03"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/n03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/n03.dir/build: n03

.PHONY : CMakeFiles/n03.dir/build

CMakeFiles/n03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/n03.dir/cmake_clean.cmake
.PHONY : CMakeFiles/n03.dir/clean

CMakeFiles/n03.dir/depend:
	cd /storage/emulated/0/Repos/infpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /storage/emulated/0/Repos/infpp /storage/emulated/0/Repos/infpp /storage/emulated/0/Repos/infpp /storage/emulated/0/Repos/infpp /storage/emulated/0/Repos/infpp/CMakeFiles/n03.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/n03.dir/depend
