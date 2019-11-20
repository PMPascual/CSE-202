#ifndef COURSE_H
#define COURSE_H

#include <string>

#include "student.h"

//Phillip Pascual
//filename: course.h
//2.9.18
//Course class declarations for Homework 2

using namespace std;

class Course {
private:
    string number;
    Student* student;
public:
    Course(): number(""), student(0) { }
    Course(string n, Student* s): number(n), student(s) { }
    void setNumber(string n);
    void setStudent(Student* s);
    string getNumber();
    Student* getStudent();
};

#endif
