#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void ticketPrice(string name, int price);

main()
{
system("cls");
gotoxy (4, 5);
string name;
int price;
while(true)
{
cout << "Enter country name: ";
cin >> name;
cout << "Enter ticket price in dollars: ";
cin >> price;

ticketPrice(name, price);
}
}
void ticketPrice(string name, int price)
{
 int output, discount;
if (name == "Pakistan")
{
discount = 0.05 * price;
output = price - discount;
cout << "ticket price after discount is " << output << " dollars" << endl;
}

 if (name == "Ireland")
{
discount = 0.1 * price;
output = price - discount;
cout << "ticket price after discount is " << output << " dollars" << endl;
}

if (name == "India")
{
discount = 0.2 * price;
output = price - discount;
cout << "ticket price after discount is " << output << " dollars" << endl;
}

if (name == "England")
{
discount = 0.3 * price;
output = price - discount;
cout << "ticket price after discount is " << output << " dollars" << endl;
}

if (name == "Canada")
{
discount = 0.45 * price;
output = price - discount;
cout << "ticket price after discount is " << output << " dollars" << endl;
}
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}