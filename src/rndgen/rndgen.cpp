#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{

    if (argc > 3)
    {
        int nc = atoi(argv[1]);
        int lb = atoi(argv[2]);
        int ub = atoi(argv[3]);
        int rn = (argc > 4) ? atoi(argv[4]) : time(NULL);
        srand(rn);

        for (int i = 1; i <= nc; i++)
        {
            cout << setw(8) << rand() % (ub - lb + 1) + lb;
            if (i % 10 == 0)
                cout << endl;
        }
    }
    else
    {
        cout << "Usage:" << endl
             << endl
             << "rndgen <# of rnd#> <lower bound> <upper Bound> [rnd seed]" << endl
             << endl;
    }

    return 0;
}