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

  if (existingList->value ==0 && existingList->nextNode == nullptr)
  {
    return existingList;
  }else if (existingList->value == value)
  {
      return existingList;
  }
  

  DoublyLinkedList *nextNode = addANode(0);
  while (existingList->nextNode != nullptr)
  {
    if (existingList->value==value)
    {
      return existingList;
    }
    
    nextNode = existingList->nextNode;
    if (nextNode->value == value)
    {
      return existingList;
    } 
    existingList = existingList->nextNode;
    
  }
  nextNode->value =0;
  nextNode->nextNode = nullptr;
  return nextNode;
}