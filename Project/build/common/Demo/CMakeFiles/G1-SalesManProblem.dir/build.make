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


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build

# Include any dependencies generated for this target.
include common/Demo/CMakeFiles/G1-SalesManProblem.dir/depend.make

# Include the progress variables for this target.
include common/Demo/CMakeFiles/G1-SalesManProblem.dir/progress.make

# Include the compile flags for this target's objects.
include common/Demo/CMakeFiles/G1-SalesManProblem.dir/flags.make

common/Demo/CMakeFiles/G1-SalesManProblem.dir/main.c.obj: common/Demo/CMakeFiles/G1-SalesManProblem.dir/flags.make
common/Demo/CMakeFiles/G1-SalesManProblem.dir/main.c.obj: common/Demo/CMakeFiles/G1-SalesManProblem.dir/includes_C.rsp
common/Demo/CMakeFiles/G1-SalesManProblem.dir/main.c.obj: ../common/Demo/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object common/Demo/CMakeFiles/G1-SalesManProblem.dir/main.c.obj"
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\common\Demo && C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\G1-SalesManProblem.dir\main.c.obj   -c C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\common\Demo\main.c

common/Demo/CMakeFiles/G1-SalesManProblem.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/G1-SalesManProblem.dir/main.c.i"
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\common\Demo && C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\common\Demo\main.c > CMakeFiles\G1-SalesManProblem.dir\main.c.i

common/Demo/CMakeFiles/G1-SalesManProblem.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/G1-SalesManProblem.dir/main.c.s"
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\common\Demo && C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\common\Demo\main.c -o CMakeFiles\G1-SalesManProblem.dir\main.c.s

# Object files for target G1-SalesManProblem
G1__SalesManProblem_OBJECTS = \
"CMakeFiles/G1-SalesManProblem.dir/main.c.obj"

# External object files for target G1-SalesManProblem
G1__SalesManProblem_EXTERNAL_OBJECTS =

bin/G1-SalesManProblem.exe: common/Demo/CMakeFiles/G1-SalesManProblem.dir/main.c.obj
bin/G1-SalesManProblem.exe: common/Demo/CMakeFiles/G1-SalesManProblem.dir/build.make
bin/G1-SalesManProblem.exe: lib/libG1-SalesManProblem-library.dll.a
bin/G1-SalesManProblem.exe: common/Demo/CMakeFiles/G1-SalesManProblem.dir/linklibs.rsp
bin/G1-SalesManProblem.exe: common/Demo/CMakeFiles/G1-SalesManProblem.dir/objects1.rsp
bin/G1-SalesManProblem.exe: common/Demo/CMakeFiles/G1-SalesManProblem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ..\..\bin\G1-SalesManProblem.exe"
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\common\Demo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\G1-SalesManProblem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
common/Demo/CMakeFiles/G1-SalesManProblem.dir/build: bin/G1-SalesManProblem.exe

.PHONY : common/Demo/CMakeFiles/G1-SalesManProblem.dir/build

common/Demo/CMakeFiles/G1-SalesManProblem.dir/clean:
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\common\Demo && $(CMAKE_COMMAND) -P CMakeFiles\G1-SalesManProblem.dir\cmake_clean.cmake
.PHONY : common/Demo/CMakeFiles/G1-SalesManProblem.dir/clean

common/Demo/CMakeFiles/G1-SalesManProblem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\common\Demo C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\common\Demo C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\build\common\Demo\CMakeFiles\G1-SalesManProblem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : common/Demo/CMakeFiles/G1-SalesManProblem.dir/depend

