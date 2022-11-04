#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    Person(string name, int age) : name(name), age(age) {
    }

    void getName();
    void getAge();

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


}