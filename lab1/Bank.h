#ifndef BANK_H
#define BANK_H

// Phillip Pascual
// file name: Bank.h
// 1.11.2018
// Class declaration for class 'Bank'. Creates private Accounts savings and
// checking, and declares default constructor, constructor and functions
// used by Bank objects.

#include <string>

#include "Account.h"

using namespace std;

class Bank {
private:
    Account savings;
    Account checking;
public:
    Bank();
    Bank(double savingsAmount, double checkingAmount);
    void deposit(double amount, string account);
    void withdraw(double amount, string account);
    void transfer(double amount, string account);
    void printBalances();
};

#endif
