// KM = M

#include <iostream>

using namespace std;
class meter;

class kilometer
{
private:
    int kilo;

public:
    kilometer() : kilo(0) {};

    kilometer(meter m) // one argument constructer in destination part
    {
        kilo = m.getdata() / 1000;
    }

    void showdata()
    {

        cout << kilo;
    }

    kilometer(int k)
    {
        kilo = k;
    }
};

class meter
{
private:
    int m;

public:
    meter() : m(0) {};

    void setdata()
    {
        cout << "enter meters";
        cin >> m;
    }

    operator kilometer()
    {

        int k = m / 1000;

        return kilometer(k);
    }
    int getdata()
    {

        return m;
    }
};
int main()
{

    kilometer k1;
    meter m1;
    m1.setdata();

    meter k1 = m1;

    k1.showdata();
}