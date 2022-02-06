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

void deleteANodeWithGivenValue(DoublyLinkedList *existingList,int value){

}

DoublyLinkedList *getANodeWithGivenValue(DoublyLinkedList *existingList,int value){

// Handles single node scenario
  if (existingList->value ==0 && existingList->nextNode == nullptr)
  {
        return existingList;
  }
  else if (existingList->value == value)
  {
        return existingList;
  }
  
  while (existingList->nextNode != nullptr)
  {
    if (existingList->value==value)
    {
      return existingList;
    }
    
    existingList = existingList->nextNode;
  }
  // value is in the last node
  if (existingList->value == value)
  {
      return existingList;
  }
  // handling given value not in the list 
  DoublyLinkedList *nullNode = addANode(0);
  return nullNode;
}