# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/damiano/Games/RLG

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damiano/Games/RLG/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/GameManager.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/GameManager.cpp.o: ../src/GameManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/GameManager.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/GameManager.cpp.o -c /home/damiano/Games/RLG/src/GameManager.cpp

CMakeFiles/main.dir/src/GameManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/GameManager.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/src/GameManager.cpp > CMakeFiles/main.dir/src/GameManager.cpp.i

CMakeFiles/main.dir/src/GameManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/GameManager.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/src/GameManager.cpp -o CMakeFiles/main.dir/src/GameManager.cpp.s

CMakeFiles/main.dir/src/GameManager.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/src/GameManager.cpp.o.requires

CMakeFiles/main.dir/src/GameManager.cpp.o.provides: CMakeFiles/main.dir/src/GameManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/GameManager.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/src/GameManager.cpp.o.provides

CMakeFiles/main.dir/src/GameManager.cpp.o.provides.build: CMakeFiles/main.dir/src/GameManager.cpp.o


CMakeFiles/main.dir/src/Node.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Node.cpp.o: ../src/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/Node.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/Node.cpp.o -c /home/damiano/Games/RLG/src/Node.cpp

CMakeFiles/main.dir/src/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Node.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/src/Node.cpp > CMakeFiles/main.dir/src/Node.cpp.i

CMakeFiles/main.dir/src/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Node.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/src/Node.cpp -o CMakeFiles/main.dir/src/Node.cpp.s

CMakeFiles/main.dir/src/Node.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/src/Node.cpp.o.requires

CMakeFiles/main.dir/src/Node.cpp.o.provides: CMakeFiles/main.dir/src/Node.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Node.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/src/Node.cpp.o.provides

CMakeFiles/main.dir/src/Node.cpp.o.provides.build: CMakeFiles/main.dir/src/Node.cpp.o


CMakeFiles/main.dir/src/Player.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/Player.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/Player.cpp.o -c /home/damiano/Games/RLG/src/Player.cpp

CMakeFiles/main.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Player.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/src/Player.cpp > CMakeFiles/main.dir/src/Player.cpp.i

CMakeFiles/main.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Player.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/src/Player.cpp -o CMakeFiles/main.dir/src/Player.cpp.s

CMakeFiles/main.dir/src/Player.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/src/Player.cpp.o.requires

CMakeFiles/main.dir/src/Player.cpp.o.provides: CMakeFiles/main.dir/src/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Player.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/src/Player.cpp.o.provides

CMakeFiles/main.dir/src/Player.cpp.o.provides.build: CMakeFiles/main.dir/src/Player.cpp.o


CMakeFiles/main.dir/src/Pos.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Pos.cpp.o: ../src/Pos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/Pos.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/Pos.cpp.o -c /home/damiano/Games/RLG/src/Pos.cpp

CMakeFiles/main.dir/src/Pos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Pos.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/src/Pos.cpp > CMakeFiles/main.dir/src/Pos.cpp.i

CMakeFiles/main.dir/src/Pos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Pos.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/src/Pos.cpp -o CMakeFiles/main.dir/src/Pos.cpp.s

CMakeFiles/main.dir/src/Pos.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/src/Pos.cpp.o.requires

CMakeFiles/main.dir/src/Pos.cpp.o.provides: CMakeFiles/main.dir/src/Pos.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Pos.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/src/Pos.cpp.o.provides

CMakeFiles/main.dir/src/Pos.cpp.o.provides.build: CMakeFiles/main.dir/src/Pos.cpp.o


CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/main.cpp.o -c /home/damiano/Games/RLG/src/main.cpp

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s

CMakeFiles/main.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/src/main.cpp.o.requires

CMakeFiles/main.dir/src/main.cpp.o.provides: CMakeFiles/main.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/src/main.cpp.o.provides

CMakeFiles/main.dir/src/main.cpp.o.provides.build: CMakeFiles/main.dir/src/main.cpp.o


# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/GameManager.cpp.o" \
"CMakeFiles/main.dir/src/Node.cpp.o" \
"CMakeFiles/main.dir/src/Player.cpp.o" \
"CMakeFiles/main.dir/src/Pos.cpp.o" \
"CMakeFiles/main.dir/src/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/GameManager.cpp.o
main: CMakeFiles/main.dir/src/Node.cpp.o
main: CMakeFiles/main.dir/src/Player.cpp.o
main: CMakeFiles/main.dir/src/Pos.cpp.o
main: CMakeFiles/main.dir/src/main.cpp.o
main: CMakeFiles/main.dir/build.make
main: /usr/lib/x86_64-linux-gnu/libcurses.so
main: /usr/lib/x86_64-linux-gnu/libform.so
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/GameManager.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/Node.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/Player.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/Pos.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/main.dir/requires

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/damiano/Games/RLG/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damiano/Games/RLG /home/damiano/Games/RLG /home/damiano/Games/RLG/build /home/damiano/Games/RLG/build /home/damiano/Games/RLG/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

