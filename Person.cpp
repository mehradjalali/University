#include "Person.h"

Person::Person(){}

Person::Person(string firstName, string lastNmae, string id, double *workHours){
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = id;
    this->workHours = workHours;
}

Person::~Person(){};


string Person::getFirstName(){
    return firstName;
}

string Person::getLastName(){
    return lastName;
}

string Person::getId(){
    return id;
}

double Person::getWorkHours(){
    return *workHours;
}

void Person::setFirstName(string firstName){
    this->firstName = firstName;
}

void Person::setLastName(string lastName){
    this->lastName = lastName;
}

void Person::setId(string id){
    this->id = id;
}

void Person::setWorkHours(double *workHours){
    this->workHours = workHours;
}