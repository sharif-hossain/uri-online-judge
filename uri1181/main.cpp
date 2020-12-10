#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double M[12][12], sum = 0.0;
    int C, r, c;
    char T[2];
    cin >> C >> T;

    for(r = 0; r < 12; r++)
    {
        for(c = 0; c < 12; c++)
        {
            cin >> M[r][c];
        }
    }

    for(r = 0; r < 12; r++)
    {
        sum += M[r][C];
    }

    if(T[0] == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(T[0] == 'M')
    {
        cout << fixed << setprecision(1) << sum/12 << endl;
    }
}
