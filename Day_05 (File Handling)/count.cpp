// 2. Count Words in a File


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("words.txt");
    if (!fin.is_open()) 
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string word;
    int wordCount = 0;

    while (fin >> word) 
    {
        wordCount++;
    }

    cout << "Number of words: " << wordCount << endl;

    fin.close();

    return 0;
}
