#include "Person.h"

Person::Person() {}

Person::Person(string firstName, string lastName, string id, double workHours) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = id;
    this->workHours = new double (workHours);
    if (!validate(id))
        error("invalid id");
}

Person::~Person(){
    delete workHours;
};

string Person::getFirstName() {
    return firstName;
}

string Person::getLastName() {
    return lastName;
}

string Person::getId() {
    return id;
}

double Person::getWorkHours() {
    return *workHours;
}

void Person::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Person::setLastName(string lastName) {
    this->lastName = lastName;
}

void Person::setId(string id) {
    if (!validate(id))
        error("invalid id");
    this->id = id;
}

void Person::setWorkHours(double workHours) {
    *this->workHours = workHours;
}

Person &Person::operator=(Person &first) {
    this->firstName = first.getFirstName();
    this->lastName = first.getLastName();
    this->id = first.getId();
    *this->workHours = first.getWorkHours();
    return *this;
}

bool Person::validate(string id) {
    regex patt1("9[0-9][^0-9]{1,3}[0-4|6-9]{5}");
    regex patt2("8[4-9][^0-9]{1,3}[0-4|6-9]{5}");
    regex patt3("00[^0-9]{1,3}[0-4|6-9]{5}");
    return regex_match(id, patt1) or regex_match(id, patt2) or regex_match(id, patt3);
}

void Person::error(string err) {
    cout << err << endl;
    exit(0);
}

double Person::calculateSalary() {
    return (*workHours) * 10000;
}