#ifndef COURSE_H
#define COURSE_H

#include <iostream>

using namespace std;

class Course{
    public:
        Course();
        Course(const Course&);
        ~Course();

        void setName(string name){
            this->name = name;
        }

        string getName(){
            return name;
        }

        void setUnit(int unit){
            this->unit = unit;
        }

        int getUnit(){
            return unit;
        }

        void setMark(double *mark){
            this->mark = mark;
        }

        double* getMark(){
            return mark;
        }

        Course operator=(Course second){
            this->name = second.getName();
            this->unit = second.getUnit();
            this->mark = second.getMark();
            return *this;
        }

    private:
        string name;
        int unit;
        double *mark;
};
#endif
