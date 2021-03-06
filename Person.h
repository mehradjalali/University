#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <regex>

using namespace std;

class Person {
public:
    friend ostream &operator<<(ostream &, Person &);
    friend istream &operator>>(istream &, Person &);
    Person();
    Person(string, string, string, double);
    ~Person();
    Person(const Person &);

    string getFirstName();
    string getLastName();
    string getId();
    double getWorkHours();

    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setId(string id);
    void setWorkHours(double workHours);

    virtual bool validate(string);
    virtual double calculateSalary();

    Person &operator=(Person &first);

private:
    string firstName;
    string lastName;
    string id;
    double *workHours;

protected:
    void error(string);
};
#endif