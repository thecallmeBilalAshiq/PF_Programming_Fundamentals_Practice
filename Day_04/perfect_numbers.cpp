//  ---------------  Code for prinitng perfect numbers    ---------------
//  ---------------         Muhammad Bilal Ashiq          ---------------


/////////////////////////////////////////////////////////////////////////////////////////
//                                  Logic Building                                     //
/////////////////////////////////////////////////////////////////////////////////////////
// 
// Let the entered number is 6 
// Make factors of 6
// ------------>    1 , 2 , 3  (these numbers can divide 6)
//   1   +  2  +  3   =   6   (entered number)
// 6 is a perfect number
/////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////
//                                  Solution Code                                      //
/////////////////////////////////////////////////////////////////////////////////////////


//Sum of divisor == entered number is called perfect number
#include<iostream>
using namespace std;
int main()
{
	cout << "\t\t_________________ Perfect Number _________________\n\n";
	int act, sum = 0, count = 1;
	for (int i = 1; i <= 100; i++)
	{
		sum = 0;
		count = 1;
		while (i > count)
		{
			if (i % count == 0)
			{
				sum = sum + count;
			}
			count++;
		}
		if (sum == i)
		{
			cout << i << " is  is perfect number\n";
		}
	}
}
