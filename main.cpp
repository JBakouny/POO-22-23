#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    Person(string name, int age) : name(name), age(age) {
    }

    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }

    void afficher() const{
        cout << "Nom:" << name << endl;
        cout << "Age:" << age << endl;
    }

private:
    string name;
    int age;
};


int main() {

    Person p("Bechara", 23);
    p.afficher();
    return 0;
}