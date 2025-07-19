
#include "MainMenu.h"

MainMenu::MainMenu(PeopleList* p):peopleList(p){
    string opt = "";
    do
    {
        ClearScreen();
        opt = GetOption();
        if(opt == "1"){
            ClearScreen();
            AddPerson();
        } else if(opt == "2"){
            ClearScreen();
            ShowPeople();
        } else if(opt == "3"){
            ClearScreen();
            UpdatePerson();
        } else if(opt == "0"){
            cout << "Exit..." << endl;
        } else {
            cout << "Option not found, try again..." << endl;
        }
        EnterToContinue();
    }while(opt != "0");
}

string MainMenu::GetOption(){
    string strng = "";

    cout << "\t\tPEOPLE LIST" << endl;
    cout << "1) Add a person" << endl;
    cout << "2) Show people" << endl;
    cout << "3) Update person" << endl;
    cout << "0) Exit" << endl;
    cout << "Choose an option: ";

    getline(cin,strng);
    //cin.ignore();

    return strng;
}

void MainMenu::AddPerson(){

    Person * per = new Person();
    string name = "";
    int age = 0;

    cout << "\t\tADD A PERSON" << endl;
    cout << "Introduce a name: ";
    getline(cin,name);
    //cin.ignore();
    cout << endl << "Introduce an age: ";
    cin >> age;
    cin.ignore();

    per->setName(name);
    per->setAge(age);

    peopleList->AddPerson(per);

}

void MainMenu::ShowPeople(){
    cout << "\t\tSHOW PEOPLE LIST" << endl;
    cout << peopleList->ShowPeople();
}

void MainMenu::UpdatePerson(){
    Person * per = new Person();
    string name = "";
    string newName = "";
    int age = 0;

    cout << "\t\tUPDATE A PERSON" << endl;
    cout << "Introduce the name of the person to update: ";
    getline(cin,name);

    cout << endl << "Introduce the new name: ";
    getline(cin,newName);

    cout << endl << "Introduce the new age: ";
    cin >> age;
    cin.ignore();

    per->setName(newName);
    per->setAge(age);
    //cout << per->getName() << per->getAge();
    peopleList->UpdatePerson(name,per);
}

void MainMenu::ClearScreen(){
    system(CLEAR_SCREEN);
}

void MainMenu::EnterToContinue(){
    cout << "Click enter to continue...";
    getchar();
}
