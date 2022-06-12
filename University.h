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

        double averageGpa();
        double averageGpaOfField(string);

        int budget;
        int numOfProfessors;
        int numOfStudents;
        Student *students[10];
        Professor *professors[10];
};

#endif