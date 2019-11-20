//Phillip Pascual
//filename: course.cpp
//2.9.18
//Function definitions for Course class, Homework 2

#include "course.h"
#include "student.h"

using namespace std;

//Sets course number after course object created
void Course::setNumber(string n) {
    number = n;
}

//Sets student after course object created
void Course::setStudent(Student* s) {
    student = s;
}

//Returns course number
string Course::getNumber() {
    return number;
}

//Returns Student*

Student* Course::getStudent() {
    return student;
}
