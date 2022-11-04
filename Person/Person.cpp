#include "Person.h"

using namespace std;

Person::Person(string name, int age) : name(name), age(age) {
}

string Person::getName() const {
    return name;
}
int Person::getAge() const {
    return age;
}

void Person::afficher() const{
    cout << "Nom:" << name << endl;
    cout << "Age:" << age << endl;
}