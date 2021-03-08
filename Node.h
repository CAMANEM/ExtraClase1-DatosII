//
// Created by camanem on 7/3/21.
//

#ifndef EXTRACLASE_I_NODE_H
#define EXTRACLASE_I_NODE_H


#include <cstddef>

class Node {


private:

    int value;
    Node *next;

public:

    Node(int);
    void * operator new(size_t);
    void operator delete(void *node);
    int getValue() const;
    void setValue(int);
    Node *getNext() const;
    void setNext(Node*);
};


#endif //EXTRACLASE_I_NODE_H
