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

    int max = a;
    int min = a;

    min = (min > b) ? b : min;
    min = (min > c) ? c : min;
    min = (min > d) ? d : min;
    min = (min > e) ? e : min;

    max = (max < b) ? b : max;
    max = (max < c) ? c : max;
    max = (max < d) ? d : max;
    max = (max < e) ? e : max;

    cout << setw(5) << a
         << setw(5) << b
         << setw(5) << c
         << setw(5) << d
         << setw(5) << e << endl;
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}