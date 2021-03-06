
//
// Created by camanem on 5/3/21.
//

using namespace std;


class Node{

private:
    int value;
    int *next;

public:
    Node(int _value, int *_next){

        value = _value;
        next = _next;
    }

    int getValue() const {
        return value;
    }

    void setValue(int value) {
        Node::value = value;
    }

    int *getNext() const {
        return next;
    }

    void setNext(int *next) {
        Node::next = next;
    }


};

