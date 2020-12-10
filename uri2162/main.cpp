#include <iostream>
using namespace std;
int main()
{
    int N, flag = 0;
    cin >> N;
    int H[N];

    for(int i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    if(N == 2)
    {
        if(H[0] == H[1])
        {
            flag = 0;
        }
        else{
            flag = 1;
        }
    }

    if(N > 2)
    {
        for(int i = 0; i < N; i++)
        {
            if(H[i+1] > H[i] && H[i+2] < H[i+1])
            {
                flag = 1;
                break;
            }
            else if(H[i+1] < H[i] && H[i+2] > H[i+1])
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        cout << "1" << endl;
    }
    else if(flag == 0)
    {
        cout << "0" << endl;
    }

    return 0;
}
