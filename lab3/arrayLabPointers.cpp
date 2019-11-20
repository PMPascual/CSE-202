// Phillip Pascual
// file name: arrayLabPointers.cpp
// date: 2.5.18
// Lab 3: Arrays and Pointers functions and main.  Functions using pointers

#include <iostream>

using namespace std;

// Counts length of array and return length
unsigned int strlen(const char s[]) {
    unsigned int n;
    for (n = 0; s[n]; n++); // same as s[n] != '\0'
    return n;
}

// Copies null-terminated source array to target array
void strcpy(char* t, const char* s) {
    for ( ; *t++ = *s++; );
}

// Copies specified number of elements from source array to target array
void strncpy(char* t, const char* s, const unsigned int n) {
    unsigned int i;
    for (i = 0 ;i++ < n and *s+i; ) {
        *t++ = *s++;
    }
    *t = '\0';
}

// Concatenates source array to end of target array
void strcat(char* t, const char* s) {
    unsigned int i;
    for (i = 0; *(t+i); i++);
    strcpy(t+i, s);
}

// Compares source array to target array and returns ASCII difference between
// first two non-identical elements
int strcmp(const char* t, const char *s) {
    for (; *t == *s && *s; t++, s++);
    return *t - *s;
}

main()
{
    char str1[20] = "abcd", str2[20] = "efg";

    cout << "str1=" << str1<< " str2=" << str2 << endl;
    cout << "strlen(str1)=" << strlen(str1)<< " strlen(str2)=" << strlen(str2) 
        << endl;

    strcpy(str1, str2);
    cout << "str1=" << str1 << endl;

    strcat(str1, str2);
    cout << "str1=" << str1 << endl;

    cout << "strcmp(str1, str2)=" << strcmp(str1, str2) << endl;
    cout << "strcmp(str2, \"efh\")=" << strcmp(str2, "efh") << endl;

    strncpy(str2, "hi jkl", 2);
    cout << "str2=" << str2 << endl;

    strncpy(str2, "hi jkl", 12);
    cout << "str2=" << str2 << endl;
}
