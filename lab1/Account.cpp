// Phillip Pascual
// file name: Account.cpp
// 1.11.2018
// Function implementation for Account class functions.  Contains constructors,
// as well as accessor and mutator functions to access and modify balance and
// interest rate date passed in by constructor function.

#include <iostream>

#include "Account.h"

using namespace std;

// Default constructor, initializes balance and rate at 0
Account::Account() {
    balance = 0;
    interestRate = 0;
}

// Constructor
Account::Account(double amount, double rate) {
    balance = amount;
    interestRate = rate;
}

// Increases balance by amount
void Account::deposit(double amount) {
    balance += amount;
}

// Checks if funds available, if true subtracts funds, if false charges penalty
bool Account::withdraw(double amount) {
    bool status;

    if (amount > balance) {
        balance -= 5; // penalty
        status = false;
    } else {
        balance -= amount;
        status = true;
    }

    return status;
}

// Returns balance amount
double Account::query() {
    return balance;
}

// Sets/changes interest rate
void Account:: setInterestRate(double rate) {
    interestRate = rate;
}

// Returns interest rate
double Account::getInterestRate() {
    return interestRate;
}

// Calculates new balance based on interest rate
void Account::addInterest() {
    balance = (1+(interestRate/100))*balance; // Converts interestRate to 
                                              // percent  
}


