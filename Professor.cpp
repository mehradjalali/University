#include "Professor.h"

Professor::Professor() : Person() {}

Professor::Professor(string firstName, string lastName, string id, double workHours, string title) : Person(firstName, lastName, id, workHours) {
    bool F = 0;
    for (int i = 0; i < 4; i++)
        if (title == titles[i])
            F = true;
    if (!F)
        error("invalid title");
    this->title = title;
    if (!validate(id))
        error("invalid id");
}

Professor::Professor(const Professor &second) : Person(second) {
    this->title = second.title;
}

Professor::~Professor() {}

string Professor::getTitle() {
    return title;
}

void Professor::setTitle(string title) {
    bool F = 0;
    for (int i = 0; i < 4; i++)
        if (title == titles[i])
            F = true;
    if (!F)
        error("invalid title");
    this->title = title;
}

bool Professor::validate(string id) {
    regex patt1("9[0-9][#][0-4|6-9]{5}");
    regex patt2("8[4-9][#][0-4|6-9]{5}");
    regex patt3("00[#][0-4|6-9]{5}");
    return regex_match(id, patt1) or regex_match(id, patt2) or regex_match(id, patt3);
}

double Professor::calculateSalary() {
    string temp = this->getId();
    int exp = 101 - ((temp[0] - '0') * 10 + (temp[1] - '0')), index;
    for (int i = 0; i < 4; i++)
        if (titles[i] == title)
            index = i;
    return getWorkHours() * (50000 + (index + 1) * 10000 + exp);
}
