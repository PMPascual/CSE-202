// Phillip Pascual
// file name: vector_mergeSorted.cpp
// 1.24.2018
// Sorts two vectors, then merges so that values of combined vector are sorted

#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

vector<int> (vector<int> a, vector<int> b);

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
    
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    result = mergeSorted(first,second);

    cout << "The combined vector is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    cout << endl;
}

// Merges input vectors and returns merged sorted vector
vector<int> mergeSorted(vector<int> a, vector<int> b) {
    
