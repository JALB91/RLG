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
include jalb/CMakeFiles/jalb.dir/depend.make

# Include the progress variables for this target.
include jalb/CMakeFiles/jalb.dir/progress.make

# Include the compile flags for this target's objects.
include jalb/CMakeFiles/jalb.dir/flags.make

jalb/CMakeFiles/jalb.dir/jalb.cpp.o: jalb/CMakeFiles/jalb.dir/flags.make
jalb/CMakeFiles/jalb.dir/jalb.cpp.o: ../jalb/jalb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jalb/CMakeFiles/jalb.dir/jalb.cpp.o"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/jalb.cpp.o -c /home/damiano/Games/RLG/jalb/jalb.cpp

jalb/CMakeFiles/jalb.dir/jalb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/jalb.cpp.i"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/jalb.cpp > CMakeFiles/jalb.dir/jalb.cpp.i

jalb/CMakeFiles/jalb.dir/jalb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/jalb.cpp.s"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/jalb.cpp -o CMakeFiles/jalb.dir/jalb.cpp.s

jalb/CMakeFiles/jalb.dir/jalb.cpp.o.requires:

.PHONY : jalb/CMakeFiles/jalb.dir/jalb.cpp.o.requires

jalb/CMakeFiles/jalb.dir/jalb.cpp.o.provides: jalb/CMakeFiles/jalb.dir/jalb.cpp.o.requires
	$(MAKE) -f jalb/CMakeFiles/jalb.dir/build.make jalb/CMakeFiles/jalb.dir/jalb.cpp.o.provides.build
.PHONY : jalb/CMakeFiles/jalb.dir/jalb.cpp.o.provides

jalb/CMakeFiles/jalb.dir/jalb.cpp.o.provides.build: jalb/CMakeFiles/jalb.dir/jalb.cpp.o


jalb/CMakeFiles/jalb.dir/src/Node.cpp.o: jalb/CMakeFiles/jalb.dir/flags.make
jalb/CMakeFiles/jalb.dir/src/Node.cpp.o: ../jalb/src/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object jalb/CMakeFiles/jalb.dir/src/Node.cpp.o"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/src/Node.cpp.o -c /home/damiano/Games/RLG/jalb/src/Node.cpp

jalb/CMakeFiles/jalb.dir/src/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/src/Node.cpp.i"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/src/Node.cpp > CMakeFiles/jalb.dir/src/Node.cpp.i

jalb/CMakeFiles/jalb.dir/src/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/src/Node.cpp.s"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/src/Node.cpp -o CMakeFiles/jalb.dir/src/Node.cpp.s

jalb/CMakeFiles/jalb.dir/src/Node.cpp.o.requires:

.PHONY : jalb/CMakeFiles/jalb.dir/src/Node.cpp.o.requires

jalb/CMakeFiles/jalb.dir/src/Node.cpp.o.provides: jalb/CMakeFiles/jalb.dir/src/Node.cpp.o.requires
	$(MAKE) -f jalb/CMakeFiles/jalb.dir/build.make jalb/CMakeFiles/jalb.dir/src/Node.cpp.o.provides.build
.PHONY : jalb/CMakeFiles/jalb.dir/src/Node.cpp.o.provides

jalb/CMakeFiles/jalb.dir/src/Node.cpp.o.provides.build: jalb/CMakeFiles/jalb.dir/src/Node.cpp.o


jalb/CMakeFiles/jalb.dir/src/Director.cpp.o: jalb/CMakeFiles/jalb.dir/flags.make
jalb/CMakeFiles/jalb.dir/src/Director.cpp.o: ../jalb/src/Director.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object jalb/CMakeFiles/jalb.dir/src/Director.cpp.o"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/src/Director.cpp.o -c /home/damiano/Games/RLG/jalb/src/Director.cpp

jalb/CMakeFiles/jalb.dir/src/Director.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/src/Director.cpp.i"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/src/Director.cpp > CMakeFiles/jalb.dir/src/Director.cpp.i

jalb/CMakeFiles/jalb.dir/src/Director.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/src/Director.cpp.s"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/src/Director.cpp -o CMakeFiles/jalb.dir/src/Director.cpp.s

jalb/CMakeFiles/jalb.dir/src/Director.cpp.o.requires:

.PHONY : jalb/CMakeFiles/jalb.dir/src/Director.cpp.o.requires

jalb/CMakeFiles/jalb.dir/src/Director.cpp.o.provides: jalb/CMakeFiles/jalb.dir/src/Director.cpp.o.requires
	$(MAKE) -f jalb/CMakeFiles/jalb.dir/build.make jalb/CMakeFiles/jalb.dir/src/Director.cpp.o.provides.build
.PHONY : jalb/CMakeFiles/jalb.dir/src/Director.cpp.o.provides

jalb/CMakeFiles/jalb.dir/src/Director.cpp.o.provides.build: jalb/CMakeFiles/jalb.dir/src/Director.cpp.o


jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o: jalb/CMakeFiles/jalb.dir/flags.make
jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o: ../jalb/src/Pos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/src/Pos.cpp.o -c /home/damiano/Games/RLG/jalb/src/Pos.cpp

