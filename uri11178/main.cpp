#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N[100];
    double X;
    cin >> X;

    for(int i = 0; i < 100; i++)
    {
        cout << fixed << setprecision(4) << "N[" << i << "] = " << X << endl;
        X /= 2;
    }
    return 0;
}
