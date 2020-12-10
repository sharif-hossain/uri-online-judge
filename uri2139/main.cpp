#include <iostream>

using namespace std;

int main()
{
    int m, d;
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

    while( cin >> m >> d)
    {
        if(m == 12 && d == 25)
        {
            cout << "E natal!" << endl;
        }
        else if(m == 12 && d == 24)
        {
            cout << "E vespera de natal!" << endl;
        }
        else if(m == 12 && d > 24)
        {
            cout << "Ja passou!" << endl;
        }
        else
        {
            int days = month[m-1] - d;

            for(int i = m; i < 12; i++)
            {

                days += month[i];
            }
            cout<<"Faltam "<< days <<" dias para o natal!" << endl;
        }
    }
    return 0;
}
