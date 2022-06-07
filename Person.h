#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person{
    public:
        Person();
        Person(string, string, string, double);
        ~Person();
        Person(const Person&);
    private:
        string firstName;
        string lastName;
        string id;
        double* workHours;

};
#endif