//Phillip Pascual
//filename: main.cpp
//2.9.18
//Main function for Homework 2.
//
//Problem:
//Design two class: Student class with a student name and a student id, and
//Course class with a course number and a pointer to Student objects.
//
//Declare two vectors:
//vector<Student*> enrolled;
//vector<Course*> offered;
//
//Populate enrolled from students file and offered from courses file.
//As you enter each line from courses file, you need to find the student and
//store its address (pointer) in the Course object.
//
//Finally, prompt the user for a course name, traverse offered, and ouput all
//students in the course.
//
//Solution:
//Two classes were created:
//
//1) Student, with private string name and private int id.  Public functions
//were created that set the name, id, and return the name when called.
//Constructor fills object with name and id number.
//
//2) Course, with private string number and private Student* student.  Public
//functions set number and pointer to Student when called.  Constructor fills
//object with course number and Student* of Student assigned to course.
//
//Main function created, Student* find(string n), that searches enrolled vector
//for n and returns Student*.
//
//Students file read to fill enrolled vector.  Courses file read in to fill
//offered vector.
//
//User prompted to enter course to search for.  Program than traverses the
//offered vector from 0 to offered.size(), if entered course matches
//course number in object offered[i], calls getStudent() function, which
//returns Student* in that object.  Program then calls and outputs getName()
//for that Student*.
//
//Before terminating, all data in enrolled and offered vectors is deleted.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

#include "student.h"
#include "course.h"

using namespace std;

//Searches enrolled vector for name n and returns Student* if found.
Student* find(string n,vector<Student*> v);

int main() {
    string name, number;
    int id;
    Student* studentPointer;
    Course* coursePointer;

    vector<Student*> enrolled;
    vector<Course*> offered;

    ifstream in;

    in.open("students");
    if (!in.is_open()) {
        cout << "Couldn't open 'students' file." << endl;
        return 1;
    }

    in >> name >> id;
    while (!in.eof()) {
       studentPointer = new Student(name, id);
       enrolled.push_back(studentPointer);
       in >> name >> id;
    }

    in.close();

    ifstream in2;

    in2.open("courses");
    if (!in2.is_open()) {
        cout << "Couldn't open 'courses' file." << endl;
        return 2;
    }

    in2 >> name >> number;
    while (!in2.eof()) {
        coursePointer = new Course(number, find(name, enrolled));
        offered.push_back(coursePointer);
        in2 >> name >> number;
    }

    in2.close();

    string search;

    cout << "Please enter course to search for: ";
    cin >> search;

    for (int i = 0; i < offered.size(); ++i) {
        if (search == offered[i]->getNumber()) {
           cout << offered[i]->getStudent()->getName() << endl;
        }
    }

    for (int i = 0; i < enrolled.size(); ++i) {
        delete enrolled[i];
    }

    for (int i = 0; i < offered.size(); ++i) {
        delete offered[i];
    }
}

Student* find(string n,vector<Student*> v) {
    for (int i = 0; i < v.size(); ++i) {
        if (n == v[i]->getName()) {
            return v[i];
        }
    }
    return 0;
}

