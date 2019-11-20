/*******************************************************************************
 * Phillip Pascual
 * filename: student.h
 * 2.26.2018
 * Class Student definition for Homework 3.  Creates Class 'Student' containing
 * student id, grade and course name.
 ******************************************************************************/

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    string id;
    string grade;
    string courseName;
public:
    Student(): id(""), grade(""), courseName("") { }
    Student(string i, string g, string c): id(i), grade(g), courseName(c) { }
    void print();
    string getId();
}; 

#endif
