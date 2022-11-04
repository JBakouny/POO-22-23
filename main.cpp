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

    //TODO(Bechara): Implement this method
    void afficher() const{
        cout << "Nom:" << name << endl;
        cout << "Age:" << age << endl;
    }

private:
    string name;
    int age;
};


int main() {

    Person p("Joe", 23);
    p.afficher();
    return 0;
}