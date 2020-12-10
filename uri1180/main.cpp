#include <iostream>

using namespace std;

int main()
{

    int N, pos, smallest;
    cin >> N;

    int X[N];

    for(int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    smallest = X[0];

    for(int i = 0; i < N; i++)
    {
        if(X[i] < smallest)
        {
            pos = i;
            smallest = X[i];

        }
    }


    cout << "Menor valor: " << smallest << endl;
    cout << "Posicao: " << position << endl;
    return 0;
}
