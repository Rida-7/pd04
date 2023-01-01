#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void reverse(string name);

main()
{
system("cls");
gotoxy (4, 5);
string name;
cout << "Enter input: ";
cin >> name;

reverse(name);
}
  
void reverse (string name)
{
if (name == "true")
{
cout << "False";
}
if (name == "false")
{
cout << "True";
}
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}