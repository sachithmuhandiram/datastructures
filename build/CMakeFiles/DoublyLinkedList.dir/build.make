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
CMAKE_SOURCE_DIR = /home/sachith/Documents/Github/datastructures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sachith/Documents/Github/datastructures/build

# Include any dependencies generated for this target.
include CMakeFiles/DoublyLinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DoublyLinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DoublyLinkedList.dir/flags.make

CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.o: CMakeFiles/DoublyLinkedList.dir/flags.make
CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.o: ../doublylinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sachith/Documents/Github/datastructures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.o -c /home/sachith/Documents/Github/datastructures/doublylinkedList.cpp

CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sachith/Documents/Github/datastructures/doublylinkedList.cpp > CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.i

CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sachith/Documents/Github/datastructures/doublylinkedList.cpp -o CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.s

# Object files for target DoublyLinkedList
DoublyLinkedList_OBJECTS = \
"CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.o"

# External object files for target DoublyLinkedList
DoublyLinkedList_EXTERNAL_OBJECTS =

libDoublyLinkedList.a: CMakeFiles/DoublyLinkedList.dir/doublylinkedList.cpp.o
libDoublyLinkedList.a: CMakeFiles/DoublyLinkedList.dir/build.make
libDoublyLinkedList.a: CMakeFiles/DoublyLinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sachith/Documents/Github/datastructures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libDoublyLinkedList.a"
	$(CMAKE_COMMAND) -P CMakeFiles/DoublyLinkedList.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DoublyLinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DoublyLinkedList.dir/build: libDoublyLinkedList.a

.PHONY : CMakeFiles/DoublyLinkedList.dir/build

CMakeFiles/DoublyLinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DoublyLinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DoublyLinkedList.dir/clean

CMakeFiles/DoublyLinkedList.dir/depend:
	cd /home/sachith/Documents/Github/datastructures/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sachith/Documents/Github/datastructures /home/sachith/Documents/Github/datastructures /home/sachith/Documents/Github/datastructures/build /home/sachith/Documents/Github/datastructures/build /home/sachith/Documents/Github/datastructures/build/CMakeFiles/DoublyLinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DoublyLinkedList.dir/depend
