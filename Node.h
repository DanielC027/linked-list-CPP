#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include "Person.h"

class Node {
private:
    Person* p;
    Node* next;

public:
    Node(Person* per);

    void setPerson(Person* per);
    void setNext(Node* n);

    Person* getPerson();
    Node* getNext();
};

#endif // NODE_H_INCLUDED
