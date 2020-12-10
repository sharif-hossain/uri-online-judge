#include <iostream>

using namespace std;

int main()
{
    int N, T, diff;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> T;

        diff = (T-2015);
        if(diff >= 0)
        {
            cout << diff + 1 << " A.C." << endl;
        }
        else
        {
            diff *= -1;
            cout << diff << " D.C." << endl;
        }
    }
    return 0;
}
