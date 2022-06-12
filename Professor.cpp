#include "Professor.h"

Professor::Professor():Person(){}

Professor::Professor(string firstName, string lastName, string id, double* workHours, string title):Person(firstName, lastName, id, workHours){
    this->title = title;
}