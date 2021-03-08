//
// Created by camanem on 7/3/21.
//
#include "iostream"
#include "LinkedList.h"

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

    if (listSize < position || position < 0){

        cout << "The position exceeds list size or its less than 0";
    }

    else if(position != 0){

        listSize -= 1;

        Node* previusNode = head;
        Node* actualnode = head;
        actualnode = actualnode->getNext();
        int index = 1;

        // mientras no llegue al nodo a eliminar
        while (index != position){

            previusNode = previusNode->getNext();
            actualnode = actualnode->getNext();
            index++;
        }

        delete(actualnode);


        //Si el nodo a eliminar está al final
        if (actualnode->getNext() == nullptr){

            previusNode->setNext(nullptr);
        }
        else{
            previusNode->setNext(actualnode->getNext());
        }
        //cout << actualnode;

    }
    else{

        delete(head);
        head = head->getNext();

        listSize -= 1;
    }
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
        cout << "listSize: " << listSize << endl;
    }

    else {
        cout << "The linked list is empty";
        cout << head << endl;
    }
}
