#include <gtest/gtest.h>
//#include "../doublylinkedList.hpp"
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


TEST_F(DoublyLinkedListTest,initializingANode){
    
    ASSERT_EQ(doublylinkedlist->value,0);
    EXPECT_TRUE(doublylinkedlist->earlyNode == nullptr);
    EXPECT_TRUE(doublylinkedlist->nextNode == nullptr);
}

TEST_F(DoublyLinkedListTest,initializingANodeWithAValue){
    
    DoublyLinkedList *doublylinkedlist = addANode(5);
    
    ASSERT_EQ(doublylinkedlist->value,5);
    EXPECT_TRUE(doublylinkedlist->earlyNode == nullptr);
    EXPECT_TRUE(doublylinkedlist->nextNode == nullptr);
}

TEST_F(DoublyLinkedListTest,addingOneNodeToExistingList){

    DoublyLinkedList *firstNode = addANode(2);
    DoublyLinkedList *secondNode = addANode(5);

    addANewNodeToEndOfTheList(firstNode,secondNode);

    EXPECT_TRUE(firstNode->earlyNode == nullptr);
    EXPECT_TRUE(firstNode->nextNode == secondNode);
    EXPECT_TRUE(secondNode->earlyNode == firstNode);
    EXPECT_TRUE(secondNode->nextNode == nullptr);

}