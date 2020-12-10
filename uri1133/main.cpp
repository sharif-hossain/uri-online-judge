#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;

    int temp;

    if(X > Y)
    {
        temp = X;
        X = Y;
        Y = temp;
    }

        for(int i = X + 1; i < Y; i++)
        {
            if(i%5 == 2 || i%5 == 3)
            {
                cout << i << endl;
            }
        }


    return 0;
}



