#include <iostream>
using namespace std;
int main()
{
    int N, flag = 0, R[200];
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> R[i];
    }

    for(int i = 0; i < N-1; i++)
    {
        if(R[i+1] < R[i])
        {
            flag = 1;
            cout << i + 2 << endl;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "0" << endl;
    }

    return 0;
}
