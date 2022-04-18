#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    int mid = a;
    int cnt = 0;

    (a > b) && cnt++;
    (a > c) && cnt++;
    (a > d) && cnt++;
    (a > e) && cnt++;
    if (cnt == 2)
    {
        mid = a;
    }
    else
    {
        cnt = 0;
        (b > a) && cnt++;
        (b > c) && cnt++;
        (b > d) && cnt++;
        (b > e) && cnt++;
        if (cnt == 2)
        {
            mid = b;
        }
        else
        {
            cnt = 0;
            (c > a) && cnt++;
            (c > b) && cnt++;
            (c > d) && cnt++;
            (c > e) && cnt++;
            if (cnt == 2)
            {
                mid = c;
            }
            else
            {
                cnt = 0;
                (d > a) && cnt++;
                (d > b) && cnt++;
                (d > c) && cnt++;
                (d > e) && cnt++;
                if (cnt == 2)
                {
                    mid = d;
                }
                else
                {
                    mid = e;
                }
            }
        }
    }

    cout << setw(5) << a
         << setw(5) << b
         << setw(5) << c
         << setw(5) << d
         << setw(5) << e << endl;
    cout << "mid = " << mid << endl;

    return 0;
}