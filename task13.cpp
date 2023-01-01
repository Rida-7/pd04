#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void tom(int num01, int num02);


main()
{
system("cls");
gotoxy (4, 5);
int holidays;
int workingDays;
int timeForGames;
int normDifference;
cout << " Enter holidays: ";
cin >> holidays;
workingDays = 365 - holidays;
timeForGames = workingDays*63 + holidays*127;
normDifference = 30000 - timeForGames;

tom(timeForGames, normDifference);

}

void tom(int num01, int num02)
{
if (num01 < 30000)
{
cout << "Tom sleeps well" << endl;
cout << "difference from current year norm is " << num02  << " minutes" << endl;
}

if (num01 > 30000)
{
cout << "Tom will run away" << endl;
cout << "difference from current years norm is " << num02  << " minutes" << endl;
}

}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}