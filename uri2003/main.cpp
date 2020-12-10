#include <iostream>

using namespace std;

int main()
{
    int h, m;
    char s;


    while(cin >> h >> s >>  m)
    {
        if(h < 7 || (h == 7 &&  m == 0))
        {
            cout << "Atraso maximo: " << "0" << endl;
        }
        else
        {
            cout << "Atraso maximo: " << ((h+1)-8)*60 +  m << endl;
        }
    }

    //cout << h << s << m;


    return 0;
}
