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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BloomProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BloomProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BloomProject.dir/flags.make

CMakeFiles/BloomProject.dir/test.c.o: CMakeFiles/BloomProject.dir/flags.make
CMakeFiles/BloomProject.dir/test.c.o: ../test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BloomProject.dir/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BloomProject.dir/test.c.o   -c /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/test.c

CMakeFiles/BloomProject.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BloomProject.dir/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/test.c > CMakeFiles/BloomProject.dir/test.c.i

CMakeFiles/BloomProject.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BloomProject.dir/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/test.c -o CMakeFiles/BloomProject.dir/test.c.s

# Object files for target BloomProject
BloomProject_OBJECTS = \
"CMakeFiles/BloomProject.dir/test.c.o"

# External object files for target BloomProject
BloomProject_EXTERNAL_OBJECTS =

BloomProject: CMakeFiles/BloomProject.dir/test.c.o
BloomProject: CMakeFiles/BloomProject.dir/build.make
BloomProject: CMakeFiles/BloomProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BloomProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BloomProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BloomProject.dir/build: BloomProject

.PHONY : CMakeFiles/BloomProject.dir/build

CMakeFiles/BloomProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BloomProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BloomProject.dir/clean

CMakeFiles/BloomProject.dir/depend:
	cd /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/cmake-build-debug /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/cmake-build-debug /mnt/d/Bureau/Cour/Algorithme/Projet/BloomProject/cmake-build-debug/CMakeFiles/BloomProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BloomProject.dir/depend

