#ifndef STUDENT_H
#define STUDENT_H


#include "Person.h"
#include "Course.h"


class Student: public Person{
    public:
        friend ostream& operator<<(ostream& , Student&);

        Student();
        Student(Student&);
        ~Student();

        string getFieldOfStudy();
        int getNumOfCourses();

        void setFieldOfStudy(string);
        void setNumOfCourses(int);

        virtual bool validate(string) final override;
    private:
        Course *courses;
        string fieldOfStudy;
        int numOfCourses;
};

#endif