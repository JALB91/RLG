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
CMAKE_SOURCE_DIR = /home/damiano/Games/RLG/jalb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damiano/Games/RLG/jalb/build

# Include any dependencies generated for this target.
include CMakeFiles/jalb.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/jalb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/jalb.dir/flags.make

CMakeFiles/jalb.dir/jalb.cpp.o: CMakeFiles/jalb.dir/flags.make
CMakeFiles/jalb.dir/jalb.cpp.o: ../jalb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/jalb/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/jalb.dir/jalb.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/jalb.cpp.o -c /home/damiano/Games/RLG/jalb/jalb.cpp

CMakeFiles/jalb.dir/jalb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/jalb.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/jalb.cpp > CMakeFiles/jalb.dir/jalb.cpp.i

CMakeFiles/jalb.dir/jalb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/jalb.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/jalb.cpp -o CMakeFiles/jalb.dir/jalb.cpp.s

CMakeFiles/jalb.dir/jalb.cpp.o.requires:

.PHONY : CMakeFiles/jalb.dir/jalb.cpp.o.requires

CMakeFiles/jalb.dir/jalb.cpp.o.provides: CMakeFiles/jalb.dir/jalb.cpp.o.requires
	$(MAKE) -f CMakeFiles/jalb.dir/build.make CMakeFiles/jalb.dir/jalb.cpp.o.provides.build
.PHONY : CMakeFiles/jalb.dir/jalb.cpp.o.provides

CMakeFiles/jalb.dir/jalb.cpp.o.provides.build: CMakeFiles/jalb.dir/jalb.cpp.o


CMakeFiles/jalb.dir/src/Director.cpp.o: CMakeFiles/jalb.dir/flags.make
CMakeFiles/jalb.dir/src/Director.cpp.o: ../src/Director.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/jalb/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/jalb.dir/src/Director.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/src/Director.cpp.o -c /home/damiano/Games/RLG/jalb/src/Director.cpp

CMakeFiles/jalb.dir/src/Director.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/src/Director.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/src/Director.cpp > CMakeFiles/jalb.dir/src/Director.cpp.i

CMakeFiles/jalb.dir/src/Director.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/src/Director.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/src/Director.cpp -o CMakeFiles/jalb.dir/src/Director.cpp.s

CMakeFiles/jalb.dir/src/Director.cpp.o.requires:

.PHONY : CMakeFiles/jalb.dir/src/Director.cpp.o.requires

CMakeFiles/jalb.dir/src/Director.cpp.o.provides: CMakeFiles/jalb.dir/src/Director.cpp.o.requires
	$(MAKE) -f CMakeFiles/jalb.dir/build.make CMakeFiles/jalb.dir/src/Director.cpp.o.provides.build
.PHONY : CMakeFiles/jalb.dir/src/Director.cpp.o.provides

CMakeFiles/jalb.dir/src/Director.cpp.o.provides.build: CMakeFiles/jalb.dir/src/Director.cpp.o


CMakeFiles/jalb.dir/src/Node.cpp.o: CMakeFiles/jalb.dir/flags.make
CMakeFiles/jalb.dir/src/Node.cpp.o: ../src/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/jalb/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/jalb.dir/src/Node.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/src/Node.cpp.o -c /home/damiano/Games/RLG/jalb/src/Node.cpp

CMakeFiles/jalb.dir/src/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/src/Node.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/src/Node.cpp > CMakeFiles/jalb.dir/src/Node.cpp.i

CMakeFiles/jalb.dir/src/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/src/Node.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/src/Node.cpp -o CMakeFiles/jalb.dir/src/Node.cpp.s

CMakeFiles/jalb.dir/src/Node.cpp.o.requires:

.PHONY : CMakeFiles/jalb.dir/src/Node.cpp.o.requires

CMakeFiles/jalb.dir/src/Node.cpp.o.provides: CMakeFiles/jalb.dir/src/Node.cpp.o.requires
	$(MAKE) -f CMakeFiles/jalb.dir/build.make CMakeFiles/jalb.dir/src/Node.cpp.o.provides.build
.PHONY : CMakeFiles/jalb.dir/src/Node.cpp.o.provides

CMakeFiles/jalb.dir/src/Node.cpp.o.provides.build: CMakeFiles/jalb.dir/src/Node.cpp.o


CMakeFiles/jalb.dir/src/Pos.cpp.o: CMakeFiles/jalb.dir/flags.make
CMakeFiles/jalb.dir/src/Pos.cpp.o: ../src/Pos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/jalb/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/jalb.dir/src/Pos.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/src/Pos.cpp.o -c /home/damiano/Games/RLG/jalb/src/Pos.cpp

CMakeFiles/jalb.dir/src/Pos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/src/Pos.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/src/Pos.cpp > CMakeFiles/jalb.dir/src/Pos.cpp.i

