//
// Created by camanem on 7/3/21.
//

#include "iostream"
#include <cstdlib>
#include "Node.h"
#include "../CollectorPackage/Collector.h"

Collector* collector = new Collector();

using namespace std;

Node::Node(int _value){

    value = _value;
    next = nullptr;
}



void * Node::operator new(size_t size){

    if (collector->isEmpty()){
        void * node = malloc(size);
        return node;
    }
    else {
        return collector->getNode();
    }

}


void Node::operator delete(void *node){

    //cout << " el que borra" << node << endl;
    Node* _node = (Node*) node;
    collector->add(_node);
    //AQui debo agregarlo a COllector
}


int Node::getValue() const {
    return value;
}


void Node::setValue(int value) {
    value = value;
}


Node* Node::getNext() const {
    return next;
}

void Node::setNext(Node* _next) {
    next = _next;
}

void Node::printCollector() {

    collector->printCollector();
}
