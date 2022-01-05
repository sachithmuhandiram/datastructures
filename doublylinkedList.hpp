#include <cstddef>
#include <iostream>

class DoublyLinkedList{
  public:
    int value {0};
    DoublyLinkedList* earlyNode {NULL};
    DoublyLinkedList* nextNode {NULL};
};

DoublyLinkedList *addANode(int);
void addANewNodeToEndOfTheList(DoublyLinkedList *,DoublyLinkedList *);
DoublyLinkedList *getTheLastNodeOfAList(DoublyLinkedList *);