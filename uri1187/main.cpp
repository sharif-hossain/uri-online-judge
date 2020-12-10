#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double M[12][12], sum = 0.0;
    char O[2];
    int a = 0, b = 4;

    cin >> O;

    for(int r = 0; r < 12; r++)
    {
        for(int c = 0; c < 12; c++)
        {
            cin >> M[r][c];
        }
    }

    for(int r = 1; r <= 10; r++)
    {
        for(int c = a;  c <= b; c++ )
        {
           sum +=  M[r][c];
        }
        a--;
        b--;
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
