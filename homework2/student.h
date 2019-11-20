#ifndef STUDENT_H
#define STUDENT_H

#include <string>

//Phillip Pascual
//filename: student.h
//2.9.2018
//Header files for Student class for Homework 2

using namespace std;

class Student {
private:
    string name;
    int id;
public:
    Student(): name(""), id(0) { }
    Student(string n, int i): name(n), id(i) { }
    void setName(string n);
    void setId(int i);
    string getName();
};

#endif
