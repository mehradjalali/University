#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Student.h"
#include "Professor.h"

class University{
    public:
        University();
        University(University&);
        University(int, int, int, Student*[10], Professor*[10]);
        ~University();


        void printCourses();
        double averageGpa();
        double averageGpaOfField(string);
        double averageMarkOfCourse(string);
        bool isEnoughBudget();

        int budget;
        int numOfProfessors;
        int numOfStudents;
        Student *students[100];
        Professor *professors[100];
};

#endif