#ifndef STUDENT_H
#define STUDENT_H


#include "Person.h"
#include "Course.h"


class Student: public Person{
    public:
        friend ostream& operator<<(ostream& , Student&);

        Student();
        Student(string firstName, string lastName, string id, double* workHours, Course *courses, string fieldOfStudy, int numOfCourses);
        Student(Student&);
        ~Student();

        string getFieldOfStudy();
        int getNumOfCourses();
        Course getCourse(int);

        void setFieldOfStudy(string);
        void setNumOfCourses(int);

        virtual bool validate(string) final override;
        double gpa();
        virtual double calculateSalary() final override;
    private:
        Course *courses;
        string fieldOfStudy;
        int numOfCourses;
};

#endif