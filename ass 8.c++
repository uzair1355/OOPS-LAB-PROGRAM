#include <iostream>
using namespace std;
int main()
{

    // Write a program that takes an integer from the user representing the month (1 for January, 2 for
    // February, etc.) and uses a switch statement to print the number of days in that month. Consider
    // leap year (assume it is a leap year if February is chosen) and handle it with an additional check.

    int x;

    cout << "enter yojur month respectively as shown here :\n  1 - jan \n 2 - feb \n 3 - march \n 4 - april \n 5 - may \n 6- june \n7- july \n 8 - august \n 9 - sept \n 10 - oct\n 11 - november \n 12 - december \n";

    cin >> x;

    switch (x)
    {

    case 1:
        cout << "your month is jan";
        break;

    case 2:
        cout << "your month is feb";
        break;

    case 3:
        cout << "your month is march";
        break;

    case 4:
        cout << "your month is april";
        break;

    case 5:
        cout << "your month is may";
        break;

    case 6:
        cout << "your month is june";
        break;

    case 7:
        cout << "your month is july";
        break;

    case 8:
        cout << "your month is august";
        break;

    case 9:
        cout << "your month is september";
        break;

    case 10:
        cout << "your month is oct";
        break;

    case 11:
        cout << "your month is nov";
        break;

    case 12:
        cout << "your month is dec";
        break;

    default:
        cout << "invalid option";
        break;
    }
}