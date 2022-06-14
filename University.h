#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Professor.h"
#include "Student.h"

class University {
public:
    friend ostream &operator<<(ostream &, University &);

    University();
    University(University &);
    University(int, int, int, Student *[100], Professor *[100]);
    ~University();

    void printCourses();
    void saveToFile();
    double averageGpa();
    double averageGpaOfField(string);
    double averageMarkOfCourse(string);
    bool isEnoughBudget();

    int budget;
    int numOfProfessors;
    int numOfStudents;
    Student *students[100];
    Professor *professors[100];

private:
    void sort(Person *, int);
};

#endif