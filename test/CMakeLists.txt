cmake_minimum_required(VERSION 3.8)

set(This LinkedListTest)

set(Sources
    LinkedListTest.cpp
)
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    LinkedList
    ncurses
    )
    
add_test(
    NAME ${This}
    COMMAND ${This}
)