CMakeFiles/jalb.dir/src/Pos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/src/Pos.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/src/Pos.cpp -o CMakeFiles/jalb.dir/src/Pos.cpp.s

CMakeFiles/jalb.dir/src/Pos.cpp.o.requires:

.PHONY : CMakeFiles/jalb.dir/src/Pos.cpp.o.requires

CMakeFiles/jalb.dir/src/Pos.cpp.o.provides: CMakeFiles/jalb.dir/src/Pos.cpp.o.requires
	$(MAKE) -f CMakeFiles/jalb.dir/build.make CMakeFiles/jalb.dir/src/Pos.cpp.o.provides.build
.PHONY : CMakeFiles/jalb.dir/src/Pos.cpp.o.provides

CMakeFiles/jalb.dir/src/Pos.cpp.o.provides.build: CMakeFiles/jalb.dir/src/Pos.cpp.o


CMakeFiles/jalb.dir/src/Size.cpp.o: CMakeFiles/jalb.dir/flags.make
CMakeFiles/jalb.dir/src/Size.cpp.o: ../src/Size.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/Games/RLG/jalb/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/jalb.dir/src/Size.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jalb.dir/src/Size.cpp.o -c /home/damiano/Games/RLG/jalb/src/Size.cpp

CMakeFiles/jalb.dir/src/Size.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jalb.dir/src/Size.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/Games/RLG/jalb/src/Size.cpp > CMakeFiles/jalb.dir/src/Size.cpp.i

CMakeFiles/jalb.dir/src/Size.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jalb.dir/src/Size.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/Games/RLG/jalb/src/Size.cpp -o CMakeFiles/jalb.dir/src/Size.cpp.s

CMakeFiles/jalb.dir/src/Size.cpp.o.requires:

.PHONY : CMakeFiles/jalb.dir/src/Size.cpp.o.requires

CMakeFiles/jalb.dir/src/Size.cpp.o.provides: CMakeFiles/jalb.dir/src/Size.cpp.o.requires
	$(MAKE) -f CMakeFiles/jalb.dir/build.make CMakeFiles/jalb.dir/src/Size.cpp.o.provides.build
.PHONY : CMakeFiles/jalb.dir/src/Size.cpp.o.provides

CMakeFiles/jalb.dir/src/Size.cpp.o.provides.build: CMakeFiles/jalb.dir/src/Size.cpp.o


# Object files for target jalb
jalb_OBJECTS = \
"CMakeFiles/jalb.dir/jalb.cpp.o" \
"CMakeFiles/jalb.dir/src/Director.cpp.o" \
"CMakeFiles/jalb.dir/src/Node.cpp.o" \
"CMakeFiles/jalb.dir/src/Pos.cpp.o" \
"CMakeFiles/jalb.dir/src/Size.cpp.o"

# External object files for target jalb
jalb_EXTERNAL_OBJECTS =

libjalb.a: CMakeFiles/jalb.dir/jalb.cpp.o
libjalb.a: CMakeFiles/jalb.dir/src/Director.cpp.o
libjalb.a: CMakeFiles/jalb.dir/src/Node.cpp.o
libjalb.a: CMakeFiles/jalb.dir/src/Pos.cpp.o
libjalb.a: CMakeFiles/jalb.dir/src/Size.cpp.o
libjalb.a: CMakeFiles/jalb.dir/build.make
libjalb.a: CMakeFiles/jalb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damiano/Games/RLG/jalb/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libjalb.a"
	$(CMAKE_COMMAND) -P CMakeFiles/jalb.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jalb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/jalb.dir/build: libjalb.a

.PHONY : CMakeFiles/jalb.dir/build

CMakeFiles/jalb.dir/requires: CMakeFiles/jalb.dir/jalb.cpp.o.requires
CMakeFiles/jalb.dir/requires: CMakeFiles/jalb.dir/src/Director.cpp.o.requires
CMakeFiles/jalb.dir/requires: CMakeFiles/jalb.dir/src/Node.cpp.o.requires
CMakeFiles/jalb.dir/requires: CMakeFiles/jalb.dir/src/Pos.cpp.o.requires
CMakeFiles/jalb.dir/requires: CMakeFiles/jalb.dir/src/Size.cpp.o.requires

.PHONY : CMakeFiles/jalb.dir/requires

CMakeFiles/jalb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/jalb.dir/cmake_clean.cmake
.PHONY : CMakeFiles/jalb.dir/clean

CMakeFiles/jalb.dir/depend:
	cd /home/damiano/Games/RLG/jalb/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damiano/Games/RLG/jalb /home/damiano/Games/RLG/jalb /home/damiano/Games/RLG/jalb/build /home/damiano/Games/RLG/jalb/build /home/damiano/Games/RLG/jalb/build/CMakeFiles/jalb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/jalb.dir/depend
