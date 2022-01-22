#include "doublylinkedList.hpp"

DoublyLinkedList* addANode(int nodeVal){

    DoublyLinkedList *newNode = new DoublyLinkedList();
    newNode->value = nodeVal;
    newNode->earlyNode = nullptr;
    newNode->nextNode = nullptr;

    return newNode;
}

void addANewNodeToEndOfTheList(DoublyLinkedList *existingList,DoublyLinkedList *newNode){
    // This needs to update to get the last node and then add newNode to that last node.

    DoublyLinkedList *lastNode = getTheLastNodeOfAList(existingList);
    lastNode->nextNode = newNode;
    newNode->earlyNode = lastNode;
}

DoublyLinkedList *getTheLastNodeOfAList(DoublyLinkedList *existingList){

    if(existingList->nextNode == nullptr ){
        return existingList;
    }

    while (existingList->nextNode != nullptr)
    {
        existingList = existingList->nextNode;

        if (existingList->nextNode == nullptr)
        {
            return existingList;
        }
        
    }
    return NULL;
}

DoublyLinkedList *getTheFirstNodeOfAList(DoublyLinkedList *existingList){
    // Just one node
    if (existingList->nextNode == nullptr && existingList->earlyNode == nullptr){
        return existingList;
    }else if (existingList->earlyNode == nullptr && existingList->nextNode != nullptr)
    {
        return existingList;
    }
    
    return nullptr;
}

void addANodeToTheBeginingOfTheList(DoublyLinkedList *existingList, DoublyLinkedList *newNode){

    DoublyLinkedList *firstNode = getTheFirstNodeOfAList(existingList);

    firstNode->earlyNode = newNode;
    newNode->nextNode = firstNode;

}