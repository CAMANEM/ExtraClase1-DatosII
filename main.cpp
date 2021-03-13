#include <iostream>
#include "simpleLinkedList/LinkedList.h"

using namespace std;

int main() {

    LinkedList* linkedList = new LinkedList();
    int userInput;
    bool flag = true;

    while (flag){
        cout << "------------------------------------------------------" << endl;
        cout << " --> Enter 1 to add a node to the linked list" << endl;
        cout << " --> Enter 2 to Delete a Node from the linked list" << endl;
        cout << " --> Enter 3 to print the references, values of the linked list and the collector" << endl;
        cout << " --> Enter 4 to exit" << endl;
        cout << "------------------------------------------------------" << endl;
        cin>> userInput;

        switch (userInput) {
            case 1:
                cout << "Enter a int value for the node" << endl;
                cin>> userInput;
                linkedList->newNode(userInput);
                userInput = 0;
                break;

            case 2:
                cout << "Enter the position (int) of the node that you want to delete" << endl;
                cin>> userInput;
                linkedList->deleteNode(userInput);
                userInput = 0;
                break;

            case 3:
                linkedList->printReferences();
                linkedList->printList();
                break;

            case 4:
                flag = false;
                break;

            default:
                cout << "Invalid command";
                break;
        }

    }
    /*
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
*/

    return 0;
}
