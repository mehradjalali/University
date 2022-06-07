#include "Course.h"

Course::Course(){};

Course::~Course(){} 

Course::Course(const Course& second){
    this->name = second.name;
    this->unit = second.unit;
    this->mark = second.mark;
}

