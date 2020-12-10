#include <iostream>
using namespace std;

int main()
{
    int N, V;

    while(cin >> N)
    {
        int  largest = 0;
        for(int i = 1; i <= N; i++)
        {
            cin >> V;

            if(V > largest)
            {
                largest = V;
            }
        }

        if(largest < 10)
        {
            cout << 1 << endl;

        }
        if(largest >= 10 && largest < 20)
        {
            cout << 2 << endl;

        }
        if(largest >= 20)
        {
            cout << 3 << endl;

        }
    }

    return 0;
}
