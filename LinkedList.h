//
// Created by camanem on 7/3/21.
//

#ifndef EXTRACLASE_I_LINKEDLIST_H
#define EXTRACLASE_I_LINKEDLIST_H
#include "Node.h"

class LinkedList {

private:

    Node* head;

public:

    LinkedList();
    void newNode(int value);
    void printList();
    void getA();

};


#endif //EXTRACLASE_I_LINKEDLIST_H