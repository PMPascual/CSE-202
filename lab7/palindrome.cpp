/*******************************************************************************
 * Phillip Pascual
 * filename: palindrome.cpp
 * 2.28.2018
 * Palindrome program, Lab 7.
 ******************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isLetter(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    return c;
}

bool isPalindrome(string s) {
    if (s.length() <= 1) {
        return true;
    }
    string temp;
        
    char first = s[0];
    char last = s[s.length() - 1];
    string shorter;
    
    first = toLower(first);
    last = toLower(last);

    if (first == last) {
        shorter = s.substr(1,(s.length()-2));
        return isPalindrome(shorter);
    }
    return false;
}

main () {
    cout << "Enter a string: ";
    string input, clean;

    getline(cin,input);

    for (int i = 0; i < input.length(); ++i) {
        if (isLetter(input[i])) {
            clean += input[i];
            }
    }

    cout << "\'" << input << "\' is ";
    if (!isPalindrome(clean)) {
        cout << "not ";
    }

    cout << "a palindrome." << endl;
}
