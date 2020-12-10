#include <iostream>

using namespace std;

int main()
{   int N, M, diff, count = 0;
    int bills[6] = {2, 5, 10, 20, 50, 100};
    while(1)
    {
        cin >> N, M;
        if(N == 0 && M == 0)
        {
            break;
        }
        diff = M - N;

        for(int i = 0; i < 6; i++)
        {
           if(bills[i] == diff)
           {
               count += 1;
           }
        }

        if(count == 1
           )
        {
            cout << "impossible" << endl;
        }
        else{
            cout << "possible" << endl;
        }



    }

    return 0;
}
