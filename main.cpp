#include <iostream>
#include "Person.h"
#include "PeopleList.h"
#include "Node.h"
#include "MainMenu.h"

using namespace std;


Node* addPerson();
int OptionsMenu ();

int main()
{
    new MainMenu(new PeopleList());
    return 0;
}
