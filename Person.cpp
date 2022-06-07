#include "Person.h"

Person::Person(){}

Person::Person(string firstName, string lastNmae, string id, double workHours){
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = id;
    this->workHours = &workHours;
}

Person::~Person(){};

