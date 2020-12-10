#include <iostream>

using namespace std;

int main()
{
    int X, Y, j = 0;
    cin >> X >> Y;


    if(Y < 100000 && X > 1 && X < 20 && X < Y)
    {
        for(int i = 1; i <= Y; i++)
        {
            cout << i;
            j++;

            if(j < X)
            {
                cout << " ";
            }

            else
            {
                cout << endl;
                j = 0;
            }
        }
    }


    return 0;
}
