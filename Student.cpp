#include "Student.h"

Student::Student() : Person(){};

Student::Student(string firstName, string lastName, string id, double *workHours, Course *courses, string fieldOfStudy, int numOfCourses) : Person(firstName, lastName, id, workHours) {
    this->courses = courses;
    this->fieldOfStudy = fieldOfStudy;
    this->numOfCourses = numOfCourses;
    if (!validate(getId()))
        error("invalid id");
}

Student::Student(Student &second) {
    this->courses = second.courses;
    this->numOfCourses = second.numOfCourses;
    this->fieldOfStudy = second.fieldOfStudy;
}

Student::~Student() {}

string Student::getFieldOfStudy() {
    return fieldOfStudy;
}

int Student::getNumOfCourses() {
    return numOfCourses;
}

void Student::setFieldOfStudy(string field) {
    this->fieldOfStudy = field;
}

void Student::setNumOfCourses(int num) {
    this->numOfCourses = num;
}

bool Student::validate(string id) {
    regex patt1("9[0-9][*][^0-9]{1,2}[0-4|6-9]{5}");
    regex patt2("8[4-9][*][^0-9]{1,2}[0-4|6-9]{5}");
    return regex_match(id, patt1) || regex_match(id, patt2);
}

double Student::gpa() {
    double sum = 0;
    int unit = 0;
    for (int i = 0; i < numOfCourses; i++) {
        sum += courses[i].getMark() * courses[i].getUnit();
        unit += courses[i].getUnit();
    }
    return sum / unit;
}

double Student::calculateSalary() {
    return (getWorkHours() * 20000) * (gpa() > 17 ? 1.1 : 1);
}

Course &Student::getCourse(int index) {
    return courses[index];
}