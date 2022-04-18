#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int col = 0;

    while (cin >> n)
    {
        if ((n % 3 == 0) || (n % 4 == 0))
        {
            cout << setw(8) << left << n;
            col++;
            if (col % 5 == 0)
                cout << endl;
        }
    }

    return 0;
}