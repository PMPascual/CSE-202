/******************************************************************************
 * Phillip Pascual
 * balanced.cpp
 * 3.7.18
 * Homework 4
 * Write a proram that deicdes whether a file contains balanced curly braces,
 * parentheses, square brackets, and angled brackets.  Input the file name,
 * open it, and read one character at a time until end-of-file.  If the file is
 * balanced, your program should ouput 'Balanced'.  If the file is not
 * balanced, your program should output 'Not Balanced'.
 *
 * Solution:
 * Initializes a stack of chars and opens a specified file.  Reads in file one
 * char at a time, and if char is (, <, [, or {, pop onto stack.  If reads in
 * closed brace, parentheses, or bracket, and stack is not empty, checks for
 * open counterpart at top of stack.  If exists, pops top of stack.
 *
 * After all chars read in, checks if stack is empty.  If empty, file is
 * balanced.  If not empty, file is not balanced.
 *****************************************************************************/

#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

main() {
    stack<char> ch;
    string filename;
    char input;

    ifstream in;

    cout << "Enter a filename to check: ";
    cin >> filename;

    in.open(filename);
    while(!in.is_open()) {
        cout << "Cannot open " << filename << "." << endl;
        cout << endl;
        return 1;
    }

    in.get(input);
    while(!in.eof()) {
        if (input == '[' || input == '{' || input == '(' || input == '<')  {
            ch.push(input);
        }
        if ((input == ']' || input == '}' || input == '>') && !ch.empty()) {
            if (ch.top() == input - 2) {
                ch.pop();
            }
        } else if (input == ')' && !ch.empty()) {
            if (ch.top() == input - 1) {
                ch.pop();
            }
        }
        in.get(input);
    }

    if (ch.empty()) {
        cout << "Balanced." << endl;
    } else {
        cout << "Not balanced." << endl;
    }

    in.close();
}

