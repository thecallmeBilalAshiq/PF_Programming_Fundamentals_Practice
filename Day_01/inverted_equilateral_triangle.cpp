
//  ---------------  Code for printinginverted  Equilateral triangle    ---------------
//  ---------------        Muhammad Bilal Ashiq         ---------------


/////////////////////////////////////////////////////////////////////////////////////////
//                                  Solution Code                                      //
/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <windows.h>    // color
using namespace std;

int main()
{
	system("color 0A");     // color
	int n ;
	cout << "Enter the number of rows: ";
	cin >> n;

	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
