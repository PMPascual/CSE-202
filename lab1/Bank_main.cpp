// Phillip Pascual
// file name: Bank_main.cpp
// 1.11.2018
// Main function for Lab 1, Problem 4. Constructs Bank csusbBank and passes in
// initial balances for savings and checking accounts.  Then access and
// mutates balance data in both accounts and outputs final balances to verify
// mathematical functions.

#include <iostream>
#include <string>

#include "Bank.h"

using namespace std;

main() {
    Bank csusbBank(1000,100);

    csusbBank.deposit(50,"S");
    csusbBank.withdraw(10,"CH");
    csusbBank.withdraw(10,"C");
    csusbBank.transfer(40,"S");
    csusbBank.withdraw(150,"C");
    csusbBank.printBalances();
}

