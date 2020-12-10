#include <iostream>

using namespace std;

int main()
{
    char x[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cout << x[i];
    }
    cout << endl;
    return 0;
}
