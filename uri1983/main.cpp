#include <iostream>

using namespace std;

int main()
{
    int n ;

    cin >> n;

    int reg[n], large;
    double note[n], max = 0.0;

    for(int i = 1; i <= n; i++)
    {
        cin >> reg[i] >> note[i];


            if(note[i] > max)
            {
                max = note[i];
                large = reg[i];
            }

    }

    if(max < 8)
    {
        cout << "Minimum note not reached" << endl;
    }
    else
    {
        cout << large << endl;
    }


    return 0;
}
