#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person{
    public:
        friend ostream& operator<<(ostream&, Person&);
        Person();
        Person(string, string, string, double*);
        ~Person();
        Person(const Person&);

        string getFirstName();
        string getLastName();
        string getId();
        double getWorkHours();

        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setId(string id);
        void setWorkHours(double *workHours);

        Person& operator=(Person& first);
    private:
        string firstName;
        string lastName;
        string id;
        double* workHours;

};
#endif