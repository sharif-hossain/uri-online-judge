#include <iostream>

using namespace std;

int main()
{
    double N, V, sum = 0, cont = 0;

    while(cin >> N)
    {
        for(int i = 0; i < N; i++)
        {
            cin >> V;

            if(V == 1)
            {
                cont++;
            }
        }

        double result = float(cont)/N;

        if(result >= 0.666)
        {
            cout << "impeachment" << endl;
        }
        else if(result < 0.666)
        {
            cout << "acusacao arquivada" << endl;
        }
        cont = 0;
    }
    return 0;
}
