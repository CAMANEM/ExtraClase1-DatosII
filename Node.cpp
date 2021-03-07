//
// Created by camanem on 7/3/21.
//

#include "Node.h"

Node::Node(int _value){

    value = _value;
    next = nullptr;
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