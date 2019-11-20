/******************************************************************************
 * Phillip Pascual
 * stackTest.cpp
 * 3.14.18
 * Lab 9: Stacks, Templates and Adaptors
 *****************************************************************************/

#include <iostream>
#include <string>

#include "stack.h"

using namespace std;

main() {
    Stack<int> s1;

    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(1);
    while (!s1.empty()) {
        cout << s1.top() << endl;
        s1.pop();
    }

    Stack<string> s2;
    s2.push("Yoda said ");
    s2.push("something ");
    s2.push("to write ");
    while (!s2.empty()) {
        cout << s2.top();
        s2.pop();
    }
    cout << endl;
    s2.pop();
    cout << s2.top();
}
