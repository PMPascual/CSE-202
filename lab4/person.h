#ifndef PERSON_H
#define PERSON_H

// Phillip Pascual
// filename: person.h
// 2.7.18
// Header files for Lab 4: Classes, Vectors, and Pointers

#include <string>

using namespace std;

class Person {
private:
    string name;
    Person* bestFriend;
    int popularity;
public:
    Person(): name(""), bestFriend(0), popularity(0) { }
    Person(string n): name(n), bestFriend(0), popularity(0) { }
    string getName();
    string getBestFriend();
    int getPopularity();
    void setBestFriend(Person*);
};

#endif
