cmake_minimum_required(VERSION 3.8)

set(This LinkedList)

project(${This} CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
enable_testing()

add_subdirectory(googletest)

set(Header
    linkedList.hpp
    )
set(Sources
    linkedList.cpp
    )

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test) 
# goes to this directory and check for CMakeList.txt








