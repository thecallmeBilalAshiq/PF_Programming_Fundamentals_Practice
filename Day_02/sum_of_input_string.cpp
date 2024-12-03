// Task 02

// Write a program which take series of the digit numbers with nothing separating them in a C-string.
// The program should display the sum of all the single-digit numbers.


// Question ni smjh a rha koi issue ni … bs numbers(in the form of sting) ko add krna ha aap ny

// > Example

// - Enter the input = 12345
// - Sum of the single digits = 15

// - Enter the input = Bilal
// - ---> Input is invalid





/////////////////////////////////////////////////////////////////////////////////////////
//                                  Solution Code                                      //
/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    string input;
    cout << "Enter a string of digits: ";
    cin >> input;

    int sum = 0;
    for (char c : input) 
    {
        if (isdigit(c)) 
        {
            sum += c - '0';
        } 
        else {
            cout << "Invalid input. Please enter a string of digits only." << endl;
            return 1;
        }
    }

    cout << "The sum of the digits is___" << sum << endl;
        return 0;
}
