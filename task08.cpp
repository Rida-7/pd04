#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void isEqual(int x, int y);

main()
{
system("cls");
gotoxy (4, 5);
int num01;
int num02;
cout << " Enter number 01: ";
cin >> num01;
cout << " Enter number 02: ";
cin >> num02;
 isEqual(num01, num02);
 
}


void isEqual(int x, int y)
{
 if ( x == y)
{ 
cout << "True" << endl;
}
if ( x != y)
{
cout << " False" << endl;
}
}





void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}