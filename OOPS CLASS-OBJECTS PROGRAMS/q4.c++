#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(): length(0), width(0)
    {}
    void setlb()
    {

        cout << "enter length and width of the rectangle";
        cin >> length >> width;
    }

    int calculateperimeter()
    {

        return 2 * ((length + width));
    }
    void printperimeter()
    {

        int per = calculateperimeter();

        cout << "perimeter of the rectangle:" << per;
    }
};

int main()
{

    Rectangle r1;
    r1.setlb();
    r1.calculateperimeter();
    r1.printperimeter();

    return 0;
}