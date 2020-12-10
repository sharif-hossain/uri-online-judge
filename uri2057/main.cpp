#include <iostream>

using namespace std;

int main()
{
    int dep, tra, des, time;
    cin >> dep >> tra >> des;

    time = dep + tra + des;

    if(time == 24)
    {
        cout << 0 << endl;
    }
    else if(time > 24)
    {
        cout << time-24 << endl;
    }
    else if(time < 0)
    {
        cout << 24 + time << endl;
    }
    else
    {
        cout << time << endl;
    }

    return 0;
}
