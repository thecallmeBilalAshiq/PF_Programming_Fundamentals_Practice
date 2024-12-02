
//  ---------------  Code for printing righ triangle    ---------------
//  ---------------        Muhammad Bilal Ashiq         ---------------


/////////////////////////////////////////////////////////////////////////////////////////
//                                  Solution Code                                      //
/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	int n = 5;

	// ith row has n-i+1 elements
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
