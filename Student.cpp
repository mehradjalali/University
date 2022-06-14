#include "Student.h"

Student::Student() : Person(){
    this->courses = new Course[100];
};

Student::Student(string firstName, string lastName, string id, double workHours, Course *courses, string fieldOfStudy, int numOfCourses) : Person(firstName, lastName, id, workHours) {
    this->fieldOfStudy = fieldOfStudy;
    this->numOfCourses = numOfCourses;
    if (!validate(getId()))
        error("invalid id");
    this->courses = new Course[numOfCourses];
    for (int i = 0; i < numOfCourses; i++)
        this->courses[i] = courses[i];
}

Student::Student(const Student &second) : Person(second) {
    this->numOfCourses = second.numOfCourses;
    this->fieldOfStudy = second.fieldOfStudy;
    this->courses = new Course[numOfCourses];
    for (int i = 0; i < numOfCourses; i++)
        this->courses[i] = second.courses[i];
}

Student::~Student() {
    delete[] courses;
}

string Student::getFieldOfStudy() {
    return fieldOfStudy;
}

int Student::getNumOfCourses() {
    return numOfCourses;
}

void Student::setFieldOfStudy(string field) {
    this->fieldOfStudy = field;
}

bool Student::validate(string id) {
    regex patt1("9[0-9][*][^0-9]{0,2}[0-4|6-9]{5}");
    regex patt2("8[4-9][*][^0-9]{0,2}[0-4|6-9]{5}");
    regex patt3("00[*][^0-9]{0,2}[0-4|6-9]{5}");
    return regex_match(id, patt1) or regex_match(id, patt2) or regex_match(id, patt3);
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

Course Student::getCourse(int index) {
    if (index >= numOfCourses)
        error("invalid index");
    return courses[index];
}

void Student::setCourse(int index, Course course) {
    if (index >= numOfCourses)
        error("invalid index");
    courses[index] = course;
}