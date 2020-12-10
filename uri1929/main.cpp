#include <iostream>

using namespace std;

int main()
{
    int N[4], temp, i, j;

    for(int i = 0; i < 4; i++)
    {
        cin >> N[i];
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if(N[i] > N[j])
            {
                temp = N[i];
                N[i] = N[j];
                N[j] = temp;
            }
        }
        //cout << N[i] << endl;
    }

    if(N[0] + N[1] > N[2] || N[1] + N[2] > N[3])
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
