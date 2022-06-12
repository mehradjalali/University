#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Student.h"
#include "Professor.h"

class University{
    public:
        University();
        University(University&);
        University(int, int, int, Student*[100], Professor*[100]);
        ~University();


        int budget;
        int numOfProfessors;
        int numOfStudents;
        Student *students[100];
        Professor *professors[100];
};

#endif