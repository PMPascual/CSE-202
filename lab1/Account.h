#ifndef ACCOUNT_H
#define ACCOUNT_H

// Phillip Pascual
// file name: Account.h
// 1.11.2018
// Class declaration for 'Account' class.  Contains private class data to
// store balance and interest rate, and public functions to access balance
// data, deposit/withdraw funds, and change interest rate on account.  Also
// contains function to compound interest yearly.

class Account {
private:
    double balance;
    double interestRate; // for example, interestRate = 6 means 6%
public:
    Account();
    Account(double amount, double rate);
    void deposit(double);
    bool withdraw(double); // returns true if enough money, returns false
                           // otherwise
    double query();
    void setInterestRate(double rate);
    double getInterestRate();
    void addInterest();
};

#endif
