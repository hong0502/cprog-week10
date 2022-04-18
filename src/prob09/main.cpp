/*
讀進一任意整數n，將整數n中的所有『數字』加總並將總和輸出。

參考測試結果：

PS C:\cprog-2022s\src\week08\prob04> echo 123456789 | .\main.exe
sum of all digis of 123456789 = 45

PS C:\cprog-2022s\src\week08\prob04> echo 88888888 | .\main.exe
sum of all digis of 88888888 = 64

PS C:\cprog-2022s\src\week08\prob04> echo 7777777 | .\main.exe
sum of all digis of 7777777 = 49

PS C:\cprog-2022s\src\week08\prob04> echo 1020304050 | .\main.exe
sum of all digis of 1020304050 = 15

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;

    int m = n;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    cout << "sum of all digis of " << m << " = " << sum << endl;

    return 0;
}