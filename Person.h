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

        string getFirstName();
        string getLastName();
        string getId();
        double getWorkHours();

        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setId(string id);
        void setWorkHours(double workHours);
    private:
        string firstName;
        string lastName;
        string id;
        double* workHours;

};
#endif