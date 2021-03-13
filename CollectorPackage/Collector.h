//
// Created by camanem on 12/3/21.
//

#ifndef EXTRACLASE_I_COLLECTOR_H
#define EXTRACLASE_I_COLLECTOR_H


#include "../simpleLinkedList/Node.h"

class Collector {

private:

    Node* head;

public:

    Collector();
    void add(Node*);
    Node* getNode();
    void printCollector();
    bool isEmpty();
};


#endif //EXTRACLASE_I_COLLECTOR_H
