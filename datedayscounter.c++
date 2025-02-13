#include <iostream>
using namespace std;

int daycounterof1styear(int year, int day, int month)
{
    int daycounter = 0, flag = 0;

    for (int i = month; i <= 12; i++)
    {
        switch (i)
        {
        // counting days for the first date till that month in that year with respective months as 31 and 30?
        case 1:
            daycounter += 31;
            break;
        case 3:
            daycounter += 31;
            break;
        case 5:
            daycounter += 31;
            break;
        case 7:
            daycounter += 31;
            break;
        case 8:
            daycounter += 31;

            break;

        case 10:
            daycounter += 31;

            break;
        case 12:
            daycounter += 31;
            break;

        case 4:
            daycounter += 30;
            break;
        case 6:
            daycounter += 30;
            break;
        case 9:
            daycounter += 30;
            break;
        case 11:
            daycounter += 30;
            break;
        case 2: // leap year problem

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {

                daycounter += 29;
            }

            else
            {
                daycounter += 28;
            }
            break;
        }
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        daycounter = daycounter + (31 - day);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        daycounter = daycounter + (30 - day);
    }
    else
    {

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            daycounter = daycounter + (29 - day);
        }

        else
        {
            daycounter = daycounter + (28 - day);
        }
    }

    return daycounter;
}

int daycounterof2ndyear(int year1, int month1, int day1)
{

    int daycounter = 0, flag = 0;

    for (int i = 1; i <= month1; i++)
    {
        switch (i)
        {
        // counting days for the first date till that month in that year with respective months as 31 and 30?
        case 1:
            daycounter += 31;
            break;
        case 3:
            daycounter += 31;
            break;
        case 5:
            daycounter += 31;
            break;
        case 7:
            daycounter += 31;
            break;
        case 8:
            daycounter += 31;

            break;

        case 10:
            daycounter += 31;

            break;
        case 12:
            daycounter += 31;
            break;

        case 4:
            daycounter += 30;
            break;
        case 6:
            daycounter += 30;
            break;
        case 9:
            daycounter += 30;
            break;
        case 11:
            daycounter += 30;
            break;
        case 2: // leap year problem

            if ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
            {

                daycounter += 29;
            }

            else
            {
                daycounter += 28;
            }
            break;
        }
    }
    
    daycounter = daycounter + day1;
   
    return daycounter;
}

int main()
{
    int day, month, year, day1, month1, year1, daycounter = 0, flag = 0;

    cout << "enter 1st date \n";
    cin >> day >> month >> year;

    cout << "enter 2nd date \n";
    cin >> day1 >> month1 >> year1;

    int store1 = daycounterof1styear(year, day, month);

    cout << store1 << "\n";

    // calculating no of leap years in btw the two dates :

    int yearcopy = year;
    for (int j = year; j <= year1; j++)
    {

        if ((j % 4 == 0 && j % 100 != 0) || (j % 400 == 0))
        {

            flag++;
        }
    }

    cout << "no of leap years :" << flag << "\n";

    int yeardiff = year1 - yearcopy;
    int yearcounter = ((yeardiff - flag) * 365) + (flag * 366);

    cout << yearcounter << "\n";

    int store2 = daycounterof2ndyear(year1, month1, day1);
    cout<<store2<<"\n";

     int   totaldays= store1 + store2 + yearcounter;

    cout<<"total days btw these two dates :"<<totaldays;
}
