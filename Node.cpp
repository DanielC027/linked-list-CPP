#include "Node.h"
#include "Person.h"

Node::Node(Person* per) {
    p = per;
    next = nullptr;
}

void Node::setPerson(Person* per) {
    p = per;
}

void Node::setNext(Node* n) {
    next = n;
}

Person* Node::getPerson() {
    return p;
}

Node* Node::getNext() {
    return next;
}
