#include <iostream>

using namespace std;

int main()
{
    long long int n;

    int i,j,k;
    cin >> n;
    while(n)
    {
        i = n % 10;
        n = n / 10;
        cout << i;
    }

    cout << endl;
    return 0;
}
