/*
Programmer: Alexey Skuratov U234N1320
Date: 09/02/2024
Purpose of program:
*/

#include <iostream>
using namespace std;


//Function prototypes
// Returns the sum of the two numbers
double sumTwoNumbers(double, double);

// Returns the area of a circle given the radius
// HINT: area = pi * radius * radius
double areaOfCircle(double);

// Returns the circumference of a circle given the radius
// HINT: circumference = 2 * pi * radius
double circumferenceOfCircle(double);

// Returns the price including the vat (given as %)
// Example price is 55, vat 21%, then
// priceWithVAT = price + (price * vat/100)
// 66.55 = 55 + (55 * 21/100)
double priceIncludingVAT(double, int);


//Driver
int main()
{
    int in_choice = 0;

    while (in_choice != 5)
    {
        cout << "\n\nHello! Choose one of the following programs:" << endl
            << " 1) Sum two numbers" << endl
            << " 2) Calculate area of a circle" << endl
            << " 3) Calculate circumference of a circle"
            << " 4) Calculate price with VAT" << endl
            << " 5) Exit" << endl
            << "Enter your choice: ";
        cin >> in_choice;
        switch (in_choice)
        {
            case 1: //sumTwoNumbers function
                int in_num1, in_num2;
                cout << "\nThis block sums 2 number you enter." << endl;
                cout << "Enter first number to proceed: ";
                cin >> in_num1;
                if (!cin)
                {
                    cerr << "Wrong datatype input! Restarting ...";
                }
                cout << "Enter second number to proceed: ";
                cin >> in_num2;
                if (!cin)
                {
                    cerr << "Wrong datatype input! Restarting ...";
                }
                cout << "The sum of " << in_num1 << " and " << in_num2 << " is " << sumTwoNumbers(in_num1, in_num2);
                break;
            case 2:

                break;
            case 3:
            
                break;
            case 4:
            
                break;
            case 5:
                //No code needed
                break;
            default:
                cerr << "\nWrong choice";
                break;
        }
    }
    return 0;
}

double sumTwoNumbers(double num1, double num2)
{
    return num1 + num2;
}