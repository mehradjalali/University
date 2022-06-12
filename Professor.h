#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"


class Professor: public Person{
    public:
        Professor();
        Professor(string, string, string, double*, string);

        string getTitle();

        void settitle(string);

        virtual bool validate(string) final override;
    private:
        string title;
};

#endif