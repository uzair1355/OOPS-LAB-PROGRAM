#include <iostream>
using namespace std;

int main()
{

    int flag = 0;
    int year, year1;
    int Fyear;

    cout << "enter  your FIRST  year \n ";
    cin >> year;
    cout << "enter  your 2ND year \n ";
    cin >> year1;

    year = Fyear;

   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
       
      

    

       






     
    }
    else

        while (year < year1)
        {
            year++;

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                for (int j = 1; year <= year1; j++)
                {

                    year = year + 4;
                    flag++;
                }
                cout << "no of leap year" << flag << endl;
                cout << year << endl;
            }
        }



year = Fyear;
cout<<year;


}
