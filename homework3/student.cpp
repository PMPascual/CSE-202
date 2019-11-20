/*******************************************************************************
 * Phillip Pascual
 * filename: student.cpp
 * 2.27.2018
 * Class definition for Student Class
 ******************************************************************************/

#include <string>
#include <iomanip>
#include <iostream>

#include "student.h"

using namespace std;

//Prints course name and grade for Student object
void Student::print() {
    cout << left << setw(10) << courseName << "    " << grade << endl;
}

//Returns ID for object
string Student::getId() {
    return id;
}
