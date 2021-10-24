#include <cstddef>
#include <iostream>

class LinkedList{
  public:
    int value {0};
    LinkedList* nextNode {NULL};
};

//LinkedList *onGoingLinkedList = new LinkedList();

LinkedList* addNewNode(int nodeVal){

  LinkedList *newNode = new LinkedList();
  newNode->value = nodeVal;
  newNode->nextNode = nullptr;

  return newNode;
}

LinkedList* getTheFirstNodeOfTheList(LinkedList *onGoingLinkedList){
  if (onGoingLinkedList->nextNode == nullptr)
  {
    return onGoingLinkedList;
  }
  return onGoingLinkedList;

}

LinkedList* getLastNodeOfTheList(LinkedList *onGoingLinkedList){
  //LinkedList* onGoingNode = new LinkedList();
  if (onGoingLinkedList->nextNode == nullptr)
  {
    return onGoingLinkedList;
  }
  

  while (onGoingLinkedList != NULL)
  {
    onGoingLinkedList = onGoingLinkedList->nextNode;


    if (onGoingLinkedList->nextNode == nullptr)
    {
      return onGoingLinkedList;
    }
  }
  return NULL;
}

void addNewNodeToTheEndOfTheList(LinkedList *existingLinkedList,LinkedList* newNode){

  if (existingLinkedList->value == 0 && existingLinkedList->nextNode == nullptr) // head of the list
  {
      existingLinkedList->value = newNode->value;
  }else{
      LinkedList *lastNode = getLastNodeOfTheList(existingLinkedList);
      lastNode->nextNode = newNode;
  }
  
}

void addNewNodeToTheBegining(LinkedList *existingList,LinkedList *newNode){

  LinkedList *firstNode = getTheFirstNodeOfTheList(existingList);
  if (firstNode->nextNode == nullptr && firstNode->value ==0){
    newNode = firstNode;
  }else{
    newNode->nextNode = firstNode;
  }
}

LinkedList* getANodeWithGivenValue(LinkedList *existingList,int value){

  while (existingList != NULL)
  {
    if(existingList->value == value){
      return existingList;
    }
      existingList = existingList->nextNode;
  }
      
    LinkedList *emptyList = addNewNode(0);
    return emptyList;
}

LinkedList *getPreviousNodeToAGivenValue(LinkedList *existingList,int value){

  if (existingList->value ==0 && existingList->nextNode == nullptr)
  {
    return existingList;
  }
  LinkedList *nextNode = addNewNode(0);
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

bool deleteANodeWithGivenValue(LinkedList *existingList,int value){
    LinkedList *nodeWithGivenValue = getANodeWithGivenValue(existingList,value);

    if (nodeWithGivenValue->nextNode == nullptr && nodeWithGivenValue->value ==0)
    {
      return false;
    }
    LinkedList *previouseNode = getPreviousNodeToAGivenValue(existingList,value);

    // Single node 
    if (previouseNode->nextNode == nullptr && previouseNode->value ==0)
    {
      delete nodeWithGivenValue;
      return true;
    }else
    {
      previouseNode->nextNode = nodeWithGivenValue->nextNode;
      delete nodeWithGivenValue;
      return true;
    }
    
    
}