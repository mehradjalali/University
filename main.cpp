#include "Course.h"


ostream& operator<<(ostream& os, Course& first){
    os << "name: " << first.getName() << '\n' << "unit: " << first.getUnit() << '\n' << "mark: " << *first.getMark();
    return os;
}


int main(){

}