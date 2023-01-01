#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void challan(int num);

main()
{
system("cls");
gotoxy (4, 5);
int num;
while(true)
{
cout << "Enter speed: ";
cin >> num;

challan(num);
}
}
void challan(int num)
{
if (num <= 100)
{
cout << " Perfect! You are going good." << endl;
}
if (num >= 100)
{
cout << "Halt....You will be challenged." << endl;
}

}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}