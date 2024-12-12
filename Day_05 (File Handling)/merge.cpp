// 6. Merge Two Files
// Write a C++ program that:

// Reads two files named file1.txt and file2.txt.
// Merges their contents line by line into a new file named merged.txt.
// For example, if the first line of file1.txt is "Hello" and the first line of file2.txt is "World", the output file should contain "Hello World".



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin1("file1.txt"), fin2("file2.txt");
    ofstream fout("merged.txt");

    if (!fin1.is_open() || !fin2.is_open() || !fout.is_open()) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    string line1, line2;

    while (getline(fin1, line1) && getline(fin2, line2)) {
        fout << line1 << " " << line2 << endl;
    }

    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
