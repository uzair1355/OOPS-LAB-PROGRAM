#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    // Write a program that accepts a student’s marks in 5 subjects.
    // • Use nested if-else to assign grades (A, B, C, D, F) based on the percentage.
    // • If the student fails in more than one subject, print "Repeat Year" regardless of perce

    int marks[5];
    int i, j;
    int count = 0;
    int totalmarks = 0;

    cout << "enter the marks of the 5 subjects\n";

    for (i = 0; i < 5; i++)
    {

        cin >> marks[i];
        totalmarks += marks[i];
    }

    float percentage = ((float)totalmarks / 5);

    for (j = 0; j < 5; j++)
    {

        if (marks[j] < 40)
        {
            count++;
        }
    }

    if (count >= 1)
    {
        cout << "REPEAT YEAR\n";
    }

    else
    {

        if (percentage >= 90)
        {
            cout << "your grade is A";
        }
        else if (percentage < 90 && percentage >= 80)
        {
            cout << "your grade is B";
        }

        else if (percentage < 80 && percentage >= 70)
        {
            cout << "your grade is C";
        }
        else if (percentage < 70 && percentage >= 60)
        {
            cout << "your grade is D";
        }
        else
        {
            cout << "your grade is F";
        }
    }

    return 0;
}