#include <iostream>

using namespace std;

int main()
{
    int T, B, A1, D1, L1, A2, D2, L2;
    double value1, value2;

    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        cin >> B;
        cin >> A1 >> D1 >> L1;
        cin >> A2 >> D2 >> L2;

        value1 = (A1 + D1)/2;
        value2 = (A2 + D2)/2;

        if(L1%2 == 0)
        {
            value1 += B;
        }
        if(L2%2 == 0)
        {
            value2 += B;
        }


        if(value1 == value2)
        {
            cout << "Empate" << endl;
        }
        if(value1 > value2)
        {
            cout << "Dabriel" << endl;
        }
        if(value1 < value2)
        {
            cout << "Guarte" << endl;
        }

    }
    return 0;
}
