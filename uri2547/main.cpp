#include <iostream>

using namespace std;

int main()
{
    int i,a,b,c,in,count = 0;

    while(cin >> a >> b >> c)
    {

        for(i = 0; i < a; i++)
        {
            cin >> in;

            if(in >= b && in <= c)
            {
                count++;
            }
        }

        cout << count << endl;
        count = 0;
    }
    return 0;
}
