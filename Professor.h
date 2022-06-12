#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"

enum ProfessorTitle{
    INSTRUCTOR,
    ASSISTANT_PROFESSOR,
    ASSOCIATE_PROFESSOR,
    PROFESSOR
};


class Professor: public Person{
    public:
        Professor();
        Professor(string, string, string, double*, ProfessorTitle);

        ProfessorTitle getTitle();

        void settitle(ProfessorTitle);

        virtual bool validate(string) final override;
    private:
        ProfessorTitle title;
};

#endif