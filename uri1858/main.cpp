#include <iostream>

using namespace std;

int main()
{
    int N, min;
    cin >> N;
    int X[N];

    for(int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    min = 0;

    for(int i = 1; i < N; i++)
    {
        if(X[min] > X[i])
        {
            min = i;
        }
    }

    cout << min + 1 << endl;

    return 0;
}
