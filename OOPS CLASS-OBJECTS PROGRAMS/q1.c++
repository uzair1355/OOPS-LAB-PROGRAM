#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;

public:
    void setradius()
    {

        cout << "enter the radius of the circle u want to cal area? ";
        cin >> radius;
    }

    int getarea()
    {

        return 3.14 * radius * radius;
    }
    void printarea()
    {

        int area = getarea();

        cout << "your area :"<<area;
    }
};

int main()
{

    Circle c1, c2;

    c1.setradius();
     c1.getarea();
    c1.printarea();

    return 0;
}