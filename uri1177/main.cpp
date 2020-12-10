#include <iostream>

using namespace std;

int main()
{
    int i,x, j=0;;
    cin >> x;
    for(i=0; i<1000; i++)
    {
        cout << "N[" << i << "] = " << j << endl;
        j++;
        if(j==x)
            j=0;
    }

    return 0;
}
