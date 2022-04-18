#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "All     : ";
    for (int i = 1; i <= n; i++)
        cout << setw(4) << i;

    cout << endl
         << "Even    : ";
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            cout << setw(4) << i;

    cout << endl
         << "Odd     : ";
    for (int i = 1; i <= n; i++)
        if (i % 2 != 0)
            cout << setw(4) << i;

    cout << endl
         << "Div. 4  : ";
    for (int i = 1; i <= n; i++)
        if (i % 4 == 0)
            cout << setw(4) << i;

    return 0;
}