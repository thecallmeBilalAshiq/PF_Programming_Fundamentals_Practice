//  ---------------  Code for prinitng Strong numbers    ---------------
//  ---------------         Muhammad Bilal Ashiq          ---------------


/////////////////////////////////////////////////////////////////////////////////////////
//                                  Logic Building                                     //
/////////////////////////////////////////////////////////////////////////////////////////
// /
// Strong numbers:
// - Sum of factorial of each number == entered number is called strong number
// Example:
// Enter a number : 145 
// = 1!  +   4!    +   5!
// = 1   + (1*2*3*4)   +  (1*2*3*4*5)
// = 1   +     24     +   120
// =  145
// so 
// > 1!  +   4!    +   5!     =   entered number (145)
/////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////
//                                  Solution Code                                      //
/////////////////////////////////////////////////////////////////////////////////////////


//Sum of factorial of each number == entered number is called strong number
#include<iostream>
using namespace std;
int main()
{
	cout << "\t\t_________________ Strong Number_________________\n\n";
	int num, sum = 0, d = 0, factorial = 1, count = 1, copy;
	cin >> num;
	copy = num;
	while (num > 0)
	{
		factorial = 1;
		d = num % 10;
		num = num / 10;
		while (d > 0)
		{
			factorial = factorial * d; 
			d--;
		}
		sum = sum + factorial;
	}

	if (sum == copy)
	{
		cout << "It is strong number\n";
	}
	else
	{
		cout << "It is not strong number\n";
	}
	return 0;
}

