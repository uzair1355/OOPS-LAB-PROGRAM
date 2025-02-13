#include <iostream>
using namespace std;

int main()
{

    // writre a program that takes an integer as input and uses a for loop with an if statement to check
    // if the number is prime. If it’s prime, print "Prime Number"; otherwise, print "Not a Prime
    // Number.

    int num, i, flag = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1)
    {
        flag = 1;
    }

    else
    {
        for (i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
            {
               
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {

        cout << "number is prime";
    }
    else
    {
        cout << " Numbers less than or equal to 1 are not prime";
    }
}
