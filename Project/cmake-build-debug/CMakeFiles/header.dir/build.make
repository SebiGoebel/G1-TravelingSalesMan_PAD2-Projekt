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
include CMakeFiles/header.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/header.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/header.dir/flags.make

CMakeFiles/header.dir/functions.c.obj: CMakeFiles/header.dir/flags.make
CMakeFiles/header.dir/functions.c.obj: ../functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/header.dir/functions.c.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\MI0840~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\header.dir\functions.c.obj   -c C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\functions.c

CMakeFiles/header.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/header.dir/functions.c.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\MI0840~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\functions.c > CMakeFiles\header.dir\functions.c.i

CMakeFiles/header.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/header.dir/functions.c.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\MI0840~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\functions.c -o CMakeFiles\header.dir\functions.c.s

# Object files for target header
header_OBJECTS = \
"CMakeFiles/header.dir/functions.c.obj"

# External object files for target header
header_EXTERNAL_OBJECTS =

libheader.dll: CMakeFiles/header.dir/functions.c.obj
libheader.dll: CMakeFiles/header.dir/build.make
libheader.dll: CMakeFiles/header.dir/linklibs.rsp
libheader.dll: CMakeFiles/header.dir/objects1.rsp
libheader.dll: CMakeFiles/header.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library libheader.dll"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\header.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/header.dir/build: libheader.dll

.PHONY : CMakeFiles/header.dir/build

CMakeFiles/header.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\header.dir\cmake_clean.cmake
.PHONY : CMakeFiles/header.dir/clean

CMakeFiles/header.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug C:\Users\sebas\OneDrive\Dokumente\FH\2.Semester\PAD\Projekt\Projekt\G1-TravelingSalesMan_PAD2-Projekt\Project\cmake-build-debug\CMakeFiles\header.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/header.dir/depend

