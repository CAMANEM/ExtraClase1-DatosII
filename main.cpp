#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList* linkedList = new LinkedList();
    linkedList->newNode(10);
    linkedList->newNode(20);
    linkedList->newNode(30);
    linkedList->newNode(40);
    linkedList->printList();
    linkedList->deleteNode(3);
    linkedList->printList();
    
    cout << "Hello, World!" << endl;
    return 0;
}
