#ifndef PEOPLELIST_H_INCLUDED
#define PEOPLELIST_H_INCLUDED

#include "Node.h"

class PeopleList {
private:
    Node* anchor;

public:
    PeopleList();

    void AddPerson(Person*p);
    string ShowPeople();
};

#endif // PEOPLELIST_H_INCLUDED
