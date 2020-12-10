#include <iostream>

using namespace std;

int main()
{
    int P, N, diff, flag = 0;

    cin >> P >> N;
    int X[N];

    for(int i = 1; i <= N; i++)
    {
        cin >> X[i];
    }

    for(int i = 1; i < N; i++)
    {
        diff =  X[i] - X[i+1];
        if(diff < 0)
        {
            diff *= -1;
        }
        if(diff > P)
        {
            flag = 1;
            break;
        }

    }

    if(flag == 1)
    {
        cout << "GAME OVER" << endl;
    }
    else
    {
        cout << "YOU WIN" << endl;
    }

    return 0;
}
