#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n;
   int col = 0;

   cin >> n;

   for (int i = 1; i <= n; i++)
   {
      if (i % 2 == 0)
      {
         cout << setw(4) << i;
         col++;
         if (col % 4 == 0)
         {
            cout << endl;
            col = 0;
         }
      }
   }
   cout << endl;
   return 0;
}
