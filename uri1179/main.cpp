#include <iostream>

using namespace std;

int main()
{
    int n, i, e[5], o[5], a = 0, b = 0, y, x;

    for(i = 0; i < 15; i++)
    {
        cin >> n;

        if(n%2 == 0)
        {
            e[a] = n;
            a++;
            if(a == 5)
            {
                for(x = 0; x < 5; x++)
                {
                    cout << "par [" << x << "] = " << e[x] << endl;
                    e[x] = 0;
                    a = 0;
                }
            }

        }

        else
        {
            o[b] = n;
            b++;
            if(b == 5)
            {
                for(y = 0; y < 5; y++)
                {
                    cout << "impar [" << y << "] = " << o[y] << endl;
                    o[y] = 0;
                    b = 0;
                }
            }
        }

    }

    for(y = 0; y < 5; y++)
    {
        if(o[y] == 1)
        {
            break;
        }
        cout << "impar [" << y << "] = " << o[y] << endl;
    }
    for(x = 0; x < 5; x++)
    {
        if(e[x] == 0)
        {
            break;
        }
        cout << "par [" << x << "] = " << e[x] << endl;
    }

    return 0;
}
