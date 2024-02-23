/*
* 

*/
#include <iostream>

using  namespace std;

void DrawHorizontalLine(int, char);
void DrawVerticalLine(int, char);
void DrawSquare(int, char);
void DrawRectangle(int, int, char);

int main()
{
	int choice;
	int _length, _height, _size;
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
			do
			{

				cout << "\n\nEnter length of the horizontal line : ";
				cin >> _length;
			} while (_length < 1);

				cout << "\nEnter a character of the horizontal line: ";
				cin >> _ch;
			DrawHorizontalLine(_length, _ch);
			break;
		case 2:

			do
			{
				cout << "\n\nEnter height of the vertical line: ";
				cin >> _height;
			} while (_height < 1);

			cout << "\nEnter a character of the vertical line: ";
			cin >> _ch;
			DrawVerticalLine(_height, _ch);
			break;
		case 3:
			do
			{
				cout << "\nEnter a size for the square: ";
				cin >> _size;
			} while (_size < 1);
			cout << "\nEnter a character of the square: ";
			cin >> _ch;
			DrawSquare(_size, _ch);
			break;
		case 4:

			do
			{
				cout << "\n\nEnter length of the rectangle: ";
				cin >> _length;
			} while (_length < 1);

			do
			{
				cout << "\n\nEnter height of the rectangle: ";
				cin >> _height;
			} while (_height < 2);

			cout << "\nEnter a character of the Rectangle: ";
			cin >> _ch;
			DrawRectangle(_length, _height, _ch);
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
void DrawVerticalLine(int height, char ch)
{
	for (int i = 0; i < height; ++i)
	{
		cout << ch << endl;
	}
	cout << endl << endl;
}
void DrawRectangle(int length, int height, char ch)
{
	//Top Line
	DrawHorizontalLine(length, ch);

	for (int i = 0; i < height - 2; ++i)
	{
		cout << ch;
		
		for (int j = 0; j < length - 2; ++j)
		{
			cout << ' ';
		}

		cout << ch << endl;
	}
	DrawHorizontalLine(length, ch);
}
void DrawSquare(int size, char ch)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			cout << ch << ' ';
		}
		cout << endl;
	}
}

