#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int N, X, Y, sum = 0;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        cin >> X >> Y;

        if(X%2 == 0)
        {
            X++;
        }

        for(int j = 1; j <= Y; j++)
        {

            sum += X;
            X += 2;

        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
