#include <iostream>
using namespace std;

// Use nested if-else for the logic:
// o A year is a leap year if it is divisible by 4 but not by 100, unless divisible by 400.//
// • Add logic to print the next 5 leap years if the input year is not a leap year//
int main()
{

    int flag = 0;
    int year;
  

    cout << "enter your year \n ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "your year is leap yeaer";
    }

    else
    {

        while (true)
        {
            year++;
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                flag = 1;

                break;
            }
        }
    }

    if (flag == 1)
    {

        cout << year << endl;

        for (int j = 0; j < 5; j++)
        {

            year = year + 4;
            cout << year << endl;
        }
    }
}