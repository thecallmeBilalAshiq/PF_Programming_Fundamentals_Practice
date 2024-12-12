// 1. Read and Write Even Numbers

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("even.txt");

    if (!fin.is_open() || !fout.is_open()) 
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int num;
    while (fin >> num) 
    {
        if (num % 2 == 0) 
        {
            fout << num << endl;
            cout << num << endl;
        }
    }

    fin.close();
    fout.close();

    return 0;
}
