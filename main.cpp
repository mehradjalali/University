#include "Course.h"
#include "Person.h"

ostream& operator<<(ostream& os, Course& first){
    os << "name: " << first.getName() << '\n' << "unit: " << first.getUnit() << '\n' << "mark: " << *first.getMark();
    return os;
}

ostream& operator<<(ostream& os, Person& first){
    os << "firstName: " << first.getFirstName() << '\n' << "lastName: " << first.getLastName() << '\n' << "id: " << first.getId() << '\n' << "workHours: " << first.getWorkHours();
    return os;
}


int main(){
    double b = 4.56;
    Person a("amin" , "z", "5252", &b);
    cout << a;
}