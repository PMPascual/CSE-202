// Phillip Pascual
// file name: Account_main2.cpp
// 1.11.2018
// Main function for Lab 1, Problem 3.  Accrues interest at a rate of 6% and
// loops until account balance is >=20000.  Uses a for loop, initialized at
// initial balance in savings, and increments int year each iteration. Loop
// continues until savings.query() function returns 20000 or greater. Main
// then ouputs years.

#include <iostream>

#include "Account.h"

using namespace std;

main() {
    Account savings(10000, 6);

    int years = 0;

    for (int i = savings.query(); i < 20000 ; i = savings.query()) {
        years++;
        savings.addInterest();
    }

    cout << "It will take " << years << " years to accumulate $20000." << endl;
}
    
