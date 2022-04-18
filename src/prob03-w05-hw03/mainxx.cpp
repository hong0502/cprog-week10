#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int op, n;
    cin >> op;
    cin >> n;

    if (op == 0)
    {
        cout << "All     : ";
        for (int i = 1; i <= n; i++)
            cout << setw(4) << i;
    }
    else if (op == 1)
    {
        cout << "Even    : ";
        for (int i = 1; i <= n; i++)
            if (i % 2 == 0)
                cout << setw(4) << i;
    }
    else if (op == 2)
    {
        cout << "Odd     : ";
        for (int i = 1; i <= n; i++)
            if (i % 2 != 0)
                cout << setw(4) << i;
    }
    else if (op == 3)
    {
        cout << "Div. 4  : ";
        for (int i = 1; i <= n; i++)
            if (i % 4 == 0)
                cout << setw(4) << i;
    }

    return 0;
}