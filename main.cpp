#include "Course.h"
#include "Person.h"
#include "Professor.h"
#include "Student.h"
#include "University.h"

#define err(x) cout << #x << ":\n" \
                    << x << "\n\n"

int main() {
    University uni0;
    cin >> uni0; // >> operator for University, Course, Student and Professor
    err(uni0);   // << operator for University

    Course crs0("Calculus 2", 3, 12.3); // Constructor
    err(crs0);                          // << operator for Course

    Course crs1 = uni0.students[3]->getCourse(1); // Copy Constructor
    err(crs1);

    crs1.setMark(18.75);
    err(crs1.getMark());

    crs1.setName("Advanced Programming");
    err(crs1.getName());

    crs1.setUnit(3);
    err(crs1.getUnit());

    // Person p0("Mehrad", "Jalali", "15meh12378", 6.0); // exit(0) becase 15meh12378 is not a valid id
    Person p0("Mehrad", "Jalali", "00meh12378", 6.0); // Constructor
    err(p0);                                          // << operator for Person

    Person p1 = p0; // Copy Constructor
    err(p1);

    p1.setFirstName("Amin");
    err(p1.getFirstName());

    p1.setLastName("Zolfagharian");
    err(p1.getLastName());

    p1.setId("00ami32198");
    err(p1.getId());

    p1.setWorkHours(8.0);
    err(p1.getWorkHours());
    err(p1.calculateSalary());

    p1 = p0; // oprator=
    err(p1);
    // p1.setId("82ami12345"); // exit(0) because 82ami12345 is not a valid id

    Course aslCourses[2] = {crs0, crs1};

    Student stu0("Hadi", "Asl Ghasemi", "00*sl12378", 3.0, aslCourses, "Computer Engineering", 2); // Constructor
    err(stu0);                                                                                     // << operator for Student

    Student stu1 = stu0; // Copy Constructor
    err(stu1.gpa());
    err(stu1.calculateSalary());

    Professor prf0("Jeff", "Costello", "92#12389", 8.0, "PROFESSOR"); // Constructor
    err(prf0);                                                              // << operator for Professor

    Professor prf1 = prf0; // Copy Constructor
    err(prf1);

    prf1.setTitle("INSTRUCTOR");
    err(prf1.getTitle());

    prf1.setWorkHours(7.0);
    err(prf1.getWorkHours());
    err(prf1.calculateSalary());

    University uni1 = uni0; // Copy Constructor
    err(uni1);

    err(uni1.averageGpa());
    err(uni1.averageGpaOfField("Computer Engineering"));
    err(uni1.averageMarkOfCourse("Advanced Programming"));
    err(uni1.isEnoughBudget());
    uni1.printCourses();
    uni1.saveToFile();
}

ostream &operator<<(ostream &os, Course &first) {
    os << "name: " << first.getName() << '\n'
       << "unit: " << first.getUnit() << '\n'
       << "mark: " << first.getMark();
    return os;
}

ostream &operator<<(ostream &os, Person &first) {
    os << "firstName: " << first.getFirstName() << '\n'
       << "lastName: ";
    os << first.getLastName() << '\n'
       << "id: " << first.getId() << '\n'
       << "workHours: " << first.getWorkHours() << '\n';
    return os;
}

ostream &operator<<(ostream &os, Student &first) {
    os << (Person &)first;
    os << "field of study: " << first.getFieldOfStudy() << '\n';
    os << "number of courses: " << first.getNumOfCourses() << '\n';
    return os;
}

ostream &operator<<(ostream &os, Professor &first) {
    os << (Person &)first;
    os << "title: " << first.getTitle() << '\n';
    return os;
}

ostream &operator<<(ostream &os, University &first) {
    first.sort(*first.professors, first.numOfProfessors);
    first.sort(*first.students, first.numOfStudents);
    os << "Professors: \n";
    for (int i = 0; i < first.numOfProfessors; i++)
        os << first.professors[i]->getFirstName() << " " << first.professors[i]->getLastName() << endl;
    os << "Students: \n";
    for (int i = 0; i < first.numOfStudents; i++)
        os << first.students[i]->getFirstName() << " " << first.students[i]->getLastName() << endl;
    return os;
}

istream &operator>>(istream &is, Course &first) {
    cout << "Enter name: ";
    is >> first.name;
    cout << "Enter unit: ";
    is >> first.unit;
    cout << "Enter mark: ";
    is >> *first.mark;
    return is;
}

istream &operator>>(istream &is, Person &first) {
    cout << "Enter first name: ";
    is >> first.firstName;
    cout << "Enter last name: ";
    is >> first.lastName;
    cout << "Enter id: ";
    is >> first.id;
    if (!first.validate(first.id))
        first.error("invalid id");
    cout << "workHours: ";
    double temp;
    is >> temp;
    first.setWorkHours(temp);
    return is;
}

istream &operator>>(istream &is, Student &first) {
    is >> (Person &)first;
    cout << "Enter field of study: ";
    is >> first.fieldOfStudy;
    cout << "Enter number of courses: ";
    is >> first.numOfCourses;
    Course temp;
    for (int i = 0; i < first.numOfCourses; i++) {
        cout << "Enter course " << i << ":\n";
        is >> temp;
        first.setCourse(i, temp);
    }
    return is;
}

istream &operator>>(istream &is, Professor &first) {
    is >> (Person &)first;
    cout << "Enter title: ";
    string s;
    bool F = false;
    is >> s;
    for (int i = 0; i < 4; i++) {
        if (first.titles[i] == s) {
            F = true;
            first.setTitle(s);
        }
    }
    if (!F) {
        cout << "invalid title";
        exit(0);
    }
    return is;
}

istream &operator>>(istream &is, University &first) {
    cout << "Enter budget: ";
    is >> first.budget;
    cout << "Enter number of professors: ";
    is >> first.numOfProfessors;
    Professor temp;
    for (int i = 0; i < first.numOfProfessors; i++) {
        cout << "Enter professor " << i << ":\n";
        is >> temp;
        first.setProfessor(i, temp);
    }
    cout << "Enter number of students: ";
    is >> first.numOfStudents;
    Student temp2;
    for (int i = 0; i < first.numOfStudents; i++) {
        cout << "Enter student " << i << ":\n";
        is >> temp2;
        first.setStudent(i, temp2);
    }
    return is;
}