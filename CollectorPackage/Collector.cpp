//
// Created by camanem on 12/3/21.
//
#include "iostream"
#include "Collector.h"

Collector::Collector() {

    head = nullptr;
}


void Collector::add(Node * _node) {

    _node->setNext(head);
    head = _node;

}

Node * Collector::getNode() {

    Node* recyclable = head;
    head = head->getNext();
    return recyclable;
}

void Collector::printCollector() {

    //std::cout << head << std::endl;
    if (head != nullptr) {

        Node *actualNode = head;
        std::cout << actualNode;

        while (actualNode->getNext() != nullptr){

            actualNode = actualNode->getNext();
            std::cout << " -> " << actualNode;

            //cout << "sigue" << endl;
        }
        std::cout << " -> nullptr" << std::endl;
    }

    else {
        std::cout << "The linked list is empty" << std::endl;
    }

}

bool Collector::isEmpty() {
    if (head == nullptr){

        return true;
    }
    else{

        return false;
    }
}
