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
CMAKE_COMMAND = "D:\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\alla\CLionProjects\projekt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\alla\CLionProjects\projekt\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/unititled1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/unititled1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/unititled1.dir/flags.make

CMakeFiles/unititled1.dir/main.cpp.obj: CMakeFiles/unititled1.dir/flags.make
CMakeFiles/unititled1.dir/main.cpp.obj: CMakeFiles/unititled1.dir/includes_CXX.rsp
CMakeFiles/unititled1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alla\CLionProjects\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/unititled1.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\unititled1.dir\main.cpp.obj -c C:\Users\alla\CLionProjects\projekt\main.cpp

CMakeFiles/unititled1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unititled1.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alla\CLionProjects\projekt\main.cpp > CMakeFiles\unititled1.dir\main.cpp.i

CMakeFiles/unititled1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unititled1.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alla\CLionProjects\projekt\main.cpp -o CMakeFiles\unititled1.dir\main.cpp.s

# Object files for target unititled1
unititled1_OBJECTS = \
"CMakeFiles/unititled1.dir/main.cpp.obj"

# External object files for target unititled1
unititled1_EXTERNAL_OBJECTS =

unititled1.exe: CMakeFiles/unititled1.dir/main.cpp.obj
unititled1.exe: CMakeFiles/unititled1.dir/build.make
unititled1.exe: C:/Users/alla/Documents/opencv/build/lib/libopencv_highgui452.dll.a
unititled1.exe: C:/Program\ Files\ (x86)/mingw-w64/lib/libsfml-graphics-d.a
unititled1.exe: C:/Users/alla/Documents/opencv/build/lib/libopencv_videoio452.dll.a
unititled1.exe: C:/Users/alla/Documents/opencv/build/lib/libopencv_imgcodecs452.dll.a
unititled1.exe: C:/Users/alla/Documents/opencv/build/lib/libopencv_imgproc452.dll.a
unititled1.exe: C:/Users/alla/Documents/opencv/build/lib/libopencv_core452.dll.a
unititled1.exe: C:/Program\ Files\ (x86)/mingw-w64/lib/libsfml-window-d.a
unititled1.exe: C:/Program\ Files\ (x86)/mingw-w64/lib/libsfml-system-d.a
unititled1.exe: CMakeFiles/unititled1.dir/linklibs.rsp
unititled1.exe: CMakeFiles/unititled1.dir/objects1.rsp
unititled1.exe: CMakeFiles/unititled1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\alla\CLionProjects\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable unititled1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\unititled1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/unititled1.dir/build: unititled1.exe

.PHONY : CMakeFiles/unititled1.dir/build

CMakeFiles/unititled1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\unititled1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/unititled1.dir/clean

CMakeFiles/unititled1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\alla\CLionProjects\projekt C:\Users\alla\CLionProjects\projekt C:\Users\alla\CLionProjects\projekt\cmake-build-debug C:\Users\alla\CLionProjects\projekt\cmake-build-debug C:\Users\alla\CLionProjects\projekt\cmake-build-debug\CMakeFiles\unititled1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unititled1.dir/depend

