# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug

# Include any dependencies generated for this target.
include common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/depend.make

# Include the progress variables for this target.
include common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/progress.make

# Include the compile flags for this target's objects.
include common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/flags.make

common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/functions.c.obj: common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/flags.make
common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/functions.c.obj: common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/includes_C.rsp
common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/functions.c.obj: ../common/Sources/functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/functions.c.obj"
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\common\Sources && C:\PROGRA~2\CODEBL~1\MinGW\bin\MI0840~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\G1-SalesManProblem-library.dir\functions.c.obj   -c C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\common\Sources\functions.c

common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/G1-SalesManProblem-library.dir/functions.c.i"
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\common\Sources && C:\PROGRA~2\CODEBL~1\MinGW\bin\MI0840~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\common\Sources\functions.c > CMakeFiles\G1-SalesManProblem-library.dir\functions.c.i

common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/G1-SalesManProblem-library.dir/functions.c.s"
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\common\Sources && C:\PROGRA~2\CODEBL~1\MinGW\bin\MI0840~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\common\Sources\functions.c -o CMakeFiles\G1-SalesManProblem-library.dir\functions.c.s

# Object files for target G1-SalesManProblem-library
G1__SalesManProblem__library_OBJECTS = \
"CMakeFiles/G1-SalesManProblem-library.dir/functions.c.obj"

# External object files for target G1-SalesManProblem-library
G1__SalesManProblem__library_EXTERNAL_OBJECTS =

bin/libG1-SalesManProblem-library.dll: common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/functions.c.obj
bin/libG1-SalesManProblem-library.dll: common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/build.make
bin/libG1-SalesManProblem-library.dll: common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/linklibs.rsp
bin/libG1-SalesManProblem-library.dll: common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/objects1.rsp
bin/libG1-SalesManProblem-library.dll: common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ..\..\bin\libG1-SalesManProblem-library.dll"
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\common\Sources && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\G1-SalesManProblem-library.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/build: bin/libG1-SalesManProblem-library.dll

.PHONY : common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/build

common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/clean:
	cd /d C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\common\Sources && $(CMAKE_COMMAND) -P CMakeFiles\G1-SalesManProblem-library.dir\cmake_clean.cmake
.PHONY : common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/clean

common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\common\Sources C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\common\Sources C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\common\Sources\CMakeFiles\G1-SalesManProblem-library.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : common/Sources/CMakeFiles/G1-SalesManProblem-library.dir/depend
