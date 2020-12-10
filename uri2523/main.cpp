#include <iostream>

using namespace std;

int main()
{
    string msg;

    while(cin >> msg)
    {
        int num;
        cin >> num;
        int bulb;
        for(int i = 0; i < num; i++)
        {
            cin >> bulb;
            cout << msg[bulb - 1];
        }

        cout << endl;
    }

    return 0;
}
