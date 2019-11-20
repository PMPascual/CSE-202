#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// Phillip Pascual
// Employee.h
// 1.25.2018
// P 6.14
// Employee class interface.  An employee has a name and salary.

#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;
public:
    Employee(string n = "", double s = 0);
    string getName();
    double getSalary();
    void setSalary(double s);
};

#endif
