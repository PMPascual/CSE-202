/*******************************************************************************
 * Phillip Pascual
 * filename: studentMain.cpp
 * 3.1.18
 * Homework 3, Exercise P9.13
 *
 * Design class Student containing student id, grade, and course name.
 * 
 * Set up a loop to read one entry at a time from classes.txt file until end-of-
 * file.  For each entry open the corresponding course file and read pairs of
 * student id and grade -- of course again until end-of-file -- and construct a
 * Student object and push it on a vector of students.
 *
 * At the end prompt the user for a student id and print all the course and
 * grades in the vector with that id.
 *
 * Implement string toLower(const string &inStr) to convert upper case letters
 * to lower case and return the new string.
 *
 * Solution:
 * Created class Student as instructed and initialized a vector of Student
 * objects in main.  Accessor function getId() created that returns student ID.
 * Function print() also created that outputs coursenumber and grade for Student
 * object.
 *
 * Created function toLower, which takes a string as argument, copies string to 
 * temp string, and uses a for-loop to traverse the string and convert any 
 * capital letters to lower-case.  Function then returns the temp string.  
 * ".txt" added to returned string.  While loop created to open classes.txt 
 * file, with a while-loop nested inside that opens and reads class files, 
 * creates Student object and pushes back to vector of Student objects.
 *
 * Once vector filled, main asks for input of student ID.  For-loop then
 * traverses vector, if input student ID matches return of getId() function,
 * calls print() function to output coursename and grade for that particular
 * object.
 ******************************************************************************/

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>

#include "student.h"

using namespace std;

//Takes string and changes all upper-case letters to lower case
string toLower(const string &inStr) {
    string temp;
    temp = inStr;
    for (int i = 0; i < temp.length(); ++i) {
        if (temp[i] >= 'A' && temp[i] <='Z') {
            temp[i] += 32;
        }
    }
    return temp;
}

main () {
    vector<Student> students;

    ifstream in, in2;

    in.open("classes.txt");
    if (!in.is_open()) {
        cout << "Couldn't open classes.txt." << endl;
        return 1;
    }

    string filename, courseName, id, grade;

    in >> courseName;
    while (!in.eof()) {
        filename = toLower(courseName) += ".txt";
        
        in2.open(filename);
        if (!in2.is_open()) {
            cout << filename << " does not exist." << endl;
            return 2;
        }

        in2 >> id >> grade;
        while (!in2.eof()) {
            students.push_back(Student(id, grade, courseName));
            in2 >> id >> grade;
        }
        in2.close();
        
        in >> courseName;
    }

    in.close();

    cout << "Enter a student ID to search for: ";
    string search;
    cin >> search;

    for (int i = 0; i < students.size(); ++i) {
        if (search == students[i].getId()) {
            students[i].print();
        }
    }
}
