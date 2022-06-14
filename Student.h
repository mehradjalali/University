#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"
#include "Person.h"

class Student : public Person {
public:
    friend ostream &operator<<(ostream &, Student &);
    friend istream &operator>>(istream &, Student &);

    Student();
    Student(string firstName, string lastName, string id, double workHours, Course *courses, string fieldOfStudy, int numOfCourses);
    Student(Student &);
    ~Student();

    string getFieldOfStudy();
    int getNumOfCourses();
    Course getCourse(int);

    void setFieldOfStudy(string);

    virtual bool validate(string) final override;
    double gpa();
    virtual double calculateSalary() final override;

private:
    void setCourse(int, Course);
    Course *courses;
    string fieldOfStudy;
    int numOfCourses;
};

#endif