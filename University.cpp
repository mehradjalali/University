#include "University.h"

University::University(){}

University::University(University& second){
    this->budget = second.budget;
    this->numOfProfessors = second.numOfProfessors;
    this->numOfStudents = second.numOfStudents;
    for (int i = 0; i < 100; i++){
        this->students[i] = second.students[i];
        this->professors[i] = second.professors[i];
    }
}

University::University(int budget, int numOfStudents, int numOfProfessors, Student *students[100], Professor *professors[100]){
    this->budget = budget;
    this->numOfProfessors = numOfProfessors;
    this->numOfStudents = numOfStudents;
    for (int i = 0; i < 100; i++){
        this->students[i] = students[i];
        this->professors[i] = professors[i];
    }
}

University::~University(){}