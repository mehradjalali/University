#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;

class Course{
    public:
        friend ostream& operator<<(ostream& os, Course& first);
        Course();
        Course(const Course&);
        ~Course();

        void setName(string);

        string getName();

        void setUnit(int);

        int getUnit();

        void setMark(double *);

        double *getMark();

        Course operator=(Course second);

    private:
        string name;
        int unit;
        double *mark;
};
#endif
