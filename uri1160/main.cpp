#include <iostream>

using namespace std;

int main()
{
    int N, PA, PB;
    float G1, G2;

    cin >> N;
    if(1 <= N <= 3000)
    {
        for(int i = 1; i <= N; i++)
        {
            cin >> PA >> PB >> G1 >> G2;
            if(100 <= PA < 1000000 && 100 <= PB <= 1000000)
            {
               int rate1 = PA + PA * (G1/100);
              int  rate2 = PB + PB * (G2/100);
                cout << rate1 << endl;
                cout << rate2 << endl;
            }
        }
    }

    return 0;
}
