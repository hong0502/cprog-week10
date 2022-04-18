#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int cnt = 0;

    while (cin >> n)
    {
        cout << setw(6) << n;
        while (n > 0)
        {
            if (n % 10 == 3)
                cnt++;
            n /= 10;
        }
    }

    cout << endl
         << "Counting the number of digi 3 : " << cnt << endl;

    return 0;
}