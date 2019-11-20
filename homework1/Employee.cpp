// Phillip Pascual
// Employee.cpp
// 1.25.2017
// P 6.14
// Employee class implementation.

#include "Employee.h"

using namespace std;

Employee::Employee(string n, double s): name(n), salary(s) {}

string Employee::getName(){
    return name;
}

double Employee::getSalary() {
    return salary;
}

void Employee::setSalary(double s) {
    salary = s;
}

