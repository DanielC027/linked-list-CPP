#include <iostream>
#include "PeopleList.h"
#include "Node.h"
using namespace std;

PeopleList::PeopleList():anchor(nullptr){}

void PeopleList::AddPerson(Person * p)
{
    try{
        Node * aux = anchor;
        Node * newNode = new Node(p);
        if(aux == nullptr){
            anchor = newNode;
        } else{
            while(aux->getNext() != nullptr){
                aux = aux->getNext();
            }
            aux->setNext(newNode);
        }
    }catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
        cout << "It was not possible to create a node, PeopleList::AddPerson" << endl;
        return;
    }
}

string PeopleList::ShowPeople()
{
    string strng = "";
    Node* aux = anchor;
    while(aux != nullptr){
        strng += aux->getPerson()->toString() + "\n";
        aux = aux->getNext();
    }
    return strng;
}
