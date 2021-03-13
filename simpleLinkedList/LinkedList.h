//
// Created by camanem on 7/3/21.
//

#ifndef EXTRACLASE_I_LINKEDLIST_H
#define EXTRACLASE_I_LINKEDLIST_H
#include "Node.h"

class LinkedList {

private:

    Node* head;
    int listSize;

public:

    LinkedList();
    void newNode(int value);
    void deleteNode(int position);
    void printList();
    void printReferences();

};


#endif //EXTRACLASE_I_LINKEDLIST_H
