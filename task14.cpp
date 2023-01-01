#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMenu();
void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2);


main()
{
system("cls");
gotoxy (0, 5);
printMenu();

string name, name1, name2 ;
float matricMarks;
float interMarks;
float ecatMarks, ecatMarks1, ecatMarks2;

cout << "enter your name: ";
cin >> name;

cout <<" enter your matric marks: ";
cin >> matricMarks;

cout << "enter your intermediate marks: ";
cin >> interMarks;

cout << "enter your ecat marks: ";
cin >> ecatMarks; 

calculateAggregate(name, matricMarks, interMarks, ecatMarks);

cout << "Enter name of studnet 01: ";
cin >> name1;
cout << "Enter ecat marks of student 01: ";
cin >> ecatMarks1;
cout << "Enter name of studnet 02: ";
cin >> name2;
cout << "Enter ecat marks of student 02: ";
cin >> ecatMarks2;

compareMarks(name1, ecatMarks1, name2, ecatMarks2);
}

void printMenu()
{
cout << "******************************************************" << endl;
cout << "*                                                    *" << endl;
cout << "*       UNIVERSITY ADMISSION MANAGEMENT SYSTEM       *" << endl;
cout << "*                                                    *" << endl;
cout << "******************************************************" << endl;
}   

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks)
{

float ecat;
float matric;
float intermediate;
float aggregate;


matric = 0.3 * (matricMarks/1100.0)*100;

intermediate = 0.3 * (interMarks/550.0)*100;

ecat = 0.4 * (ecatMarks/400.0)*100;

aggregate = ecat + matric + intermediate ;
cout <<"your aggregate is: " << aggregate << endl;

}
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2)
{
if ( ecatMarksStd1 > ecatMarksStd2)
{ 
cout << " first roll number will be of " << nameStd1 << endl;

}
if ( ecatMarksStd1 < ecatMarksStd2)
{
cout << " first roll number will be of " << nameStd2 << endl;
}
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}