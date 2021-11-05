#include <gtest/gtest.h>
#include "../linkedList.hpp"
#include "../linkedList.cpp"

//#include <ncurses.h>
#include <stdio.h>
#include <iostream>
int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();

}
// https://stackoverflow.com/questions/54585/when-should-you-use-a-class-vs-a-struct-in-c

class LinkedListTest : public ::testing::Test{

    public:
        LinkedList *linkedlist = new LinkedList();
        virtual void SetUp(){
            // prepare the objects for the test
        }

        virtual void TearDown(){
            //delete linkedlist;
        }
};

TEST_F(LinkedListTest,initializingANode){
    
    ASSERT_EQ(linkedlist->value,0);
    EXPECT_TRUE(linkedlist->nextNode == nullptr);
}

// https://stackoverflow.com/questions/55230057/how-to-unit-test-return-value-of-function-angular-jasmine-karma

TEST_F(LinkedListTest,addNewNodeReturnsItsNodePointer){

    // act
    linkedlist = addNewNode(5);

    EXPECT_TRUE(linkedlist != nullptr);
    ASSERT_EQ(linkedlist->value,5);
    EXPECT_TRUE(linkedlist->nextNode == nullptr);

    delete linkedlist;
}

TEST_F(LinkedListTest,getTheLastNodeOfExisitingLinkedList){
    // act
    linkedlist = getLastNodeOfTheList(linkedlist);

    ASSERT_EQ(linkedlist->value,0);
    EXPECT_TRUE(linkedlist->nextNode == nullptr);

}

TEST_F(LinkedListTest,addFirstNodeToLinkedList){
    LinkedList *newNode = addNewNode(7);
    // act
    addNewNodeToTheEndOfTheList(linkedlist,newNode);
    ASSERT_EQ(linkedlist->value,7);
    EXPECT_TRUE(linkedlist->nextNode == nullptr);
}

TEST_F(LinkedListTest,addSecondNodeToTheList){
    LinkedList *firstNode = addNewNode(1);
    LinkedList *secondNode = addNewNode(2);

    addNewNodeToTheEndOfTheList(firstNode,secondNode);
    EXPECT_TRUE(firstNode->nextNode == secondNode);
    EXPECT_TRUE(secondNode->nextNode == nullptr);

}

TEST_F(LinkedListTest,addThirdNodeToTheList){
    LinkedList *firstNode = addNewNode(10);
    LinkedList *secondNode = addNewNode(20);
    LinkedList *thirdNode = addNewNode(30);

    firstNode->nextNode = secondNode;
    addNewNodeToTheEndOfTheList(firstNode,thirdNode);

    EXPECT_TRUE(secondNode->nextNode == thirdNode);
    EXPECT_TRUE(thirdNode->nextNode == nullptr);

}

TEST_F(LinkedListTest,getTheHeadOfTheListOfAnEmptyList){
    LinkedList *firstNode = new LinkedList();
    LinkedList *existingNode = new LinkedList();

    firstNode = getTheFirstNodeOfTheList(existingNode);
    EXPECT_TRUE(firstNode->nextNode == nullptr);
    EXPECT_EQ(firstNode->value,0);

}


 TEST_F(LinkedListTest,addNewNodeToTheBeginingOfAnEmptyList){
    LinkedList *existingList = new LinkedList();
    LinkedList *firstNode = addNewNode(1);

    addNewNodeToTheBegining(existingList,firstNode);
    EXPECT_TRUE(firstNode->nextNode == nullptr);
    EXPECT_EQ(firstNode->value,1);

}

TEST_F(LinkedListTest,addNewNodeToTheBeginingOfAnExistingList){
    LinkedList *existingList = addNewNode(10);
    LinkedList *firstNode = addNewNode(1);

    addNewNodeToTheBegining(existingList,firstNode);

    EXPECT_TRUE(firstNode->nextNode == existingList);
    EXPECT_TRUE(existingList->nextNode == nullptr);
    EXPECT_EQ(firstNode->value,1);

}

TEST_F(LinkedListTest,getANodeWithGivenValueNoMatchingValueReturnsFalse){
    LinkedList *existingList = addNewNode(1);

    LinkedList *nodeWithTheGivenValue = getANodeWithGivenValue(existingList,5);

    EXPECT_TRUE(nodeWithTheGivenValue->nextNode == nullptr);
    EXPECT_EQ(nodeWithTheGivenValue->value,0);
}

TEST_F(LinkedListTest,getANodeWithGivenValueNoMatchinginMultipleNodesReturnsFalse){
    LinkedList *firstNode = addNewNode(10);
    LinkedList *secondNode = addNewNode(25);
    LinkedList *thirdNode = addNewNode(35);
    firstNode->nextNode = secondNode;
    secondNode->nextNode = thirdNode;

    LinkedList *nodeWithTheGivenValue = getANodeWithGivenValue(firstNode,5);

    EXPECT_TRUE(nodeWithTheGivenValue->nextNode == nullptr);
    EXPECT_EQ(nodeWithTheGivenValue->value,0);
}

