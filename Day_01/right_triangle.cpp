//  ---------------  Code for printing righ triangle    ---------------
//  ---------------        Muhammad Bilal Ashiq          ---------------

/////////////////////////////////////////////////////////////////////////////////////////
//                                  Logic Building                                     //
/////////////////////////////////////////////////////////////////////////////////////////
//
// // Look at the right triangle pattern
//                                          *
//                                          * *
//                                          * * *
//                                          * * * *
//                                          * * * * *
//
// ith row has i elements
// 1st row --- 1 star 
// 2nd row --- 2 stars
// 3rd row --- 3 stars
// 4th row --- 4 stars
// and so on
////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////
//                                  Solution Code                                      //
/////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
	cin >> n;

	for (int i = 1; i <= n; i++) 
    {
		for (int j = 1; j <= i; j++)   // ith row has i elements ,,, so loop will be depend upon i
        {
		    cout << "* ";
        }
		cout << endl;
	}
	return 0;
}
