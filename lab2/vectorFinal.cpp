// Phillip Pascual
// file name: vectorFinal.cpp
// 1.17.2017
// Lab 2, Problem 3
// 1 - Write a function that appends one vector to the end of another vector and
// returns a third vector with the result.  Write a main that prompts the user
// to enter values for the first vector (until -1 is entered), then enter
// values for the second vector (until -1 is entered).  Main will then call the
// append function and display the result.
//
// 2 - Write a function that merges two functions, alternating their elements 
// into third vector.  If one vector is shorter than the other, alternate as 
// long as the shorter vector then append the remaining elements from the 
// longer vector.
//
// 3 - Write a function to merge two sorted vectors, producing a new sorted
// vector.  Keep an index into each vector, indicating how much of it has been
// processed already.  Each time, append the smallest unprocessed element and
// advance its index.
//
// **Solutions**
//
// 1 - Initialized vectors first, second, and result, as well as initialized 
// int x. Created a do-while loop that prompts user to enter values for the 
// first vector.  Inside the do-while loop, used an if-statement to break out 
// of the loop if -1 is entered, but continue to prompt for values and 
// push_back so long as -1 is not entered.  Repeated the do-while loop for the 
// second vector and then called the append function to return into the results 
// vector. Used a for-loop to display the contents of the result vector.
//
// 2 - Worked with three conditions, a same size as b, a smaller than b, and b
// smaller than a.  If a size same as b, used for loop to go through each index
// in vector and push back values (a first, then b).  If a larger than b, uses
// for loop to push back values (a first, then b) until index reaches end of b,
// then exits loop and enters second for loop to push back values of a until
// end of vector.  If b larger than a, uses for loop to push back values (a 
// first, then b) until index reaches end of a, upon which exits loop and
// enters second loop to push back values of b until index reaches end of b.
//
// 3 - Initialized index for vectors a and b at 0 and initialized vector c to
// store results.  Entered while loop that checks if index a is less than size
// of a and if index b is less than size of b.  If true, checked if value of a
// at index is less than value of b at index.  If true, pushed back value of a
// and incremented a's index.  If false, pushed back value of b and incremented
// b's index.  Exited while loop as soon as either index reached size of its
// assigned vector.  Then entered second while loop for remaining values in 
// remaining vector, pushed back remaining values until index reached end of
// vector.

#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

// Append function
vector<int> append(vector<int> a, vector<int> b) {
    int n = a.size();
    int m = b.size();
    vector<int> c(n + m);
    
    for (int i = 0; i < n; ++i) {
        c[i] = a[i];
    }

    for (int i = 0; i < n; ++i) {
        c[n + i] = b[i];
    }

    return c;
}

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

//Takes two sorted vectors and returns merged and sorted vector
vector<int> mergeSorted(vector<int> a, vector<int> b) {
    int i = 0;  // Index for vector a
    int j = 0;  // Index for vector b
    
    vector <int> c;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            c.push_back(a[i]);
            i++;
        } else if (b[j] < a[i]) {
            c.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        c.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        c.push_back(b[j]);
        j++;
    }

    return c;
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

    result = append(first,second);

    cout << "The combined appended vector is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    cout << endl;

    result = merge(first,second);

    cout << "The combined merged vector is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    cout << endl;

    sort(first.begin(),first.end());
    sort(second.begin(),second.end());

    cout << "The sorted first vector is: ";
    for (int i = 0; i < first.size(); ++i) {
        cout << first[i] << " ";
    }
    cout << endl;
    cout << "The sorted second vector is: ";
    for (int i = 0; i < second.size(); ++i) {
        cout << second[i] << " ";
    }
    cout << endl;

    result = mergeSorted(first,second);

    cout << "The combined merged and sorted vector is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    cout << endl;
}
