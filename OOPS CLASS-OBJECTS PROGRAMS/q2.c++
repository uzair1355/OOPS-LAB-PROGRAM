#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void setlb()
    {

        cout << "enter trhe length and width ";
        cin >> length >> width;
    }

    int calculatearea()
    {

        return length * width;
    }

    void getarea()
    {

        int area = calculatearea();

        cout << "your area : " << area;
    }
};

int main()
{

    Rectangle r1, r2;

    r1.setlb();
    r1.calculatearea();
    r1.getarea();

    return 0;
}