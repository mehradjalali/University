#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;

class Course{
    public:
        Course();
        Course(Course&);
        ~Course();

    private:
        string name;
        int unit;
        double *mark;
};
#endif
