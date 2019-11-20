/****************************************************************************** 
 * Phillip Pascual
 * sort.cpp
 * 3.7.18
 * Lab 8: Sorting and Searching
 *****************************************************************************/
#include <iostream>
#include <algorithm> //For swap
#include <vector>
#include <fstream>

using namespace std;

//Binary search function
int binarySearch(vector<int> a, int k) {
    int start = 0;
    int end = a.size()-1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(a[mid] == k) {
            return mid;
        } else if(a[mid] > k) {
            end = mid - 1;
        } else if(a[mid] < k) {
            start = mid + 1;
        }
    }
    return -1;
}

main() {
    vector<int> arr;
    int num, search;

    ifstream in;

    in.open("input");
    while(!in.is_open()) {
        cout << "Unable to open input file." << endl;
        return 1;
    }

    in >> num;
    while(!in.eof()) {
        arr.push_back(num);
        in >> num;
    }

    //Selection sort loop
    for (int i = 0; i < arr.size()-1; ++i) {
        for (int j = i+1; j < arr.size(); ++j) {
            if (arr[i] > arr[j]) {
                swap(arr[i],arr[j]);
            }
        }
    }

    //Outputs sorted array
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    in.close();

    cout << "Enter number to find: ";
    cin >> search;
    while(!cin.eof()) {
        cout << binarySearch(arr,search) << endl;
        cout << "Enter number to find: ";
        cin >> search;
    }
}
