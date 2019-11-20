// Phillip Pascual
// filename: person.cpp
// date 2.7.18
// Function definitions for Lab 4: Classes, Vectors, and Pointers

#include "person.h"

string Person::getName() {
    return name;
}

string Person::getBestFriend() {
    if (bestFriend != 0) { // checks for null pointer
        return bestFriend->name;
    } else {
        return "";
    }
}

int Person::getPopularity() {
    return popularity;
}

void Person::setBestFriend(Person* bf) {
    bestFriend = bf;
    (bf->popularity)++;
}

