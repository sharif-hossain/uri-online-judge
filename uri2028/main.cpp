#include <iostream>

using namespace std;

int main()
{
    int n, i, j, counter = 0;

    while(cin >> n)
    {
        int num = 1;
        counter ++;

        for(j = 1; j <= n; j ++)
        {
            num += j;
        }

        if(n == 0 )
        {
            cout << "Caso " << counter << ": " << num << " numero" << endl;
        }
        else
        {
            cout << "Caso " << counter << ": " << num << " numeros" << endl;
        }

        cout << "0";

        for(i = 1; i <= n; i ++)
        {
            for(j = 1; j <= i; j ++)
            {
                cout << " " << i;
            }
        }
        cout << endl << endl;
    }

    return 0;
}
