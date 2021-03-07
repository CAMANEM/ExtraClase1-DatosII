//
// Created by camanem on 7/3/21.
//

#ifndef EXTRACLASE_I_NODE_H
#define EXTRACLASE_I_NODE_H


class Node {


private:

    int value;
    Node *next;

public:

    Node(int);
    int getValue() const;
    void setValue(int);
    Node *getNext() const;
    void setNext(Node*);
};


#endif //EXTRACLASE_I_NODE_H
