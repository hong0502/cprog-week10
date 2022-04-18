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

float toGP(int g)
{
    if (g >= 90)
        return 4.3;
    if (g >= 85)
        return 4;
    if (g >= 80)
        return 3.7;
    if (g >= 77)
        return 3.3;
    if (g >= 73)
        return 3.0;
    if (g >= 70)
        return 2.7;
    if (g >= 67)
        return 2.3;
    if (g >= 63)
        return 2.0;
    if (g >= 60)
        return 1.7;
    if (g >= 50)
        return 1.0;
    if (g >= 1)
        return 0;
    return 0;
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
        pad = 20;
        while (col > 0)
        {
            cin >> g;
            cin >> c;
            tc += c;
            gpa += toGP(g) * c;
            cout << setw(4) << left << toLG(g);
            pad -= 4;
            col--;
        }
        cout << setw(pad) << right << gpa / tc << endl;
    }

    return 0;
}