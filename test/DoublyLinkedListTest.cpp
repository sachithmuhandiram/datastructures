#include <gtest/gtest.h>
#include "../doublylinkedList.hpp"
#include "../doublylinkedList.cpp"

//#include <ncurses.h>
#include <stdio.h>
#include <iostream>
int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();

}

class DoublyLinkedListTest : public ::testing::Test{

    public:
        DoublyLinkedList *doublylinkedlist = new DoublyLinkedList();
        virtual void SetUp(){
            // prepare the objects for the test
        }

        virtual void TearDown(){
            //delete linkedlist;
        }
};