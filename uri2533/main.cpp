#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int T, N, C;

    while(cin >> T)
    {

        int totalA = 0, totalB = 0;
        for(int i = 0; i < T; i++)
        {

            cin >> N >> C;
            totalA += (N * C);
            totalB += C;
        }

        cout << fixed << setprecision(4) << totalA / (totalB * 100.0) << endl;
    }

    return 0;
}
