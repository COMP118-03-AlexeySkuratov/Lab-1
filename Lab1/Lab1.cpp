/*
* 

*/
#include <iostream>

using  namespace std;

void DrawHorizontalLine(int, char);
void DrawVerticalLine(int height, char ch);
void DrawSquare(int size, char ch);
void DrawRectangle(int height, int length, char ch);

int main()
{
	int choice;
	int _length;
	char _ch;
	do
	{

		cout << "\n1) Draw a horizontal line";
		cout << "\n2) Draw a vertical line";
		cout << "\n3) Draw a square";
		cout << "\n4) Draw a rectangle";
		cout << "\n5) Quit";
		cout << "\nEnter choice: ";
		cin >> choice;


		switch (choice)
		{
		case 1:
			cout << "\n\nEnter length of the line : ";
			cin >> _length;

			cout << "\nEnter a character of the line: ";
			cin >> _ch;
			DrawHorizontalLine(_length, _ch);
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		default:
			break;
		}

	} while (choice != 5);

	
}

//Draws a horizontal line
void DrawHorizontalLine(int length, char ch)
{
	for (int i = 0; i < length; ++i)
	{
		cout << ch;
	}
	cout << endl;
}

