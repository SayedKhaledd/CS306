# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\seka5\CLionProjects\CS306

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\seka5\CLionProjects\CS306\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Task4_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Task4_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task4_3.dir/flags.make

CMakeFiles/Task4_3.dir/Task4_3.c.obj: CMakeFiles/Task4_3.dir/flags.make
CMakeFiles/Task4_3.dir/Task4_3.c.obj: ../Task4_3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\seka5\CLionProjects\CS306\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Task4_3.dir/Task4_3.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Task4_3.dir\Task4_3.c.obj   -c C:\Users\seka5\CLionProjects\CS306\Task4_3.c

CMakeFiles/Task4_3.dir/Task4_3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Task4_3.dir/Task4_3.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\seka5\CLionProjects\CS306\Task4_3.c > CMakeFiles\Task4_3.dir\Task4_3.c.i

CMakeFiles/Task4_3.dir/Task4_3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Task4_3.dir/Task4_3.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\seka5\CLionProjects\CS306\Task4_3.c -o CMakeFiles\Task4_3.dir\Task4_3.c.s

# Object files for target Task4_3
Task4_3_OBJECTS = \
"CMakeFiles/Task4_3.dir/Task4_3.c.obj"

# External object files for target Task4_3
Task4_3_EXTERNAL_OBJECTS =

Task4_3.exe: CMakeFiles/Task4_3.dir/Task4_3.c.obj
Task4_3.exe: CMakeFiles/Task4_3.dir/build.make
Task4_3.exe: CMakeFiles/Task4_3.dir/linklibs.rsp
Task4_3.exe: CMakeFiles/Task4_3.dir/objects1.rsp
Task4_3.exe: CMakeFiles/Task4_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\seka5\CLionProjects\CS306\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Task4_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Task4_3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task4_3.dir/build: Task4_3.exe

.PHONY : CMakeFiles/Task4_3.dir/build

CMakeFiles/Task4_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Task4_3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Task4_3.dir/clean

CMakeFiles/Task4_3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\seka5\CLionProjects\CS306 C:\Users\seka5\CLionProjects\CS306 C:\Users\seka5\CLionProjects\CS306\cmake-build-debug C:\Users\seka5\CLionProjects\CS306\cmake-build-debug C:\Users\seka5\CLionProjects\CS306\cmake-build-debug\CMakeFiles\Task4_3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Task4_3.dir/depend

