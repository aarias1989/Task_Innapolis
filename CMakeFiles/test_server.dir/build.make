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
CMAKE_SOURCE_DIR = /home/ariel/Ariel/Task

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ariel/Ariel/Task

# Include any dependencies generated for this target.
include CMakeFiles/test_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_server.dir/flags.make

CMakeFiles/test_server.dir/src_server/ManipStr.o: CMakeFiles/test_server.dir/flags.make
CMakeFiles/test_server.dir/src_server/ManipStr.o: src_server/ManipStr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ariel/Ariel/Task/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_server.dir/src_server/ManipStr.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_server.dir/src_server/ManipStr.o -c /home/ariel/Ariel/Task/src_server/ManipStr.cpp

CMakeFiles/test_server.dir/src_server/ManipStr.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_server.dir/src_server/ManipStr.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ariel/Ariel/Task/src_server/ManipStr.cpp > CMakeFiles/test_server.dir/src_server/ManipStr.i

CMakeFiles/test_server.dir/src_server/ManipStr.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_server.dir/src_server/ManipStr.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ariel/Ariel/Task/src_server/ManipStr.cpp -o CMakeFiles/test_server.dir/src_server/ManipStr.s

CMakeFiles/test_server.dir/src_server/Server.o: CMakeFiles/test_server.dir/flags.make
CMakeFiles/test_server.dir/src_server/Server.o: src_server/Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ariel/Ariel/Task/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_server.dir/src_server/Server.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_server.dir/src_server/Server.o -c /home/ariel/Ariel/Task/src_server/Server.cpp

CMakeFiles/test_server.dir/src_server/Server.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_server.dir/src_server/Server.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ariel/Ariel/Task/src_server/Server.cpp > CMakeFiles/test_server.dir/src_server/Server.i

CMakeFiles/test_server.dir/src_server/Server.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_server.dir/src_server/Server.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ariel/Ariel/Task/src_server/Server.cpp -o CMakeFiles/test_server.dir/src_server/Server.s

CMakeFiles/test_server.dir/src_server/ServerTCP.o: CMakeFiles/test_server.dir/flags.make
CMakeFiles/test_server.dir/src_server/ServerTCP.o: src_server/ServerTCP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ariel/Ariel/Task/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test_server.dir/src_server/ServerTCP.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_server.dir/src_server/ServerTCP.o -c /home/ariel/Ariel/Task/src_server/ServerTCP.cpp

CMakeFiles/test_server.dir/src_server/ServerTCP.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_server.dir/src_server/ServerTCP.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ariel/Ariel/Task/src_server/ServerTCP.cpp > CMakeFiles/test_server.dir/src_server/ServerTCP.i

CMakeFiles/test_server.dir/src_server/ServerTCP.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_server.dir/src_server/ServerTCP.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ariel/Ariel/Task/src_server/ServerTCP.cpp -o CMakeFiles/test_server.dir/src_server/ServerTCP.s

CMakeFiles/test_server.dir/src_server/ServerUDP.o: CMakeFiles/test_server.dir/flags.make
CMakeFiles/test_server.dir/src_server/ServerUDP.o: src_server/ServerUDP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ariel/Ariel/Task/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/test_server.dir/src_server/ServerUDP.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_server.dir/src_server/ServerUDP.o -c /home/ariel/Ariel/Task/src_server/ServerUDP.cpp

CMakeFiles/test_server.dir/src_server/ServerUDP.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_server.dir/src_server/ServerUDP.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ariel/Ariel/Task/src_server/ServerUDP.cpp > CMakeFiles/test_server.dir/src_server/ServerUDP.i

CMakeFiles/test_server.dir/src_server/ServerUDP.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_server.dir/src_server/ServerUDP.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ariel/Ariel/Task/src_server/ServerUDP.cpp -o CMakeFiles/test_server.dir/src_server/ServerUDP.s

CMakeFiles/test_server.dir/src_server/main.o: CMakeFiles/test_server.dir/flags.make
CMakeFiles/test_server.dir/src_server/main.o: src_server/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ariel/Ariel/Task/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/test_server.dir/src_server/main.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_server.dir/src_server/main.o -c /home/ariel/Ariel/Task/src_server/main.cpp

CMakeFiles/test_server.dir/src_server/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_server.dir/src_server/main.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ariel/Ariel/Task/src_server/main.cpp > CMakeFiles/test_server.dir/src_server/main.i

CMakeFiles/test_server.dir/src_server/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_server.dir/src_server/main.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ariel/Ariel/Task/src_server/main.cpp -o CMakeFiles/test_server.dir/src_server/main.s

# Object files for target test_server
test_server_OBJECTS = \
"CMakeFiles/test_server.dir/src_server/ManipStr.o" \
"CMakeFiles/test_server.dir/src_server/Server.o" \
"CMakeFiles/test_server.dir/src_server/ServerTCP.o" \
"CMakeFiles/test_server.dir/src_server/ServerUDP.o" \
"CMakeFiles/test_server.dir/src_server/main.o"

# External object files for target test_server
test_server_EXTERNAL_OBJECTS =

test_server: CMakeFiles/test_server.dir/src_server/ManipStr.o
test_server: CMakeFiles/test_server.dir/src_server/Server.o
test_server: CMakeFiles/test_server.dir/src_server/ServerTCP.o
test_server: CMakeFiles/test_server.dir/src_server/ServerUDP.o
test_server: CMakeFiles/test_server.dir/src_server/main.o
test_server: CMakeFiles/test_server.dir/build.make
test_server: CMakeFiles/test_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ariel/Ariel/Task/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable test_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_server.dir/build: test_server

.PHONY : CMakeFiles/test_server.dir/build

CMakeFiles/test_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_server.dir/clean

CMakeFiles/test_server.dir/depend:
	cd /home/ariel/Ariel/Task && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ariel/Ariel/Task /home/ariel/Ariel/Task /home/ariel/Ariel/Task /home/ariel/Ariel/Task /home/ariel/Ariel/Task/CMakeFiles/test_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_server.dir/depend
