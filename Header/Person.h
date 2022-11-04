#include<iostream>
#include<string>

class Person {
public:
    Person(std::string name, int age) : name(name), age(age) {
    }

    std::string getName() const {
        return name;
    }
    
    int getAge() const {
        return age;
    }

    void afficher() const{
        std::cout << "Nom:" << name << std::endl;
        std::cout << "Age:" << age << std::endl;
    }

private:
    std::string name;
    int age;
};
