# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Ricardo/Object/NetWork/Socket/SocketForCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/app.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/app.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/app.dir/flags.make

tests/CMakeFiles/app.dir/main.cpp.o: tests/CMakeFiles/app.dir/flags.make
tests/CMakeFiles/app.dir/main.cpp.o: ../tests/main.cpp
tests/CMakeFiles/app.dir/main.cpp.o: tests/CMakeFiles/app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/app.dir/main.cpp.o"
	cd /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/app.dir/main.cpp.o -MF CMakeFiles/app.dir/main.cpp.o.d -o CMakeFiles/app.dir/main.cpp.o -c /home/Ricardo/Object/NetWork/Socket/SocketForCpp/tests/main.cpp

tests/CMakeFiles/app.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app.dir/main.cpp.i"
	cd /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/Ricardo/Object/NetWork/Socket/SocketForCpp/tests/main.cpp > CMakeFiles/app.dir/main.cpp.i

tests/CMakeFiles/app.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app.dir/main.cpp.s"
	cd /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/Ricardo/Object/NetWork/Socket/SocketForCpp/tests/main.cpp -o CMakeFiles/app.dir/main.cpp.s

# Object files for target app
app_OBJECTS = \
"CMakeFiles/app.dir/main.cpp.o"

# External object files for target app
app_EXTERNAL_OBJECTS =

../bin/app: tests/CMakeFiles/app.dir/main.cpp.o
../bin/app: tests/CMakeFiles/app.dir/build.make
../bin/app: ../lib/libricardo.so
../bin/app: tests/CMakeFiles/app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/app"
	cd /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/app.dir/build: ../bin/app
.PHONY : tests/CMakeFiles/app.dir/build

tests/CMakeFiles/app.dir/clean:
	cd /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/app.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/app.dir/clean

tests/CMakeFiles/app.dir/depend:
	cd /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Ricardo/Object/NetWork/Socket/SocketForCpp /home/Ricardo/Object/NetWork/Socket/SocketForCpp/tests /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/tests /home/Ricardo/Object/NetWork/Socket/SocketForCpp/build/tests/CMakeFiles/app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/app.dir/depend

