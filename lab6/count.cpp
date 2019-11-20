/*******************************************************************************
 * Phillip Pascual
 * count.cpp
 * 2.21.18
 * Program that counts the number of lines, words and characters.
 * Lab 6
 ******************************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

main() {
    string word, line;
    int chars = 0, words = 0, lines = 0;
    string file;

    ifstream in;

    cout << "Please enter file to open: ";
    cin >> file;

    while (!cin.eof()) {
        in.open(file.c_str());
        if (!in.is_open()) {
            cout << "Couldn't open " << file << endl;
            exit(1);
        }
    
        getline(in,line);
        while (!in.eof()) {
            lines++;
            chars += line.length() +1; // +1 for new line

            istringstream lineString(line);
            while (lineString >> word) {
                words++;
            }

            getline(in,line);
        }
        
        cout << lines << ' ' << words << ' ' << chars << endl;
        
        in.close();

        cout << "Please enter file to open: ";
        cin >> file;
    }

}
