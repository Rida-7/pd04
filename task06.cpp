#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA();
void printW();
void printI();
void printS();

main()
{
  system("cls");
  gotoxy (0, 20);
  printA();
  gotoxy(0, 30);
  printW();
  gotoxy(0, 40);
  printA();
  gotoxy(0, 50);
  printI();
  gotoxy(0, 60);
  printS();

}


void printA()
{
  cout << "  #######  " << endl;
  cout << " ##     ## " << endl;
  cout << " ##     ## " << endl;
  cout << " ##     ## " << endl;
  cout << " ######### " << endl;
  cout << " ##     ## " << endl;
  cout << " ##     ## " << endl;
  cout << " ##     ## " << endl;
}  
void printW()
{   
  cout << " ##         ## " << endl;
  cout << " ##         ## " << endl;
  cout << " ##         ## " << endl;
  cout << " ##         ## " << endl;
  cout << " ##   ###   ## " << endl;
  cout << " ##  ## ##  ## " << endl;
  cout << " ## ##   ## ## " << endl;
  cout << "  ##       ##  " << endl;
}
void printI()
{
  cout << " ######## " << endl;
  cout << "    ##    " << endl;
  cout << "    ##    " << endl;
  cout << "    ##    " << endl;
  cout << "    ##    " << endl;
  cout << "    ##    " << endl;
  cout << "    ##    " << endl;
  cout << " ######## " << endl;
}
void printS()
{
  cout << "  ####### " << endl;
  cout << " ##       " << endl;
  cout << " ##        " << endl;
  cout << "   #####   " << endl;
  cout << "        ## " << endl;
  cout << "        ## " << endl;
  cout << "  #######  " << endl;

}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}