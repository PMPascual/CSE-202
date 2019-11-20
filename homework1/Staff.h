#ifndef STAFF_H
#define STAFF_H

// Phillip Pascual
// Staff.h
// 1.25.2018
// P 6.14
// Staff class includes a vector of Employee.
// We want to be able to add new employees and give raise
// to existing employees.

#include <iostream>
#include <string>
#include <vector>

#include "Employee.h"

using namespace std;

class Staff {
private:
    vector<Employee> members;
    int find(string n); // returns position of n in members or -1 if not found
public:
    Staff() {}
    void addEmployee(Employee e); // better: const Employee &
    void raiseSalary(string n, int percent);
    void print();
};

#endif
