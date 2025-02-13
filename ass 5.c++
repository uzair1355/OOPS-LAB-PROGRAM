#include <iostream>
using namespace std;
int main()
{

    float x, y;
    int z;

    cout << "enter the two numbers \n";
    cin >> x >> y;

    cout << "for operatons enter respectively : 1 for +, 2 for - , 3 for *,  4 for   \n ";
    cin >> z;

    switch (z)
    {

    case 1:
        cout << x + y;
        break;
    case 2:
        cout << x - y;
        break;
    case 3:
        cout << x * y;
        break;
    case 4:
        cout << x / y;
        break;

    default:
        cout << "invalid chioce ";
        break;
    }
}