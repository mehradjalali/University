#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;

class Course {
public:
    friend ostream &operator<<(ostream &os, Course &first);
    friend istream &operator>>(istream &os, Course &first);
    Course();
    Course(string name, int unit, double *mark);
    Course(const Course &);
    ~Course();

    void setName(string);

    string getName();

    void setUnit(int);

    int getUnit();

    void setMark(double);

    double getMark();

private:
    string name;
    int unit;
    double *mark;
};
#endif
