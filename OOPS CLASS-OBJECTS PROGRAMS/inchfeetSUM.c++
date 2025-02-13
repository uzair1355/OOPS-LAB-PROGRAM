#include <iostream>
using namespace std;

class distance
{
private:
    int feet;
    int inches;

public:
    void getdata()
    {
        int i;

        cout << "enter the inches";
        cin >> i;

        feet = inches / 12;
        inches += inches % 12;
    }

    distance adddistance(distance d2)
    {
        distance temp;
        temp.inches = inches + d2.inches;
        temp.feet = feet + d2.feet;

        temp.feet += temp.inches / 12;
        temp.inches = temp.inches % 12;

        return temp;
    }

    void showdata()
    {

        cout << feet << " " << inches;
    }
};

int main()
{

    distance d1, d2, d3;

    d1.getdata();
    distance d3 = d1.adddistance(d2);

    d3.showdata();

    return 0;
}