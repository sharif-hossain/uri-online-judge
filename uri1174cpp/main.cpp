#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N[20], temp, i, j;

    for(i = 19; i >= 0; i-- )
    {
        cin >> N[i];
    }

    for(j  = 0; j < 20; j++)
    {
        cout << "N[" << j << "] = " << N[j] << endl;

    }

    return 0;
}
