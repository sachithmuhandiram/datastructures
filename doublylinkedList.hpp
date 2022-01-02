#include <cstddef>
#include <iostream>

class DoublyLinkedList{
  public:
    int value {0};
    DoublyLinkedList* earlyNode {NULL};
    DoublyLinkedList* nextNode {NULL};
};
