// Phillip Pascual
// filename: personMain.cpp
// 2.7.18
// Main function for Lab 4: Classes, Vectors, and Pointers

#include <iostream>
#include <iomanip> // for setw
#include <fstream> // for ifstream
#include <string>
#include <vector>

#include "person.h"

using namespace std;

bool find(vector<Person*> p, string n) {
    for (int i = 0; i < p.size(); i++) {
        if (p[i]->getName() == n) {
            return true;
        }
    }
    return false;
}

main() {
    string name;
    vector<Person*> people; // vector of pointers to objects of type Person
    Person* personPointer;

    ifstream in;

    in.open("names");
    if (!in.is_open()) {
        cout << "Couldn't open 'names' file." << endl;
        return 1;
    }

    in >> name;
    while (!in.eof()) {
        if (!find(people, name)) {
            personPointer = new Person(name);
            people.push_back(personPointer); // no check for duplicate names
        } else {
            cout << name << " is already in vector. Ignoring." << endl;
        }
        in >> name;
    }

    in.close();

    int i, j;

    // for each person prompt for a best friend name
    for (i = 0; i < people.size(); i++) {
        cout << "Who is " << people[i]->getName() << "'s best friend? ";
        cin >> name;
        
        //Input validation, makes sure that name entered is already in vector
        while (!find(people, name)) {
            cout << "Name not found, please enter a new name: ";
            cin >> name;
        }

        // Search for best friend
        for (j = 0; j < people.size(); j++) {
            if (people[j]->getName() == name) {
                break;
            }
        }
        if (j < people.size()) { // found a best friend
            people[i]->setBestFriend(people[j]);
        }
    }

    // list of name, best friend, and popularity count
    for (i = 0; i < people.size(); i++) {
        personPointer = people[i];
        cout << left << setw(10) << personPointer->getName();
        cout << left << setw(10) << personPointer->getBestFriend();
        cout << right<< setw(2) << personPointer->getPopularity() << endl;
    }

    //clean up
    for (i = 0; i < people.size(); i++) {
        delete people[i];
    }
}
    

