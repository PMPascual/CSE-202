#include <iostream>
#include <string>
#include <vector>

//Phillip Pascual
//filename: personMain.cpp
//2.14.18
//Class Person and implementation for Lab 5

using namespace std;

class Person {
protected:
    string name;
    string dob;
    string gender;
public:
    Person(): name(""), dob(""), gender("") { }
    Person(string n, string d, string g): name(n), dob(d), gender(g) { }
    virtual void print();
};

void Person::print() {
    cout << name << " " << dob << " " << gender << endl;
}

int main() {
    string name, dob, gender;

    Person* personPointer;

    vector<Person*> people;
    
    cout << "Enter name: ";
    cin >> name;
    cout << endl;

    cout << "Enter date of birth: ";
    cin >> dob;
    cout << endl;

    cout << "Enter gender: ";
    cin >> gender;
    cout << endl;

    personPointer = new Person(name, dob, gender);
    people.push_back(personPointer);

    for (int i = 0; i < people.size(); ++i) {
        people[i]->print();
    }

    for (int i = 0; i < people.size(); ++i) {
        delete people[i];
    }
}