TEST_F(LinkedListTest,getANodeWithGivenValueMatchingValueReturnsANode){
    LinkedList *existingList = addNewNode(11);

    LinkedList *nodeWithTheGivenValue = getANodeWithGivenValue(existingList,11);

    EXPECT_TRUE(nodeWithTheGivenValue->nextNode == nullptr);
    EXPECT_EQ(nodeWithTheGivenValue->value,11);
}

TEST_F(LinkedListTest,getANodeWithGivenValueMatchinginMultipleNodesReturnsTrue){
    LinkedList *firstNode = addNewNode(10);
    LinkedList *secondNode = addNewNode(25);
    LinkedList *thirdNode = addNewNode(35);
    firstNode->nextNode = secondNode;
    secondNode->nextNode = thirdNode;

    LinkedList *nodeWithTheGivenValue = getANodeWithGivenValue(firstNode,25);

    EXPECT_TRUE(nodeWithTheGivenValue->nextNode == thirdNode);
    EXPECT_EQ(nodeWithTheGivenValue->value,25);
}

TEST_F(LinkedListTest,getANodeWithGivenValueMatchinginFiveNodesReturnsTrue){
    LinkedList *firstNode = addNewNode(11);
    LinkedList *secondNode = addNewNode(24);
    LinkedList *thirdNode = addNewNode(37);
    LinkedList *fourthNode = addNewNode(45);
    LinkedList *fifthNode = addNewNode(50);

    firstNode->nextNode = secondNode;
    secondNode->nextNode = thirdNode;
    thirdNode->nextNode = fourthNode;
    fourthNode->nextNode = fifthNode;

    LinkedList *nodeWithTheGivenValue = getANodeWithGivenValue(firstNode,50);

    EXPECT_TRUE(nodeWithTheGivenValue->nextNode == nullptr);
    EXPECT_EQ(nodeWithTheGivenValue->value,50);
}


TEST_F(LinkedListTest,getANodeWithGivenValueNoMatchinginFiveNodesReturnsFlase){
    LinkedList *firstNode = addNewNode(11);
    LinkedList *secondNode = addNewNode(24);
    LinkedList *thirdNode = addNewNode(37);
    LinkedList *fourthNode = addNewNode(45);
    LinkedList *fifthNode = addNewNode(50);

    firstNode->nextNode = secondNode;
    secondNode->nextNode = thirdNode;
    thirdNode->nextNode = fourthNode;
    fourthNode->nextNode = fifthNode;

    LinkedList *nodeWithTheGivenValue = getANodeWithGivenValue(firstNode,55);

    EXPECT_TRUE(nodeWithTheGivenValue->nextNode == nullptr);
    EXPECT_EQ(nodeWithTheGivenValue->value,0);
}

TEST_F(LinkedListTest,deleteASingleNodeWithGivenValueInLinkedListReturnsEmptyList){
    LinkedList *onlyNode = addNewNode(4);

    bool deleted = deleteANodeWithGivenValue(onlyNode,4);

    EXPECT_EQ(deleted,true);
}

TEST_F(LinkedListTest,getPreviousNodeWithGivenValue){
    LinkedList * firstNode = addNewNode(3);
    LinkedList *secoondNode = addNewNode(5);

    firstNode->nextNode = secoondNode;

    LinkedList *previouseNode = getPreviousNodeToAGivenValue(firstNode,5);

    EXPECT_TRUE(previouseNode->nextNode==secoondNode);
    EXPECT_EQ(previouseNode->value,3);
}

TEST_F(LinkedListTest,getPreviousNodeWithGivenValueFromSingleList){
    LinkedList * firstNode = addNewNode(3);

    LinkedList *previouseNode = getPreviousNodeToAGivenValue(firstNode,5);

    EXPECT_TRUE(previouseNode->nextNode==nullptr);
    EXPECT_EQ(previouseNode->value,0);
}

TEST_F(LinkedListTest,getPreviousNodeWithGivenValueNotInTheList){
    LinkedList * firstNode = addNewNode(3);
    LinkedList *secoondNode = addNewNode(5);

    firstNode->nextNode = secoondNode;

    LinkedList *previouseNode = getPreviousNodeToAGivenValue(firstNode,7);

    EXPECT_TRUE(previouseNode->nextNode==nullptr);
    EXPECT_EQ(previouseNode->value,0);
}

TEST_F(LinkedListTest,deleteASingleNodeWithoutGivenValueLinkedListReturnsFalse){
    LinkedList *onlyNode = addNewNode(4);

    bool deleted = deleteANodeWithGivenValue(onlyNode,5);

    EXPECT_EQ(deleted,false);
}   
