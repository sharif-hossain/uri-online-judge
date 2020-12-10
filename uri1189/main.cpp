#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double M[12][12], sum = 0.0;
    int n = 11, o = 1;

    char O[2];
    cin >> O;

    for(int r = 0; r < 12; r ++)
    {
        for(int c = 0; c < 12; c++)
        {
            cin >> M[r][c];
        }
    }

    for(int c = 11; c > 6; c --)
    {
        for(int r = o; r < n; r++)
        {
            sum += M[r][c];
        }
        n --;
        o ++;
    }

    if(O[0] == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(O[0] == 'M')
    {
        cout << fixed << setprecision(1) << sum/30 << endl;
    }

    return 0;
}
