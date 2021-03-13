//
// Created by camanem on 7/3/21.
//
#include "iostream"
#include "LinkedList.h"
#include "Node.h"

using namespace std;

LinkedList::LinkedList() {

    head = nullptr;
    listSize = 0;

}

void LinkedList::newNode(int value){

    Node* node = new Node(value);
    node->setNext(head);
    head = node;
    listSize++;


}


void LinkedList::deleteNode(int position){

    Node* previusNode = head;
    Node* actualnode = head;

    if (listSize-1 < position || position < 0){

        cout << endl << "The position exceeds list size or its less than 0" << endl;
    }

    else if(position != 0){

        listSize -= 1;

        actualnode = actualnode->getNext();
        int index = 1;

        // mientras no llegue al nodo a eliminar
        while (index != position){

            previusNode = previusNode->getNext();
            actualnode = actualnode->getNext();
            index++;
        }



        //Si el nodo a eliminar está al final
        if (actualnode->getNext() == nullptr){

            previusNode->setNext(nullptr);
            delete(actualnode);

        }
        else{
            previusNode->setNext(actualnode->getNext());
            delete(actualnode);

        }
        //cout << actualnode;

    }
    // Cuando el nodo a eliminar es el primero en la lista
    else{
        actualnode = actualnode->getNext();
        head = actualnode;
        delete(previusNode);

        listSize -= 1;
    }
}


void LinkedList::printList() {

    cout <<"values: ";
    if (head != nullptr) {

        Node *actualNode = head;
        cout << actualNode->getValue();

        while (actualNode->getNext() != nullptr){

            actualNode = actualNode->getNext();
            cout << " -> " << actualNode->getValue();

            //cout << "sigue" << endl;
        }
        cout << " -> nullptr" << endl;
        cout << "listSize: " << listSize << endl;
        cout << "Collector: ";
        actualNode->printCollector();
    }

    else {
        cout << "The linked list is empty";
        cout << head << endl;
    }
}

void LinkedList::printReferences() {

    cout <<"references: ";
    if (head != nullptr) {

        Node *actualNode = head;
        cout << actualNode;

        while (actualNode->getNext() != nullptr){

            actualNode = actualNode->getNext();
            cout << " -> " << actualNode;

            //cout << "sigue" << endl;
        }
        cout << " -> nullptr" << endl;
    }

    else {
        cout << "The linked list is empty";
        cout << head << endl;
    }
}

