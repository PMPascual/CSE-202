// Phillip Pascual
// Main.cpp
// 1.27.2018
// P 6.14
// This program find and raises an employee's salary.
// It uses Employee and Staff classes

#include <iostream>
#include <fstream> // for ifstream
#include <string>
#include <vector>

#include "Employee.h"
#include "Staff.h"

using namespace std;

main() {
    Staff company;
    string name;
    double salary;

    ifstream in("Main.in");
    if (!in.is_open()) {
        cout << "Could open 'Main.in'." << endl;
        exit(1);
    }

    in >> name >> salary;
    while (!in.eof()) {
        company.addEmployee(Employee(name, salary));
        in >> name>> salary;
    }

    string addResponse;
    string addName;
    int addSalary;

    cout << "Add an employee? ";
    cin >> addResponse;
    
    while (addResponse == "yes" || addResponse == "y") {
        cout << "Please enter employee name and salary: ";
        cin >> addName >> addSalary;
        company.addEmployee(Employee(addName, addSalary));
        cout << "Add an employee? ";
        cin >> addResponse;
    }

    string response;
    int percent;

    cout << "Raise anybody's salary? ";
    cin >> response;
    while (response == "yes" || response == "y") {
        cout << "Enter name and percent: ";
        cin >> name >> percent;
        company.raiseSalary(name, percent);
        cout << "Raise anybody else's salary? ";
        cin >> response;
    }

    company.print();
}

