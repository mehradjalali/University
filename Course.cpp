#include "Course.h"

Course::Course(){};

Course::~Course(){} 

Course::Course(const Course& second){
    this->name = second.name;
    this->unit = second.unit;
    this->mark = second.mark;
}

Course Course::operator=(Course second){
    this->name = second.getName();
        this->unit = second.getUnit();
        this->mark = second.getMark();
        return *this;
}

void Course::setName(string name){
    this->name = name;
}

string Course::getName(){
    return name;
}

void Course::setUnit(int unit){
    this->unit = unit;
}

int Course::getUnit(){
    return unit;
}

void Course::setMark(double *mark){
    this->mark = mark;
}

double* Course::getMark(){
    return mark;
}