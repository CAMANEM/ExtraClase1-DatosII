//
// Created by camanem on 7/3/21.
//

#ifndef EXTRACLASE_I_COLLECTORNODE_H
#define EXTRACLASE_I_COLLECTORNODE_H


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
    void printCollector();
};


#endif //EXTRACLASE_I_COLLECTORNODE_H