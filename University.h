#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Professor.h"
#include "Student.h"

typedef long long ll;
class University {
public:
    friend ostream &operator<<(ostream &, University &);
    friend istream &operator>>(istream &, University &);

    University();
    University(const University &);
    University(ll, int, int, Student *[100], Professor *[100]);
    ~University();

    void printCourses();
    void saveToFile();
    double averageGpa();
    double averageGpaOfField(string);
    double averageMarkOfCourse(string);
    bool isEnoughBudget();

    ll budget;
    int numOfProfessors;
    int numOfStudents;
    Student *students[100];
    Professor *professors[100];

private:
    void sort(Person *, int);
    void setStudent(int, Student);
    void setProfessor(int, Professor);
};

#endif