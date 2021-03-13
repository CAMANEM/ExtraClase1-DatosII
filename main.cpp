#include <iostream>
#include "simpleLinkedList/LinkedList.h"

using namespace std;

int main() {

    LinkedList* linkedList = new LinkedList();
    linkedList->newNode(10);
    linkedList->newNode(20);
    linkedList->newNode(30);
    linkedList->newNode(40);
    linkedList->printReferences();
    linkedList->printList();
    linkedList->deleteNode(2);
    linkedList->deleteNode(0);
    linkedList->printReferences();
    linkedList->printList();

    linkedList->newNode(25);
    //linkedList->newNode(123123);
    linkedList->printReferences();
    linkedList->printList();


    return 0;
}
