#include <iostream>
#include <iomanip>

using namespace std;

void fun(int op, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (op == 0)
            cout << setw(4) << i;
        else if (op == 1 && i % 2 == 0)
            cout << setw(4) << i;
        else if (op == 2 && i % 2 == 1)
            cout << setw(4) << i;
        else if (op == 3 && i % 4 == 0)
            cout << setw(4) << i;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    cout << "All     : ";
    fun(0, n);
    cout << "Even    : ";
    fun(1, n);
    cout << "Odd     : ";
    fun(2, n);
    cout << "Div. 4  : ";
    fun(3, n);

    return 0;
}