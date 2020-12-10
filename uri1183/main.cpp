#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double M[12][12], sum = 0.0;
    int r, c, p = 1;
    char O[2];
    cin >> O;

    for(r = 0; r < 12; r++)
    {
        for(c = 0; c < 12; c++)
        {
            cin >> M[r][c];
            if(c < r)
            {
                sum += M[r][c];
            }

        }
    }

   /* for(int i = 0; i <= 10; i++)
    {
        for(int j = 1; j < 12; j++)
        {
            sum += M[i][j];
        }
        p++;
    }
*/
    if(O[0] == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(O[0] == 'M')
    {
        cout << fixed << setprecision(1) << sum/66 << endl;
    }
}
