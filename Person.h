#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>

using namespace std;

class Person {
private:
    string Name;
    int Age;

public:
    Person();
    void setName(string);
    void setAge(int);

    string getName();
    int getAge();
    string toString();
};

#endif // PERSON_H_INCLUDED
