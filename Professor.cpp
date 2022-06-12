#include "Professor.h"

Professor::Professor():Person(){}

Professor::Professor(string firstName, string lastName, string id, double* workHours, ProfessorTitle title):Person(firstName, lastName, id, workHours){
    this->title = title;
    if (!validate(id))
        error("invalid id");
}

ProfessorTitle Professor::getTitle(){
    return title;
}

void Professor::settitle(ProfessorTitle title){
    this->title = title;
}

bool validate(string id){
    regex patt1("9[0-9][#][0-4|6-9]{5}");
    regex patt2("8[4-9][#][0-4|6-9]{5}");
    return regex_match(id, patt1) || regex_match(id, patt2);
}