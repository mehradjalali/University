#include "University.h"
#include <fstream>

#define F first
#define S second
#define PB push_back
typedef pair<double, double> pdd;

University::University() {
    *this->professors = new Professor[100];
    *this->students = new Student[100];
}

University::University(const University &second) {
    this->budget = second.budget;
    this->numOfProfessors = second.numOfProfessors;
    this->numOfStudents = second.numOfStudents;
    for (int i = 0; i < numOfStudents; i++)
        this->students[i] = new Student(*second.students[i]);
    for (int i = 0; i < numOfProfessors; i++)
        this->professors[i] = new Professor(*second.professors[i]);
}

University::University(ll budget, int numOfStudents, int numOfProfessors, Student *students[100], Professor *professors[100]) {
    this->budget = budget;
    this->numOfProfessors = numOfProfessors;
    this->numOfStudents = numOfStudents;
    for (int i = 0; i < numOfStudents; i++)
        this->students[i] = new Student(*students[i]);
    for (int i = 0; i < numOfProfessors; i++)
        this->professors[i] = new Professor(*professors[i]);
}

University::~University() {
    delete[] students;
    delete[] professors;
}

double University::averageGpa() {
    double sum = 0;
    for (int i = 0; i < numOfStudents; i++)
        sum += students[i]->gpa();
    return sum / numOfStudents;
}

double University::averageGpaOfField(string field) {
    double sum = 0, cnt = 0;
    for (int i = 0; i < numOfStudents; i++) {
        if (students[i]->getFieldOfStudy() == field) {
            sum += students[i]->gpa();
            cnt++;
        }
    }
    if (cnt == 0)
        return 0;
    return sum / cnt;
}

double University::averageMarkOfCourse(string name) {
    double sum = 0, cnt = 0;
    for (int i = 0; i < numOfStudents; i++) {
        for (int j = 0; j < students[i]->getNumOfCourses(); j++) {
            if (students[i]->getCourse(j).getName() == name) {
                sum += students[i]->getCourse(j).getMark();
                cnt++;
                break;
            }
        }
    }
    if (cnt == 0)
        return 0;
    return sum / cnt;
}

bool University::isEnoughBudget() {
    int ans = 0;
    for (int i = 0; i < numOfProfessors; i++)
        ans += professors[i]->calculateSalary();
    for (int i = 0; i < numOfStudents; i++)
        ans += students[i]->calculateSalary();
    return budget >= ans;
}

void University::printCourses() {
    map<string, pdd> coursesSum;
    vector<string> courses;
    for (int i = 0; i < numOfStudents; i++)
        for (int j = 0; j < students[i]->getNumOfCourses(); j++)
            coursesSum[students[i]->getCourse(j).getName()].F += students[i]->getCourse(j).getMark(),
                coursesSum[students[i]->getCourse(j).getName()].S++;
    for (auto u : coursesSum)
        courses.PB(u.F);
    for (int i = 0; i < courses.size(); i++) {
        string a = courses[i];
        double iAvg = coursesSum[a].F / coursesSum[a].S;
        for (int j = i + 1; j < courses.size(); j++) {
            string b = courses[j];
            double jAvg = coursesSum[b].F / coursesSum[b].S;
            if (iAvg > jAvg)
                courses[i] = b,
                courses[j] = a;
        }
        for (auto u : courses) {
            double Avg = coursesSum[u].F / coursesSum[u].S;
            cout << u << ": " << Avg << endl;
        }
    }
}

void University::saveToFile() {
    map<string, pair<double, string>> fields;
    for (int i = 0; i < numOfStudents; i++)
        for (int j = 0; j < students[i]->getNumOfCourses(); j++) {
            double avg = students[i]->gpa();
            string field = students[i]->getFieldOfStudy();
            if (avg > fields[field].F)
                fields[field] = make_pair(avg, students[i]->getId());
        }
    ofstream topStu;
    topStu.open("topStudents.txt");
    for (auto u : fields) {
        string field = u.F;
        double avg = u.S.F;
        string id = u.S.S;
        topStu << "field: " << field << " id: " << id << " average: " << avg << '\n';
    }
    topStu.close();
}

void University::sort(Person *p, int n) {
    for (int i = 0; i < n; i++) {
        string iYear = p[i].getId().substr(0, 2), iFName = p[i].getFirstName(), jName = p[i].getLastName();
        for (int j = i + 1; j < n; j++) {
            string jYear = p[j].getId().substr(0, 2), jFName = p[j].getFirstName(), iName = p[j].getLastName();
            if (iYear > jYear) {
                Person temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            if (iYear == jYear) {
                if (iName > jName or (iName == jName and iFName > jFName)) {
                    Person temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
    }
}

void University::setStudent(int index, Student student) {
    *students[index] = student;
}

void University::setProfessor(int index, Professor professor) {
    *professors[index] = professor;
}