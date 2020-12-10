#include <iostream>

using namespace std;

int main()
{


    int x, y, z = 0, a = 0;
    cin >> x >> y;

    for(int i = 1; i <= y; i++)
    {
        z++;

        cout << i;
        if(z < x)
        {
            cout << " ";

        }
         else{
            cout << endl;
            z = 0;
         }
    }
    return 0;
}
