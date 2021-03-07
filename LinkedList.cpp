//
// Created by camanem on 7/3/21.
//
#include "iostream"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() {

    head = nullptr;
}

void LinkedList::newNode(int value){

    Node* node = new Node(value);
    node->setNext(head);
    head = node;


}


void LinkedList::printList() {

    if (head != nullptr) {

        Node *actualNode = head;
        cout << actualNode->getValue();

        while (actualNode->getNext() != nullptr){

            actualNode = actualNode->getNext();
            cout << " -> " << actualNode->getValue();

            //cout << "sigue" << endl;
        }
        cout << endl << "terminó" << endl;
    }

    else {

        cout << "The linked list is empty";
        cout << head << endl;
    }
}

void LinkedList::getA() {

    cout << head->getValue();
}