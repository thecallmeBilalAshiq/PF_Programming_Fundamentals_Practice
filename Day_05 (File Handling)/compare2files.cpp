// 9. Compare Two Files
// Write a C++ program that:

// Reads two files named fileA.txt and fileB.txt.
// Compares their contents line by line.
// Displays "Files are identical" if they match, otherwise indicates the first mismatched line.


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin1("fileA.txt"), fin2("fileB.txt");

    if (!fin1.is_open() || !fin2.is_open()) 
    {
        cout << "Error opening files!" << endl;
        return 1;
    }

    string line1, line2;
    int lineNumber = 0;
    bool identical = true;

    while (getline(fin1, line1) && getline(fin2, line2)) {
        lineNumber++;
        if (line1 != line2) {
            identical = false;
            cout << "Mismatch at line " << lineNumber << endl;
            break;
        }
    }

    if (identical && fin1.eof() && fin2.eof()) {
        cout << "Files are identical." << endl;
    } else if (identical) {
        cout << "Files differ in size." << endl;
    }

    fin1.close();
    fin2.close();

    return 0;
}
