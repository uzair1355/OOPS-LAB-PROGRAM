#include <iostream>
using namespace std;

class counter
{
private:
    static int count;

public:
    counter()
    {
        ++count;
    }

    int showdata()
    {

       return count;
    }
};

int counter :: count =0;


int main()
{
    counter c1, c2;
   cout<< c1.showdata();
   c2.showdata();

    return 0;
}