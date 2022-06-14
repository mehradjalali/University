#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"

// enum string {
//     INSTRUCTOR,
//     ASSISTANT_PROFESSOR,
//     ASSOCIATE_PROFESSOR,
//     PROFESSOR
// };

class Professor : public Person {
public:
    friend istream &operator>>(istream &, Professor &);
    Professor();
    Professor(const Professor &);
    Professor(string, string, string, double, string);
    ~Professor();

    string getTitle();

    void setTitle(string);

    virtual bool validate(string) final override;
    virtual double calculateSalary() final override;


private:
    string titles[4] = {"INSTRUCTOR", "ASSISTANT_PROFESSOR", "ASSOCIATE_PROFESSOR", "PROFESSOR"};
    string title;
};

#endif