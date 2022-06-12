#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"


class Professor: public Person{
    public:
        Professor();
        Professor(string, string, string, double*, string);

        string getTitle();

        void settitle(string);
    private:
        string title;
};

#endif