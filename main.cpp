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
    void afficher();

private:
    string name;
    int age;
};


int main() {


}