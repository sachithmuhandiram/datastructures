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
include test/CMakeFiles/DoublyLinkedListTest.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/DoublyLinkedListTest.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/DoublyLinkedListTest.dir/flags.make

test/CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.o: test/CMakeFiles/DoublyLinkedListTest.dir/flags.make
test/CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.o: ../test/DoublyLinkedListTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sachith/Documents/Github/datastructures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.o"
	cd /home/sachith/Documents/Github/datastructures/build/test && /bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.o -c /home/sachith/Documents/Github/datastructures/test/DoublyLinkedListTest.cpp

test/CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.i"
	cd /home/sachith/Documents/Github/datastructures/build/test && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sachith/Documents/Github/datastructures/test/DoublyLinkedListTest.cpp > CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.i

test/CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.s"
	cd /home/sachith/Documents/Github/datastructures/build/test && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sachith/Documents/Github/datastructures/test/DoublyLinkedListTest.cpp -o CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.s

# Object files for target DoublyLinkedListTest
DoublyLinkedListTest_OBJECTS = \
"CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.o"

# External object files for target DoublyLinkedListTest
DoublyLinkedListTest_EXTERNAL_OBJECTS =

test/DoublyLinkedListTest: test/CMakeFiles/DoublyLinkedListTest.dir/DoublyLinkedListTest.cpp.o
test/DoublyLinkedListTest: test/CMakeFiles/DoublyLinkedListTest.dir/build.make
test/DoublyLinkedListTest: lib/libgtest_maind.a
test/DoublyLinkedListTest: libDoublyLinkedList.a
test/DoublyLinkedListTest: lib/libgtestd.a
test/DoublyLinkedListTest: test/CMakeFiles/DoublyLinkedListTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sachith/Documents/Github/datastructures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DoublyLinkedListTest"
	cd /home/sachith/Documents/Github/datastructures/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DoublyLinkedListTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/DoublyLinkedListTest.dir/build: test/DoublyLinkedListTest

.PHONY : test/CMakeFiles/DoublyLinkedListTest.dir/build

test/CMakeFiles/DoublyLinkedListTest.dir/clean:
	cd /home/sachith/Documents/Github/datastructures/build/test && $(CMAKE_COMMAND) -P CMakeFiles/DoublyLinkedListTest.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/DoublyLinkedListTest.dir/clean

test/CMakeFiles/DoublyLinkedListTest.dir/depend:
	cd /home/sachith/Documents/Github/datastructures/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sachith/Documents/Github/datastructures /home/sachith/Documents/Github/datastructures/test /home/sachith/Documents/Github/datastructures/build /home/sachith/Documents/Github/datastructures/build/test /home/sachith/Documents/Github/datastructures/build/test/CMakeFiles/DoublyLinkedListTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/DoublyLinkedListTest.dir/depend
