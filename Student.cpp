#include "Student.h"


Student::Student(){};

Student::Student(Student& second){
    this->courses = second.courses;
    this->numOfCourses = second.numOfCourses;
    this->FieldOfStudy = second.FieldOfStudy;
}

Student::~Student(){}