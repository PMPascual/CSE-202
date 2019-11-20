// Phillip Pascual
// file name arrayLab.cpp
// 1.31.2018
// Program that demonstrates array and pointer functions

#include <iostream>

using namespace std;

// Counts length of array and returns length
unsigned int strlen(const char s[]) {
    unsigned int n;

    for (n = 0; s[n]; n++); // Same as n != NULL
    return n;
}

unsigned int strlenPoint(const char* s) {
    unsigned int a;

    for (a = 0; *(s+a); a++);
    return a;
}

void strcpy(char t[], const char s[]) {
    for (int i = 0; t[i] = s[i]; i++); 
}

void strcpyPoint(char* t, const char* s) {
    for (; *t++ = *s++; ); 
}

void strncpy(char t[], const char s[], const unsigned int n) {
    unsigned int i;
    for (i = 0; i < n and s[i]; i++) {
        t[i] = s[i];
    }
    t[i] = '\0';
}

void strcat(char t[], const char s[]) {
    unsigned int i;
    for (i = 0; t[i]; i++) {
        strcpy(t+i,s);
    }
}

main() {
    char testArray[] = "abcd";
    char targetArray[10];
   
    char pointTestArray[] = "zyxw";
    char pointTargetArray[10];

    cout << "Test Array: " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << testArray[i] << " ";
    }
    cout << endl;

    cout << "Pointer Test Array: " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << pointTestArray[i] << " ";
    }
    cout << endl;

    cout << "Strlen using array: " << strlen(testArray) << endl;
    cout << "Strlen using pointers: " << strlenPoint(pointTestArray) << endl;
    cout << endl;

    cout << "TESTING strcpy ARRAY FUNCTION:" << endl;
    
    strcpy(targetArray, testArray);
    
    cout << "Original array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << testArray[i] << " ";
    }
    cout << endl;

    cout << "Target array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << targetArray[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "TESTING strcpy - POINTER FUNCTION:" << endl;

    strcpyPoint(pointTargetArray, pointTestArray);
    cout << "Original array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << pointTestArray[i] << " ";
    }
    cout << endl;

    cout << "Target array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << pointTargetArray[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "strncpy FUNCTION - ARRAY: 2 chars" << endl;
    strncpy(targetArray, testArray, 2);
    cout << "Original array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << testArray[i] << " ";
    }
 
    cout << endl;

    cout << "Target array:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << targetArray[i] << " ";
    }
    cout << endl;
   
    cout << "strncpy FUNCTION - ARRAY: 5 chars (source < n)" << endl;
    strncpy(testArray, targetArray, 5);
    cout << "Original array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << testArray[i] << " ";
    }

    cout << endl;

    cout << "Target array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << targetArray[i] << " ";
    }
    cout << endl;

}

