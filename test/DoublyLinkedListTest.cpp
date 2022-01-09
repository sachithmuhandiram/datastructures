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

TEST_F(DoublyLinkedListTest,addingOneNodeToTheEndOfExistingList){

    DoublyLinkedList *firstNode = addANode(2);
    DoublyLinkedList *secondNode = addANode(5);

    addANewNodeToEndOfTheList(firstNode,secondNode);

    EXPECT_TRUE(firstNode->earlyNode == nullptr);
    EXPECT_TRUE(firstNode->nextNode == secondNode);
    EXPECT_TRUE(secondNode->earlyNode == firstNode);
    EXPECT_TRUE(secondNode->nextNode == nullptr);

}

TEST_F(DoublyLinkedListTest,addingOneNodeToTheEndExistingMultipleNodeList){

    DoublyLinkedList *firstNode = addANode(10);
    DoublyLinkedList *secondNode = addANode(15);
    DoublyLinkedList *thirdNode = addANode(20);

    addANewNodeToEndOfTheList(firstNode,secondNode);
    addANewNodeToEndOfTheList(firstNode,thirdNode);

    EXPECT_TRUE(firstNode->earlyNode == nullptr);
    EXPECT_TRUE(firstNode->nextNode == secondNode);
    EXPECT_TRUE(secondNode->earlyNode == firstNode);
    EXPECT_TRUE(secondNode->nextNode == thirdNode);
    EXPECT_TRUE(thirdNode->earlyNode == secondNode);
    EXPECT_TRUE(thirdNode->nextNode == nullptr);
}

TEST_F(DoublyLinkedListTest,getTheLastNodeOfSingleNodeList){

    DoublyLinkedList *firstNode = addANode(2);

    DoublyLinkedList *lastNode = getTheLastNodeOfAList(firstNode);

    EXPECT_TRUE(lastNode->earlyNode == nullptr);
    EXPECT_TRUE(lastNode->nextNode == nullptr);
    EXPECT_EQ(lastNode->value,2);
}

TEST_F(DoublyLinkedListTest,getTheLastNodeOfMultipleNodeList){

    DoublyLinkedList *firstNode = addANode(2);
    DoublyLinkedList *secondNode = addANode(5);
    DoublyLinkedList *thirdNode = addANode(7);

    firstNode->nextNode = secondNode;
    secondNode->nextNode = thirdNode;

    secondNode->earlyNode = firstNode;
    thirdNode->earlyNode = secondNode;

    DoublyLinkedList *lastNode = getTheLastNodeOfAList(firstNode);

    EXPECT_TRUE(lastNode->earlyNode == secondNode);
    EXPECT_TRUE(lastNode->nextNode == nullptr);
    EXPECT_EQ(lastNode->value,7);
}

TEST_F(DoublyLinkedListTest,getTheLastNodeOfMultipleNodeListTest2){

    DoublyLinkedList *firstNode = addANode(22);
    DoublyLinkedList *secondNode = addANode(51);
    DoublyLinkedList *thirdNode = addANode(75);
    DoublyLinkedList *fourthNode = addANode(8);
    DoublyLinkedList *fifthNode = addANode(4);

    firstNode->nextNode = secondNode;
    secondNode->nextNode = thirdNode;
    thirdNode->nextNode = fourthNode;
    fourthNode->nextNode = fifthNode;

    secondNode->earlyNode = firstNode;
    thirdNode->earlyNode = secondNode;
    fourthNode->earlyNode = thirdNode;
    fifthNode->earlyNode = fourthNode;

    DoublyLinkedList *lastNode = getTheLastNodeOfAList(firstNode);

    EXPECT_TRUE(lastNode->earlyNode == fourthNode);
    EXPECT_TRUE(lastNode->nextNode == nullptr);
    EXPECT_EQ(lastNode->value,4);
}

TEST_F(DoublyLinkedListTest,getTheFirstNodeOfASingleNodeList){

    DoublyLinkedList *theNode = addANode(10);

    DoublyLinkedList *firstNode = getTheFirstNodeOfAList(theNode);

    EXPECT_TRUE(firstNode->nextNode == nullptr);
    EXPECT_TRUE(firstNode->earlyNode == nullptr);
    EXPECT_EQ(firstNode->value,10);
}