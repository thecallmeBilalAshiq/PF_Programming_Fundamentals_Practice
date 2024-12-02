//  ---------  Code for making Hollow shape square     ----------

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the hollow square: ";
    cin >> size;

    // logic can be changed , you can start iteration from      i = 0
    for (int i = 1; i <= size; i++)       
    {
        if (i == 1 || i == size)            // for 1st and last row
        {
            for (int j = 1; j <= size; j++) 
            {
                cout << "*";
            }
        } 
        else
        {
            cout << "*";               //    1st star for each row
            for (int j = 1; j <= size - 2; j++) 
            {
                cout << " ";           // spaces 
            }
            cout << "*";               //   last star for each row
        }
        cout << endl;
    }

    return 0;
}
