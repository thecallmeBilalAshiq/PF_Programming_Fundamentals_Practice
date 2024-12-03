// ============================================================== //
//                 Colors in C++ console                          //
// ============================================================== //

// include this library   =====>>>>>>>   #include <windows.h> 
// wrrit this line        =====>>>>>>>   system("color 1B");
// 1  ----> text color
// B  ----> background color


//                     Color id	Color	Color id	Color
//                     1	Blue	9	Light Blue
//                     2	Green	0	Black
//                     3	Aqua	A	Light Green
//                     4	Red	B	Light Aqua
//                     5	Purple	C	Light Red
//                     6	Yellow	D	Light Purple
//                     7	White	E	Light Yellow
//                     8	Gray	F	Bright White


#include <iostream>
#include <windows.h> 
using namespace std;

int main()
{
	system("color 1B");        // color
	
	cout << "\n\n\n\t\t ---> Muhammad Bilal Ashiq";	
    cout << "\n\t\t ---> Compiler G \n\n";
	
	return 0;
}
