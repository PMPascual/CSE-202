// Phillip Pascual
// file name: Bank.cpp
// 1.11.2018
// Function definitions for functions in class 'Bank'. Defines constructors
// and all functions used by Bank class.

#include <iostream>

#include "Bank.h"

using namespace std;

// Default constructor
Bank::Bank() {
    Account savings(0,0);
    Account checking(0,0);
}

// Constructor
Bank::Bank(double savingsAmount, double checkingAmount): 
    savings(savingsAmount,0), checking(checkingAmount,0) {}

// Deposit function
void Bank::deposit(double amount, string account) {
    if (account == "S") {
        savings.deposit(amount);
        cout << "Savings deposit successful." << endl;
    } else if (account == "C") {
        checking.deposit(amount);
        cout << "Checking deposit successful." << endl;
    } else {
        cout << "Invalid account." << endl;
    }
}

// Withdrawal function
void Bank::withdraw(double amount, string account) {
    if (account == "S") {
        if (savings.withdraw(amount)){
            cout << "Savings withdrawal successful." << endl;
        } else {
            cout << "Insufficient funds in Savings. $5 penalty charged." <<
                endl;
        }
    } else if (account == "C") {
        if (checking.withdraw(amount)) {
            cout << "Checking withdrawal successful." << endl;
        } else {
            cout << "Insufficient funds in Checking. $5 penalty charged." <<
                endl;
        }
    } else {
        cout << "Invalid account." << endl;
    }
}

// Transfer function.
void Bank::transfer(double amount,string account) {
     if (account == "S") {
         if (savings.withdraw(amount)) {
             checking.deposit(amount);
             cout << "Transfer from Savings successful." << endl;
          } else {
              cout << "Insufficient funds in Savings. $5 penalty charged." <<
                  endl;
          }
     } else if (account == "C") {
         if (checking.withdraw(amount)) {
             savings.deposit(amount);
             cout << "Transfer from Checking successful." << endl;
         } else {
             cout << "Insufficient funds in Checking. $5 penalty charged." <<
                 endl;
         }
     } else {
         cout << "Invalid account." << endl;
     }
}

// Prints balances of Checking and Savings
void Bank::printBalances() {
    cout << "Checking balance is: $" << checking.query() << endl;
    cout << "Savings balance is: $" << savings.query() << endl;
}

