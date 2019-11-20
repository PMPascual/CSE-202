#include <iostream>
#include <string>
#include <vector>

#include "Person.h"
#include "Student.h"
#include "Instructor.h"

//Phillip Pascual
//filename: umlMain.cpp
//2.14.18
//Problem 8, Lab 5

using namespace std;

int main() {
    vector<Person*> people;

    Person* personPointer;

    personPointer = new Person("Joe", "1/1/2001", "M");
    people.push_back(personPointer);

    personPointer = new Student("Sally", "2/2/1009", "F", "CS");
    people.push_back(personPointer);

    personPointer = new Instructor("Edgar", "12/31/2014", "M", 25000);
    people.push_back(personPointer);

    for (int i = 0; i < people.size(); ++i) {
       people[i]->print();
       cout << endl;
    }

    for (int i = 0; i < people.size(); ++i) {
        delete people[i];
    }
}
