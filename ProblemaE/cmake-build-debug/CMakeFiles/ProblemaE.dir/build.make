# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ProblemaE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ProblemaE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProblemaE.dir/flags.make

CMakeFiles/ProblemaE.dir/main.cpp.obj: CMakeFiles/ProblemaE.dir/flags.make
CMakeFiles/ProblemaE.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProblemaE.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProblemaE.dir\main.cpp.obj -c C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\main.cpp

CMakeFiles/ProblemaE.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProblemaE.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\main.cpp > CMakeFiles\ProblemaE.dir\main.cpp.i

CMakeFiles/ProblemaE.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProblemaE.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\main.cpp -o CMakeFiles\ProblemaE.dir\main.cpp.s

CMakeFiles/ProblemaE.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/ProblemaE.dir/main.cpp.obj.requires

CMakeFiles/ProblemaE.dir/main.cpp.obj.provides: CMakeFiles/ProblemaE.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\ProblemaE.dir\build.make CMakeFiles/ProblemaE.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/ProblemaE.dir/main.cpp.obj.provides

CMakeFiles/ProblemaE.dir/main.cpp.obj.provides.build: CMakeFiles/ProblemaE.dir/main.cpp.obj


# Object files for target ProblemaE
ProblemaE_OBJECTS = \
"CMakeFiles/ProblemaE.dir/main.cpp.obj"

# External object files for target ProblemaE
ProblemaE_EXTERNAL_OBJECTS =

ProblemaE.exe: CMakeFiles/ProblemaE.dir/main.cpp.obj
ProblemaE.exe: CMakeFiles/ProblemaE.dir/build.make
ProblemaE.exe: CMakeFiles/ProblemaE.dir/linklibs.rsp
ProblemaE.exe: CMakeFiles/ProblemaE.dir/objects1.rsp
ProblemaE.exe: CMakeFiles/ProblemaE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProblemaE.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ProblemaE.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProblemaE.dir/build: ProblemaE.exe

.PHONY : CMakeFiles/ProblemaE.dir/build

CMakeFiles/ProblemaE.dir/requires: CMakeFiles/ProblemaE.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/ProblemaE.dir/requires

CMakeFiles/ProblemaE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ProblemaE.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ProblemaE.dir/clean

CMakeFiles/ProblemaE.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\cmake-build-debug C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\cmake-build-debug C:\Users\Anselmo\Documents\GitHub\ClubAlgoritmia\ProblemaE\cmake-build-debug\CMakeFiles\ProblemaE.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProblemaE.dir/depend

