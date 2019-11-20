// Phillip Pascual
// file name: vector_merge.cpp
// 1.17.2018
// Write function 'merge' that takes two entered vectors and combines them into
// a third vector, alternating elements into the third vector and returning the
// result.  If one vector is shorter than the other, alternate for the length
// of the shorter vector then append the remaining elements from the longer
// vector.
//
// Obtains input on both vectors from user and then calls merge.  Merge then
// uses for-loops to push back vector<int> c with alternating a and b values.
// If either vector is shorter than the other, pushes back the remaining values
// of the longer vector to vector c, then returns c.  Main then outputs values
// of the new merged vector.

#include <iostream>

#include <vector>

using namespace std;

// Merge function, takes vector a and merges with vector b, returns result
vector<int> merge(vector<int> a, vector<int> b) {
    vector<int> c;

    if (a.size() == b.size()) {
        for (int i = 0; i < b.size(); ++i) {
            c.push_back(a[i]);
            c.push_back(b[i]);
        }
        return c;
    } else if (a.size() > b.size()) {
        for (int i = 0; i < b.size(); ++i) {
            c.push_back(a[i]);
            c.push_back(b[i]);
        }
        for (int i = b.size(); i < a.size(); ++i) {
            c.push_back(a[i]);
        }
        return c;
    } else if (a.size() < b.size()) {
        for (int i = 0; i < a.size(); ++i) {
            c.push_back(a[i]);
            c.push_back(b[i]);
        }
        for (int i = a.size(); i < b.size(); ++i) {
            c.push_back(b[i]);
        }
        return c;
    }
}

main () {
    vector<int> first;
    vector<int> second;
    vector<int> result;
    int x;
    
    do {
        cout << "Enter a number for first vector (-1 to quit): " ;
        cin >> x;
        if(x == -1) {
            break;
        }        
        first.push_back(x);
    } while(x != -1);

    do {
        cout << "Enter a number for second vector (-1 to quit): ";
        cin >> x;
        if(x == -1) {
            break;
        }
        second.push_back(x);
    } while(x != -1);

    result = merge(first,second);

    cout << "The combined vector is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    cout << endl;
}


