#include <iostream>

using namespace std;

int main()
{
    int V, N[10];
    cin >> V;

    if(V < 50)
    {
        for(int i = 0; i < 10; i++)
        {
            N[i] = V;
            cout << "N[" << i << "] = " << V << endl;
            V *= 2;
        }
    }
    return 0;
}
