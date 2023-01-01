#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printName();
main()  
{
  system("cls");
  gotoxy(20, 20);
  printName();
}
void printName()
{
 cout << "   ##########   ########  ########        #######   "; gotoxy(20, 21);
 cout << "   ###      ##     ##     ##       ##    ##     ##  "; gotoxy(20, 22);
 cout << "   ###       ##    ##     ##        ##  ##       ## "; gotoxy(20, 23);
 cout << "   ###      ##     ##     ##         ## ##       ## "; gotoxy(20, 24);
 cout << "   ##########      ##     ##         ## ##       ## "; gotoxy(20, 25);
 cout << "   ### ####        ##     ##         ## ########### "; gotoxy(20, 26);
 cout << "   ###   ###       ##     ##        ##  ##       ## "; gotoxy(20, 27);
 cout << "   ###    ###      ##     ##       ##   ##       ## "; gotoxy(20, 28);
 cout << "   ###     ###  ########  #########     ##       ## "; gotoxy(20, 29);
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}