#include<iostream>
#include<string>

class Person {
public:
    Person(std::string name, int age);

    std::string getName() const;
    
    int getAge() const;

    void afficher() const;

private:
    std::string name;
    int age;
};
