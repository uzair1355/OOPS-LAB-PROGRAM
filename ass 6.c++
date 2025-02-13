#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "enter : 1 - vegetarian  and 2 - non-vegtarain \n";
    cin >> x;

    switch (x)
    {

    case 1:
        cout << "choose: 1 - paneer, 2 - razma daal , 3 - salad\n";
        cin >> y;

        switch (y)
        {

        case 1:
            cout << "paneer";
            break;
        case 2:
            cout << "razma daal";
            break;
        case 3:
            cout << " salad";
            break;
        }

        break;

    case 2:
        cout << "choose: 1 - chicken fried rice, 2 - mutton kabab , 3 -chiken momos\n";
        cin >> z;
        switch (z)
        {

        case 1:
            cout << "chicken fried rice";
            break;
        case 2:
            cout << "mutton kabab ";
            break;
        case 3:
            cout << " chiken momos";
            break;
        }

        break;

    default:
        cout << "invalid option";
        break;
    }
}
