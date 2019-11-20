#include <iostream>

//Phillip Pascual
//file name: lab3test.cpp
//date 2.3.2018
//Testing program for array functions

using namespace std;

unsigned int strlen(const char s[]) {
    unsigned int n;
    for (n = 0; s[n]; n++); // same as s[n] != '\0'  
    return n;
}

/*
void strcpy(char t[], const char s[]) {
    for (int i = 0; t[i] = s[i]; i++);
}
*/

//Pointer version for strcpy
void strcpy(char* t, const char* s) {
    for ( ; *t++ = *s++; );
}

/*
void strncpy(char t[], const char s[], const unsigned int n) {
    unsigned int i;
    for (i = 0; i < n and s[i]; i++) {
        t[i] = s[i];
    }
    t[i] = '\0';
}
*/

//Pointer version for strncpy
void strncpy(char* t, const char* s, const unsigned int n) {
    unsigned int i = 0;
    for ( ;i++ < n and *s+i;  ) {
        *t++ = *s++;
    }
    *(t+i) = '\0';
}

/*
void strcat(char t[], const char s[]) {
    unsigned int i;
    for (i = 0; t[i]; i++); 
    strcpy(t+i, s);
    
}
*/

//Pointer version for strcat
void strcat(char* t, const char* s) {
    unsigned int i;
    for (i = 0; *(t+i); i++);
    strcpy(t+i, s);
}

int strcmp(const char* t, const char *s) {
    for (; *t == *s && *s; t++, s++);
    return *t - *s;
}

int main() {
    char array[] = "abcde";
    char target[20];

    //Testing strcpy function
    cout << "Testing strcpy..." << endl;
    strcpy(target, array);

    cout << "Test array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Target array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << target[i] << " ";
    }
    cout << endl;
    cout << endl;

    //Clearing target array for next test
    for (int i = 0; i < 20; i++) {
        target[i] = '\0';
    }

    //Testing strncpy function
    cout << "Testing strncpy..." << endl;
    strncpy(target, array, 4);
    
    cout << "Test array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Target array:" << endl;
    for (int i = 0; i < 4; i ++) {
        cout << target[i] << " ";
    }
    cout << endl;
    cout << endl;

    //Filling target array and testing strcat function
    for (int i = 0 ; i < 5; i++) {
        target[i] = 'x'; 
    }
    
    cout << "Target array before concatenation:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << target[i] << " ";
    }
    cout << endl;
    
    cout << "Test array before concatenation:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;

    strcat(target, array);
    
    cout << "Test array after concatenation:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Concatenated array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << target[i] << " ";
    }
    cout << endl;

    // Resetting test and target arrays for strcmp
    char comptest1[] = "abc";
    char comptest2[] = "abcd";

    cout << "strcmp result: " << strcmp(comptest1, comptest2) << endl;
}
