#include <iostream>

using namespace std;

int main()
{
    int num, X, Y, sum = 0;

    cin >> num;

    for(int i = 1; i <= num; i ++)
    {
        cin >> X;
        cin >> Y;

        if(X == Y)
        {
            sum = 0;
        }
        else if(X < Y)
        {
            for(int j = X + 1; j < Y; j++)
            {
                if(j%2 != 0)
                {
                    sum += j;
                }
            }
        }
        else
        {
            for(int j = X - 1; j > Y; j--)
            {
                if(j%2 != 0)
                {
                    sum += j;
                }
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
