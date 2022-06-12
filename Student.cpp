#include "Student.h"


Student::Student(){};

Student::Student(Student& second){
    this->courses = second.courses;
    this->numOfCourses = second.numOfCourses;
    this->fieldOfStudy = second.fieldOfStudy;
}

Student::~Student(){}

string Student::getFieldOfStudy(){
    return fieldOfStudy;
}

int Student::getNumOfCourses(){
    return numOfCourses;
}

void Student::setFieldOfStudy(string field){
    this->fieldOfStudy = field;
}

void Student::setNumOfCourses(int num){
    this->numOfCourses = num;
}