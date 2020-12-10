#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double M[12][12], sum = 0.0;
    char T[2];
    int n = 11;
    cin >> T;

    for(int r = 0; r < 12; r++)
    {
        for(int c = 0; c < 12; c++)
        {
            cin >> M[r][c];
        }
    }

    for(int r = 1; r <= 11; r++)
    {
        for(int c = n; c < 12; c ++)
        {
            sum += M[r][c];
        }
        n --;
    }

    if(T[0] == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(T[0] == 'M')
    {
        cout << fixed << setprecision(1) << sum/66 << endl;
    }

    return 0;
}
