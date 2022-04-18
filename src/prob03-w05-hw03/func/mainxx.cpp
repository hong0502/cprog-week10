/*

[課堂作業 3]：輸出 1 ~ n ：全部整數、偶數、奇數、被四整除的整數。

基本題輸出結果：

PS C:\cprog-2022s\src\week08\w05-hw03> echo 10 | .\main.exe
All     :    1   2   3   4   5   6   7   8   9  10
Even    :    2   4   6   8  10
Odd     :    1   3   5   7   9
Div. 4  :    4   8

PS C:\cprog-2022s\src\week08\w05-hw03> echo 20 | .\main.exe
All     :    1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20
Even    :    2   4   6   8  10  12  14  16  18  20
Odd     :    1   3   5   7   9  11  13  15  17  19
Div. 4  :    4   8  12  16  20

加分題輸出結果：



*/

#include <iostream>
#include <iomanip>

using namespace std;

void fun(int op, int n)
{
    if (op == 0)
        cout << "All     : ";
    else if (op == 1)
        cout << "Even    : ";
    else if (op == 2)
        cout << "Odd     : ";
    else if (op == 3)
        cout << "Div. 4  : ";
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
    int n, op;
    cin >> op;
    cin >> n;

    fun(op, n);

    return 0;
}