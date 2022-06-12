#include "Professor.h"

Professor::Professor():Person(){}

Professor::Professor(string firstName, string lastName, string id, double* workHours, string title):Person(firstName, lastName, id, workHours){
    this->title = title;
}

string Professor::getTitle(){
    return title;
}

void Professor::settitle(string title){
    this->title = title;
}