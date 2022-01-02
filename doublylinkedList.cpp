#include "doublylinkedList.hpp"

DoublyLinkedList* addANode(int nodeVal){

    DoublyLinkedList *newNode = new DoublyLinkedList();
    newNode->value = nodeVal;
    newNode->earlyNode = nullptr;
    newNode->nextNode = nullptr;

    return newNode;
}