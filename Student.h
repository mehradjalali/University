#ifndef STUDENT_H
#define STUDENT_H


#include "Person.h"
#include "Course.h"


class Student: public Person{
    public:
        Student();
        Student(Student&);
        ~Student();
    private:
        Course *courses;
        string FieldOfStudy;
        int numOfCourses;
};

#endif