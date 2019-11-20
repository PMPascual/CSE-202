//Phillip Pascual
//filename: student.cpp
//2.9.18
//Function definitions for Student class, Homework 2

#include "student.h"

using namespace std;

//Sets name of student after student object created
void Student::setName(string n) {
    name = n;
}

//Sets ID number of student after student object created
void Student::setId(int i) {
    id = i;
}

//Returns name of student
string Student::getName() {
    return name;
}

