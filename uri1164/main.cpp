#include <iostream>

using namespace std;

int main()
{
    int N, X, c, sum = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> X ;
        c = X/2;
        for(int j = 1; j <= c; j++)
        {
            if(X%j == 0)
            {
                sum += j;
            }
        }

        if(sum == X)
        {
            cout << X  << " eh perfeito" << endl;
            sum = 0;

        }
        else
        {
            cout << X << " nao eh perfeito" << endl;
            sum = 0;

        }

    }
    return 0;
}
