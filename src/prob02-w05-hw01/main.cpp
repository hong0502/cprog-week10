#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int n3n4 = 0;

    while (cin >> n)
    {
        if ((n % 3 != 0) && (n % 4 != 0))
        {
            n3n4 += n;
            cout << setw(4) << n;
        }
    }
    cout << endl
         << "sum of n3n4 # = " << n3n4 << endl;

    return 0;
}