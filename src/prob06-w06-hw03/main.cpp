#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        cout << setw(3) << n << " : ";
        for (int i = 0; i < n; i++)
        {
            cout << ((n % 2 == 0) ? "#" : "*");
        }
        cout << endl;
    }

    return 0;
}