#include "Course.h"
#include "Person.h"
#include "Student.h"
#include "Professor.h"

ostream& operator<<(ostream& os, Course& first){
    os << "name: " << first.getName() << '\n' << "unit: " << first.getUnit() << '\n' << "mark: " << first.getMark();
    return os;
}

ostream& operator<<(ostream& os, Person& first){
    os << "firstName: " << first.getFirstName() << '\n' << "lastName: ";
    os << first.getLastName() << '\n' << "id: " << first.getId() << '\n' << "workHours: " << first.getWorkHours() << '\n';
    return os;
}

ostream& operator<<(ostream& os, Student& first){
    os << (Person&) first;
    os << "field of study: " << first.getFieldOfStudy() << '\n';
    os << "number of courses: " << first.getNumOfCourses() << '\n';
    return os;
}

ostream& operator<<(ostream& os, Professor& first){
    os << (Person&) first;
    os << "title: " << first.titles[first.getTitle()] << '\n';
    return os;
}


int main(){
    Course c[2];
    double a = 20, a1 = 19, a2 = 7;
    c[0] = Course("salam", 4, &a);
    c[1] = Course("dada", 3, &a1);
    Professor s("mehrad", "jalali", "98#77777", &a2, PROFESSOR);
    cout << s;
}