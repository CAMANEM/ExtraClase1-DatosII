#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList* linkedList = new LinkedList();
    linkedList->newNode(10);
    linkedList->newNode(20);
    linkedList->printList();
    
    cout << "Hello, World!" << endl;
    return 0;
}
