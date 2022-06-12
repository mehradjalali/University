#include "Course.h"
#include "Person.h"
#include "Student.h"

ostream& operator<<(ostream& os, Course& first){
    os << "name: " << first.getName() << '\n' << "unit: " << first.getUnit() << '\n' << "mark: " << *first.getMark();
    return os;
}

ostream& operator<<(ostream& os, Person& first){
    os << "firstName: " << first.getFirstName() << '\n' << "lastName: " << first.getLastName() << '\n' << "id: " << first.getId() << '\n' << "workHours: " << first.getWorkHours() << '\n';
    return os;
}

ostream& operator<<(ostream& os, Student& first){
    os << (Person&) first;
    os << "field of study: " << first.getFieldOfStudy() << '\n';
    os << "number of courses: " << first.getNumOfCourses() << '\n';
    return os;
}


int main(){
    double b = 4.56;
    Person a("amin" , "z", "83abc11388", &b);
    cout << a.validate(a.getId());
}