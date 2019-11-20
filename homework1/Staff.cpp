// Phillip Pascual
// Staff.cpp
// 1.25.2018
// P 6.14
// This is the implementation of class Staff.

#include <iostream>
#include <string>
#include <vector>

#include "Staff.h"

using namespace std;

int Staff::find(string n) {
    for (int i = 0; i < members.size(); ++i) {
        if (members[i].getName() == n) {
            return i;
        }
    }
    return -1;
}

void Staff::addEmployee(Employee e) {
    members.push_back(e);
    string name;
    name = members[members.size()-1].getName();
    int i = find(name);
    if (i != members.size()-1) {
        cout << "Name already exists. " << endl;
        members.pop_back();
    }
}

void Staff::raiseSalary(string n, int percent) {
    double salary;
    int i = find(n);
    if (i == -1) {
        cout << "Couldn't find " << n << endl;
    } else {
        salary = members[i].getSalary();
        if (salary * percent/100 <= 1000) {
            cout << "Raise is " << salary * percent/100 << ".  " << "Raise "
                "applied." << endl;
            salary += salary * percent/100;
            members[i].setSalary(salary);
        } else {
            salary += 1000;
            cout << "Maximum raise $1000 only. Maximum raise applied."  << 
                endl;
            members[i].setSalary(salary);
        }
    }
}

void Staff::print() {
    for (int i = 0; i < members.size(); ++i) {
        cout << members[i].getName() << " " << members[i].getSalary() << endl;
    }
}
