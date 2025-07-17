#include "Person.h"

Person::Person()
{
    Name = "Null";
    Age = 0;
}

void Person::setName(string n)
{
    Name = n;
}

void Person::setAge(int a)
{
    Age = a;
}

string Person::getName()
{
    return Name;
}

int Person::getAge()
{
    return Age;
}

string Person::toString(){
    string strng = "";

    strng += Name + " " + to_string(Age);

    return strng;
}
