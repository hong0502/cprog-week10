#include <iostream>
#include <iomanip>

using namespace std;

string toLG(int g)
{
    if (g >= 90)
        return "A+";
    if (g >= 85)
        return "A";
    if (g >= 80)
        return "A-";
    if (g >= 77)
        return "B+";
    if (g >= 73)
        return "B";
    if (g >= 70)
        return "B-";
    if (g >= 67)
        return "C+";
    if (g >= 63)
        return "C";
    if (g >= 60)
        return "C-";
    if (g >= 50)
        return "D";
    if (g >= 1)
        return "E";
    return "X";
}

int main()
{
    int col;
    int g;
    int c;
    float gpa;
    int tc;
    int pad;

    cout.precision(2);
    while (cin >> col)
    {
        gpa = 0;
        tc = 0;
        while (col > 0)
        {
            cin >> g;
            cout << setw(6) << left << toLG(g);
            col--;
        }
        cout << endl;
    }

    return 0;
}