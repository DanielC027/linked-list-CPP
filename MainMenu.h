#ifndef MAINMENU_H_INCLUDED
#define MAINMENU_H_INCLUDED

#include <iostream>
#include <cstring>
#include "Person.h"
#include "PeopleList.h"
using namespace std;

#ifdef __WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

class MainMenu{
private:
    PeopleList * peopleList = nullptr;
public:
    MainMenu(PeopleList*p);
    string GetOption();
    void AddPerson();
    void ShowPeople();
    void ClearScreen();
    void EnterToContinue();
};


#endif // MAINMENU_H_INCLUDED
