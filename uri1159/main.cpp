#include <iostream>

using namespace std;

int main()
{
    int X, sum = 0;
    while(1)
    {
        cin >> X;

        if(X == 0)
        {
            break;
        }

        else
        {
            if(X%2 != 0)
            {
                X++;
            }

            for(int i = 1; i <= 5; i++)
            {
                sum += X;
                X += 2;
            }
            cout << sum << endl;
            sum = 0;
        }
    }

    return 0;
}
