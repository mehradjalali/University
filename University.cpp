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

double University::averageGpa(){
    double sum = 0;
    for (int i = 0; i < numOfStudents; i++){
        sum += students[i]->gpa();
    }
    return sum / 10;
}

double University::averageGpaOfField(string field){
    double sum = 0, cnt = 0;
    for (int i = 0; i < numOfStudents; i++){
        if (students[i]->getFieldOfStudy() == field){
            sum += students[i]->gpa();
            cnt ++;
        }
    }
    if (cnt == 0)
        return 0;
    return sum / cnt;
}

double University::averageMarkOfCourse(string name){
    double sum = 0, cnt = 0;
    for (int i = 0; i < numOfStudents; i++){
        for (int j = 0; j < students[i]->getNumOfCourses(); j++){
            if (students[i]->getCourse(j).getName() == name){
                sum += students[i]->getCourse(j).getMark();
                cnt ++;
                break;
            }
        }
    }
    if (cnt == 0)
        return 0;
    return sum / cnt;
}


bool University::isEnoughBudget(){
    int ans = 0;
    for (int i = 0; i < numOfProfessors; i++)
        ans += professors[i]->calculateSalary();
    for (int i = 0; i < numOfStudents; i++)
        ans += students[i]->calculateSalary();
    return budget > ans;
}