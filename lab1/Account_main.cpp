// Phillip Pascual
// file name: Account_main.cpp
// 1.11.2018
// Main function for Lab 1, Problem 2. Constructs new Accounts savings and
// checking, calls balance query for both, then calls withdrawal functions.

#include <iostream>

#include "Account.h"

using namespace std;

main() {
    Account savings(100);

    savings.deposit(20);
    cout << savings.query() << endl;

    if (savings.withdraw(50)) 
        cout << "Successful withdraw.\n";
    else cout << "Not enough funds, $5 penalty charged.\n";
    cout << savings.query() << endl;

    if (savings.withdraw(80)) 
        cout << "Successful withdraw.\n";
    else cout << "Not enough funds, $5 penalty charged.\n";
    cout << savings.query() << endl;
}
    
