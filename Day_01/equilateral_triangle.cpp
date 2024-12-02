
//  ---------------  Code for printing Equilateral triangle    ---------------
//  ---------------        Muhammad Bilal Ashiq         ---------------


/////////////////////////////////////////////////////////////////////////////////////////
//                                  Solution Code                                      //
/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	int n ;
	cout << "Enter the number of rows: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
