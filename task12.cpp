#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void discount(float num);


main()
{
system("cls");
gotoxy (4, 5);
int redRoses;
int whiteRoses;
int tulips;
float totalPrice;
while(true)
{
cout << "Enter number of red roses: ";
cin >> redRoses;
cout << "Enter number of white rose: ";
cin >> whiteRoses;
cout << "Enter number of tulips: ";
cin >> tulips;
totalPrice = 2.00*redRoses + 4.10*whiteRoses + 2.50*tulips;
cout << "Total price is:" << totalPrice << endl;
 
discount(totalPrice);


}
}
void discount(float num)
{
float discount, output;
if ( num > 200)
{ 
discount = 0.2*num;
output = num - discount;
cout << "payable amount is: " << output << endl;
}

if ( num <=200)
{ 
cout << "payable amount is: " << num << endl;
}


}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}