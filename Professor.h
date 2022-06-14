#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"

enum ProfessorTitle {
    INSTRUCTOR,
    ASSISTANT_PROFESSOR,
    ASSOCIATE_PROFESSOR,
    PROFESSOR
};

class Professor : public Person {
public:
    Professor();
    Professor(Professor &);
    Professor(string, string, string, double *, ProfessorTitle);
    ~Professor();

    ProfessorTitle getTitle();

    void settitle(ProfessorTitle);

    virtual bool validate(string) final override;
    virtual double calculateSalary() final override;

    string titles[4] = {"INSTRUCTOR", "ASSISTANT_PROFESSOR", "ASSOCIATE_PROFESSOR", "PROFESSOR"};

private:
    ProfessorTitle title;
};

#endif