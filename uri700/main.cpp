#include <iostream>

using namespace std;

int main()
{
    int n;
    int large = 0;
    int position = 0;
    for(int i = 1; i <= 100; i++)
    {
        cin >> n;
        if(n > large)
        {
            large = n;
            position = i;
        }
    }
    cout << large << endl << position << endl;
    return 0;
}
