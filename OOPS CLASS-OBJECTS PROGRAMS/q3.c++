#include <iostream>
using namespace std;

class Traingle
{
private:
    int base;
    int height;

public:
    Traingle() :

                 base(10), height(10)
    {

        cout << "object created";
    }

    int calculatearea()
    {

        return 0.5 * base * height;
    }
    void getarea()
    {

        int area = calculatearea();
        cout << "your area :" << area;
    }

    ~Traingle()
    {

        cout << "object destroyed";
    }
};

int main()
{
    Traingle t1;

    t1.calculatearea();
    t1.getarea();

    return 0;
}