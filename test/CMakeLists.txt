cmake_minimum_required(VERSION 3.8)

set(This DoublyLinkedListTest)

set(Sources
    DoublyLinkedListTest.cpp
)
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    DoublyLinkedList
    ncurses
    )
    
add_test(
    NAME ${This}
    COMMAND ${This}
)