jalb/CMakeFiles/jalb.dir/src/Pos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/src/Pos.cpp.i"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/src/Pos.cpp > CMakeFiles/jalb.dir/src/Pos.cpp.i

jalb/CMakeFiles/jalb.dir/src/Pos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/src/Pos.cpp.s"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/src/Pos.cpp -o CMakeFiles/jalb.dir/src/Pos.cpp.s

jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o.requires:

.PHONY : jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o.requires

jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o.provides: jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o.requires
	$(MAKE) -f jalb/CMakeFiles/jalb.dir/build.make jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o.provides.build
.PHONY : jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o.provides

jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o.provides.build: jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o


jalb/CMakeFiles/jalb.dir/src/Size.cpp.o: jalb/CMakeFiles/jalb.dir/flags.make
jalb/CMakeFiles/jalb.dir/src/Size.cpp.o: ../jalb/src/Size.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object jalb/CMakeFiles/jalb.dir/src/Size.cpp.o"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/src/Size.cpp.o -c /home/damiano/Games/RLG/jalb/src/Size.cpp

jalb/CMakeFiles/jalb.dir/src/Size.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/src/Size.cpp.i"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/src/Size.cpp > CMakeFiles/jalb.dir/src/Size.cpp.i

jalb/CMakeFiles/jalb.dir/src/Size.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/src/Size.cpp.s"
	cd /home/damiano/Games/RLG/build/jalb && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/src/Size.cpp -o CMakeFiles/jalb.dir/src/Size.cpp.s

jalb/CMakeFiles/jalb.dir/src/Size.cpp.o.requires:

.PHONY : jalb/CMakeFiles/jalb.dir/src/Size.cpp.o.requires

jalb/CMakeFiles/jalb.dir/src/Size.cpp.o.provides: jalb/CMakeFiles/jalb.dir/src/Size.cpp.o.requires
	$(MAKE) -f jalb/CMakeFiles/jalb.dir/build.make jalb/CMakeFiles/jalb.dir/src/Size.cpp.o.provides.build
.PHONY : jalb/CMakeFiles/jalb.dir/src/Size.cpp.o.provides

jalb/CMakeFiles/jalb.dir/src/Size.cpp.o.provides.build: jalb/CMakeFiles/jalb.dir/src/Size.cpp.o


# Object files for target jalb
jalb_OBJECTS = \
"CMakeFiles/jalb.dir/jalb.cpp.o" \
"CMakeFiles/jalb.dir/src/Node.cpp.o" \
"CMakeFiles/jalb.dir/src/Director.cpp.o" \
"CMakeFiles/jalb.dir/src/Pos.cpp.o" \
"CMakeFiles/jalb.dir/src/Size.cpp.o"

# External object files for target jalb
jalb_EXTERNAL_OBJECTS =

jalb/libjalb.a: jalb/CMakeFiles/jalb.dir/jalb.cpp.o
jalb/libjalb.a: jalb/CMakeFiles/jalb.dir/src/Node.cpp.o
jalb/libjalb.a: jalb/CMakeFiles/jalb.dir/src/Director.cpp.o
jalb/libjalb.a: jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o
jalb/libjalb.a: jalb/CMakeFiles/jalb.dir/src/Size.cpp.o
jalb/libjalb.a: jalb/CMakeFiles/jalb.dir/build.make
jalb/libjalb.a: jalb/CMakeFiles/jalb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damiano/Games/RLG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libjalb.a"
	cd /home/damiano/Games/RLG/build/jalb && $(CMAKE_COMMAND) -P CMakeFiles/jalb.dir/cmake_clean_target.cmake
	cd /home/damiano/Games/RLG/build/jalb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jalb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jalb/CMakeFiles/jalb.dir/build: jalb/libjalb.a

.PHONY : jalb/CMakeFiles/jalb.dir/build

jalb/CMakeFiles/jalb.dir/requires: jalb/CMakeFiles/jalb.dir/jalb.cpp.o.requires
jalb/CMakeFiles/jalb.dir/requires: jalb/CMakeFiles/jalb.dir/src/Node.cpp.o.requires
jalb/CMakeFiles/jalb.dir/requires: jalb/CMakeFiles/jalb.dir/src/Director.cpp.o.requires
jalb/CMakeFiles/jalb.dir/requires: jalb/CMakeFiles/jalb.dir/src/Pos.cpp.o.requires
jalb/CMakeFiles/jalb.dir/requires: jalb/CMakeFiles/jalb.dir/src/Size.cpp.o.requires

.PHONY : jalb/CMakeFiles/jalb.dir/requires

jalb/CMakeFiles/jalb.dir/clean:
	cd /home/damiano/Games/RLG/build/jalb && $(CMAKE_COMMAND) -P CMakeFiles/jalb.dir/cmake_clean.cmake
.PHONY : jalb/CMakeFiles/jalb.dir/clean

jalb/CMakeFiles/jalb.dir/depend:
	cd /home/damiano/Games/RLG/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damiano/Games/RLG /home/damiano/Games/RLG/jalb /home/damiano/Games/RLG/build /home/damiano/Games/RLG/build/jalb /home/damiano/Games/RLG/build/jalb/CMakeFiles/jalb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jalb/CMakeFiles/jalb.dir/depend
