# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/local/lib/python3.10/dist-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /usr/local/lib/python3.10/dist-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Ricardo/RiSer/SocketForCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Ricardo/RiSer/SocketForCpp/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/appsocket.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/appsocket.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/appsocket.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/appsocket.dir/flags.make

tests/CMakeFiles/appsocket.dir/socket_t.cc.o: tests/CMakeFiles/appsocket.dir/flags.make
tests/CMakeFiles/appsocket.dir/socket_t.cc.o: /home/Ricardo/RiSer/SocketForCpp/tests/socket_t.cc
tests/CMakeFiles/appsocket.dir/socket_t.cc.o: tests/CMakeFiles/appsocket.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Ricardo/RiSer/SocketForCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/appsocket.dir/socket_t.cc.o"
	cd /home/Ricardo/RiSer/SocketForCpp/build/tests && /usr/bin/c++ $(CXX_DEFINES) -D__FILE__=\"tests/socket_t.cc\" $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/appsocket.dir/socket_t.cc.o -MF CMakeFiles/appsocket.dir/socket_t.cc.o.d -o CMakeFiles/appsocket.dir/socket_t.cc.o -c /home/Ricardo/RiSer/SocketForCpp/tests/socket_t.cc

tests/CMakeFiles/appsocket.dir/socket_t.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/appsocket.dir/socket_t.cc.i"
	cd /home/Ricardo/RiSer/SocketForCpp/build/tests && /usr/bin/c++ $(CXX_DEFINES) -D__FILE__=\"tests/socket_t.cc\" $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/Ricardo/RiSer/SocketForCpp/tests/socket_t.cc > CMakeFiles/appsocket.dir/socket_t.cc.i

tests/CMakeFiles/appsocket.dir/socket_t.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/appsocket.dir/socket_t.cc.s"
	cd /home/Ricardo/RiSer/SocketForCpp/build/tests && /usr/bin/c++ $(CXX_DEFINES) -D__FILE__=\"tests/socket_t.cc\" $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/Ricardo/RiSer/SocketForCpp/tests/socket_t.cc -o CMakeFiles/appsocket.dir/socket_t.cc.s

# Object files for target appsocket
appsocket_OBJECTS = \
"CMakeFiles/appsocket.dir/socket_t.cc.o"

# External object files for target appsocket
appsocket_EXTERNAL_OBJECTS =

/home/Ricardo/RiSer/SocketForCpp/bin/appsocket: tests/CMakeFiles/appsocket.dir/socket_t.cc.o
/home/Ricardo/RiSer/SocketForCpp/bin/appsocket: tests/CMakeFiles/appsocket.dir/build.make
/home/Ricardo/RiSer/SocketForCpp/bin/appsocket: /home/Ricardo/RiSer/SocketForCpp/lib/libricardo.so
/home/Ricardo/RiSer/SocketForCpp/bin/appsocket: tests/CMakeFiles/appsocket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/Ricardo/RiSer/SocketForCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/Ricardo/RiSer/SocketForCpp/bin/appsocket"
	cd /home/Ricardo/RiSer/SocketForCpp/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/appsocket.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/appsocket.dir/build: /home/Ricardo/RiSer/SocketForCpp/bin/appsocket
.PHONY : tests/CMakeFiles/appsocket.dir/build

tests/CMakeFiles/appsocket.dir/clean:
	cd /home/Ricardo/RiSer/SocketForCpp/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/appsocket.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/appsocket.dir/clean

tests/CMakeFiles/appsocket.dir/depend:
	cd /home/Ricardo/RiSer/SocketForCpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Ricardo/RiSer/SocketForCpp /home/Ricardo/RiSer/SocketForCpp/tests /home/Ricardo/RiSer/SocketForCpp/build /home/Ricardo/RiSer/SocketForCpp/build/tests /home/Ricardo/RiSer/SocketForCpp/build/tests/CMakeFiles/appsocket.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/appsocket.dir/depend
